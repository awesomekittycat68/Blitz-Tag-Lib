#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct Campfire : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "Campfire");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Transform* GetBaseFire() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("baseFire"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBaseMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("baseMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBottomRange() {
            static BNM::Field<float> _field = GetClass().GetField(O("bottomRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetH() {
            static BNM::Field<float> _field = GetClass().GetField(O("h"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<bool>* GetIsActive() {
            static BNM::Field<::BNM::Structures::Mono::Array<bool>*> _field = GetClass().GetField(O("isActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastAngleBottom() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastAngleBottom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastAngleMiddle() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastAngleMiddle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastAngleTop() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastAngleTop"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetLastTimeOfDay() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("lastTimeOfDay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetMat() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("mat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetMergedBottom() {
            static BNM::Field<bool> _field = GetClass().GetField(O("mergedBottom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetMergedMiddle() {
            static BNM::Field<bool> _field = GetClass().GetField(O("mergedMiddle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetMergedTop() {
            static BNM::Field<bool> _field = GetClass().GetField(O("mergedTop"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetMiddleFire() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("middleFire"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMiddleMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("middleMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMiddleRange() {
            static BNM::Field<float> _field = GetClass().GetField(O("middleRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetOverrideDayNight() {
            static BNM::Field<int> _field = GetClass().GetField(O("overrideDayNight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPerlinBottom() {
            static BNM::Field<float> _field = GetClass().GetField(O("perlinBottom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPerlinMiddle() {
            static BNM::Field<float> _field = GetClass().GetField(O("perlinMiddle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPerlinStepBottom() {
            static BNM::Field<float> _field = GetClass().GetField(O("perlinStepBottom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPerlinStepMiddle() {
            static BNM::Field<float> _field = GetClass().GetField(O("perlinStepMiddle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPerlinStepTop() {
            static BNM::Field<float> _field = GetClass().GetField(O("perlinStepTop"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPerlinTop() {
            static BNM::Field<float> _field = GetClass().GetField(O("perlinTop"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPlayDuringRain() {
            static BNM::Field<bool> _field = GetClass().GetField(O("playDuringRain"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetS() {
            static BNM::Field<float> _field = GetClass().GetField(O("s"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSlerp() {
            static BNM::Field<float> _field = GetClass().GetField(O("slerp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStartingRotationBottom() {
            static BNM::Field<float> _field = GetClass().GetField(O("startingRotationBottom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStartingRotationMiddle() {
            static BNM::Field<float> _field = GetClass().GetField(O("startingRotationMiddle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStartingRotationTop() {
            static BNM::Field<float> _field = GetClass().GetField(O("startingRotationTop"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetTempVec() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("tempVec"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetTopFire() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("topFire"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTopMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("topMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTopRange() {
            static BNM::Field<float> _field = GetClass().GetField(O("topRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetV() {
            static BNM::Field<float> _field = GetClass().GetField(O("v"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWasActive() {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBaseFire(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("baseFire"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBaseMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("baseMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBottomRange(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("bottomRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetH(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("h"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsActive(::BNM::Structures::Mono::Array<bool>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<bool>*> _field = GetClass().GetField(O("isActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastAngleBottom(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastAngleBottom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastAngleMiddle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastAngleMiddle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastAngleTop(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastAngleTop"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastTimeOfDay(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("lastTimeOfDay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMat(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("mat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMergedBottom(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("mergedBottom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMergedMiddle(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("mergedMiddle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMergedTop(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("mergedTop"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMiddleFire(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("middleFire"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMiddleMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("middleMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMiddleRange(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("middleRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverrideDayNight(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("overrideDayNight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPerlinBottom(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("perlinBottom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPerlinMiddle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("perlinMiddle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPerlinStepBottom(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("perlinStepBottom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPerlinStepMiddle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("perlinStepMiddle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPerlinStepTop(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("perlinStepTop"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPerlinTop(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("perlinTop"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayDuringRain(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("playDuringRain"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetS(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("s"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlerp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("slerp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartingRotationBottom(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("startingRotationBottom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartingRotationMiddle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("startingRotationMiddle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartingRotationTop(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("startingRotationTop"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTempVec(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("tempVec"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTopFire(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("topFire"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTopMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("topMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTopRange(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("topRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetV(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("v"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWasActive(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Flap(float& perlinValue, float perlinStep, float& lastAngle, ::Transform*& flameTransform, float range, float multiplier, bool& isMerged) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Flap"), {"perlinValue", "perlinStep", "lastAngle", "flameTransform", "range", "multiplier", "isMerged"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&perlinValue, perlinStep, &lastAngle, &flameTransform, range, multiplier, &isMerged);
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
        void ReturnToOff(::Transform*& startTransform, float targetAngle, bool& isMerged) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReturnToOff"), {"startTransform", "targetAngle", "isMerged"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&startTransform, targetAngle, &isMerged);
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
