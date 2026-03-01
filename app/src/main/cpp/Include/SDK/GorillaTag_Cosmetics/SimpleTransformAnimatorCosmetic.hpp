#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SimpleTransformAnimatorCosmetic_animatedPropertyChoices.hpp"
#include "SimpleTransformAnimatorCosmetic_animModes.hpp"

namespace GorillaTag_Cosmetics {
    struct SimpleTransformAnimatorCosmetic : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Cosmetics", "SimpleTransformAnimatorCosmetic");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetTickRunning() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_TickRunning"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTickRunning(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_TickRunning"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GorillaTag_Cosmetics::SimpleTransformAnimatorCosmetic_animatedPropertyChoices GetAnimatedProperties() {
            static BNM::Field<::GorillaTag_Cosmetics::SimpleTransformAnimatorCosmetic_animatedPropertyChoices> _field = GetClass().GetField(O("animatedProperties"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAnimationDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("animationDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::SimpleTransformAnimatorCosmetic_animModes GetAnimMode() {
            static BNM::Field<::GorillaTag_Cosmetics::SimpleTransformAnimatorCosmetic_animModes> _field = GetClass().GetField(O("animMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetInterpolationCurve() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("InterpolationCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsAnimating() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isAnimating"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLoopAnim() {
            static BNM::Field<bool> _field = GetClass().GetField(O("loopAnim"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPosBlendCurrent() {
            static BNM::Field<float> _field = GetClass().GetField(O("posBlendCurrent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPosBlendTarget() {
            static BNM::Field<float> _field = GetClass().GetField(O("posBlendTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetPoseA() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("poseA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetPoseB() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("poseB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetTargetTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("targetTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAnimatedProperties(::GorillaTag_Cosmetics::SimpleTransformAnimatorCosmetic_animatedPropertyChoices value) {
            static BNM::Field<::GorillaTag_Cosmetics::SimpleTransformAnimatorCosmetic_animatedPropertyChoices> _field = GetClass().GetField(O("animatedProperties"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAnimationDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("animationDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAnimMode(::GorillaTag_Cosmetics::SimpleTransformAnimatorCosmetic_animModes value) {
            static BNM::Field<::GorillaTag_Cosmetics::SimpleTransformAnimatorCosmetic_animModes> _field = GetClass().GetField(O("animMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInterpolationCurve(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("InterpolationCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsAnimating(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isAnimating"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoopAnim(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("loopAnim"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPosBlendCurrent(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("posBlendCurrent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPosBlendTarget(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("posBlendTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPoseA(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("poseA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPoseB(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("poseB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("targetTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void CheckAnimationNeeded() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckAnimationNeeded"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DebugA() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DebugA"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DebugB() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DebugB"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DebugPlayAnimationOneShot() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DebugPlayAnimationOneShot"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DebugToggle() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DebugToggle"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool get_TickRunning() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_TickRunning"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
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
        void playAnimationOneshot() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("playAnimationOneshot"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_TickRunning(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TickRunning"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Toggle() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Toggle"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TogglePoseA() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TogglePoseA"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TogglePoseB() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TogglePoseB"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateTransform() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateTransform"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
