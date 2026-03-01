#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct HalloweenWatcherEyes : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "HalloweenWatcherEyes");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetDurationToBeNormalWhenPlayerLooks() {
            static BNM::Field<float> _field = GetClass().GetField(O("durationToBeNormalWhenPlayerLooks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetLeftEye() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("leftEye"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLerpDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("lerpDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLerpValue() {
            static BNM::Field<float> _field = GetClass().GetField(O("lerpValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPlayersViewCenterAngle() {
            static BNM::Field<float> _field = GetClass().GetField(O("playersViewCenterAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPlayersViewCenterCosAngle() {
            static BNM::Field<float> _field = GetClass().GetField(O("playersViewCenterCosAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPretendingToBeNormalUntilTimestamp() {
            static BNM::Field<float> _field = GetClass().GetField(O("pretendingToBeNormalUntilTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetRightEye() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("rightEye"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeBetweenUpdates() {
            static BNM::Field<float> _field = GetClass().GetField(O("timeBetweenUpdates"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetWatchMaxAngle() {
            static BNM::Field<float> _field = GetClass().GetField(O("watchMaxAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetWatchMinCosAngle() {
            static BNM::Field<float> _field = GetClass().GetField(O("watchMinCosAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetWatchRange() {
            static BNM::Field<float> _field = GetClass().GetField(O("watchRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDurationToBeNormalWhenPlayerLooks(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("durationToBeNormalWhenPlayerLooks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftEye(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("leftEye"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLerpDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lerpDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLerpValue(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lerpValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayersViewCenterAngle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("playersViewCenterAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayersViewCenterCosAngle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("playersViewCenterCosAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPretendingToBeNormalUntilTimestamp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("pretendingToBeNormalUntilTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightEye(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("rightEye"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeBetweenUpdates(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timeBetweenUpdates"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWatchMaxAngle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("watchMaxAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWatchMinCosAngle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("watchMinCosAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWatchRange(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("watchRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::BNM::Coroutine::IEnumerator* CheckIfNearPlayer(float initialSleep) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("CheckIfNearPlayer"), {"initialSleep"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(initialSleep);
        }
        void LookNormal() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LookNormal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
