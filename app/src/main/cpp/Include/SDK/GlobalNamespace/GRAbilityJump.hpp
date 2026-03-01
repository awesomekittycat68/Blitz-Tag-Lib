#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GRAbilityBase.hpp"

namespace GlobalNamespace {
    struct GRAbilityJump : ::GlobalNamespace::GRAbilityBase {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRAbilityJump");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::AnimationData* GetAnimationData() {
            static BNM::Field<::GlobalNamespace::AnimationData*> _field = GetClass().GetField(O("animationData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetControlPoint() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("controlPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetElapsedTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("elapsedTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetEndPos() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("endPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsActive() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetJumpSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("jumpSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetJumpTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("jumpTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AbilitySound* GetSoundJump() {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("soundJump"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetStartPos() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("startPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAnimationData(::GlobalNamespace::AnimationData* value) {
            static BNM::Field<::GlobalNamespace::AnimationData*> _field = GetClass().GetField(O("animationData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetControlPoint(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("controlPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetElapsedTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("elapsedTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEndPos(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("endPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsActive(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJumpSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("jumpSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJumpTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("jumpTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSoundJump(::GlobalNamespace::AbilitySound* value) {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("soundJump"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartPos(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("startPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static ::BNM::Structures::Unity::Vector3 EvaluateQuadratic(::BNM::Structures::Unity::Vector3 p0, ::BNM::Structures::Unity::Vector3 p1, ::BNM::Structures::Unity::Vector3 p2, float t) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("EvaluateQuadratic"), {"p0", "p1", "p2", "t"});
            return _m.Call(p0, p1, p2, t);
        }
        bool IsActive() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsActive"));
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
        void Setup(::GlobalNamespace::GameAgent* agent, ::BNM::IL2CPP::Il2CppObject* anim, ::AudioSource* audioSource, ::Transform* root, ::Transform* head, ::GlobalNamespace::GRSenseLineOfSight* lineOfSight) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Setup"), {"agent", "anim", "audioSource", "root", "head", "lineOfSight"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(agent, anim, audioSource, root, head, lineOfSight);
        }
        void SetupJump(::BNM::Structures::Unity::Vector3 start, ::BNM::Structures::Unity::Vector3 end, float heightScale, float speedScale) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetupJump"), {"start", "end", "heightScale", "speedScale"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(start, end, heightScale, speedScale);
        }
        template <typename TP0 = void*>
        void SetupJumpFromLinkData(TP0 linkData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetupJumpFromLinkData"), {"linkData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(linkData);
        }
    };
}
