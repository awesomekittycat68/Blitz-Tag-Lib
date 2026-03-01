#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct KIDUI_AnimatedEllipsis : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "KIDUI_AnimatedEllipsis");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetAnimateOnStart() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_animateOnStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetAnimationCoroutine() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_animationCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAnimationSpeedMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("_animationSpeedMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetEllipsisAnimationCurve() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_ellipsisAnimationCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetEllipsisCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ellipsisCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<void*>* GetEllipsisObjects() {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("_ellipsisObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetEllipsisPrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_ellipsisPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetEllipsisRoot() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_ellipsisRoot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<float>* GetEllipsisStartingValues() {
            static BNM::Field<::BNM::Structures::Mono::List<float>*> _field = GetClass().GetField(O("_ellipsisStartingValues"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetEndScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("_endScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetIntermediaryScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("_intermediaryScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetNextChange() {
            static BNM::Field<float> _field = GetClass().GetField(O("_nextChange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPauseBetweenCycles() {
            static BNM::Field<float> _field = GetClass().GetField(O("_pauseBetweenCycles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPauseBetweenScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("_pauseBetweenScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRunAnimation() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_runAnimation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetScaleDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("_scaleDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetShouldLerp() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_shouldLerp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStartingScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("_startingScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAnimateOnStart(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_animateOnStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAnimationCoroutine(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_animationCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAnimationSpeedMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_animationSpeedMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEllipsisAnimationCurve(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_ellipsisAnimationCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEllipsisCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_ellipsisCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEllipsisObjects(::BNM::Structures::Mono::Array<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("_ellipsisObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEllipsisPrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_ellipsisPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEllipsisRoot(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_ellipsisRoot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEllipsisStartingValues(::BNM::Structures::Mono::List<float>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<float>*> _field = GetClass().GetField(O("_ellipsisStartingValues"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEndScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_endScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIntermediaryScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_intermediaryScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextChange(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_nextChange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPauseBetweenCycles(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_pauseBetweenCycles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPauseBetweenScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_pauseBetweenScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRunAnimation(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_runAnimation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScaleDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_scaleDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShouldLerp(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_shouldLerp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartingScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_startingScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* EllipsisAnimation() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("EllipsisAnimation"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* EllipsisAnimation2() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("EllipsisAnimation2"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float LerpLoop(float start, float end, float time, float offsetTime, float duration) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("LerpLoop"), {"start", "end", "time", "offsetTime", "duration"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(start, end, time, offsetTime, duration);
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetupEllipsis() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetupEllipsis"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::IL2CPP::Il2CppObject* StartAnimation() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("StartAnimation"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::IL2CPP::Il2CppObject* StopAnimation() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("StopAnimation"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
