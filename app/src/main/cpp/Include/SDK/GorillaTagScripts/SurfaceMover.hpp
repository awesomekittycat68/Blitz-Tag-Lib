#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "RotationAxis.hpp"
#include "../GorillaTagScripts_Builder/BuilderMovingPart_BuilderMovingPartType.hpp"

namespace GorillaTagScripts {
    struct SurfaceMover : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts", "SurfaceMover");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetCurrForward() {
            static BNM::Field<bool> _field = GetClass().GetField(O("currForward"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCurrT() {
            static BNM::Field<float> _field = GetClass().GetField(O("currT"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCycleDelay() {
            static BNM::Field<float> _field = GetClass().GetField(O("cycleDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCycleDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("cycleDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("distance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDtSinceServerUpdate() {
            static BNM::Field<float> _field = GetClass().GetField(O("dtSinceServerUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetEndXf() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("endXf"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastServerTimeStamp() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastServerTimeStamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetLerpAlpha() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("lerpAlpha"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts_Builder::BuilderMovingPart_BuilderMovingPartType GetMoveType() {
            static BNM::Field<::GorillaTagScripts_Builder::BuilderMovingPart_BuilderMovingPartType> _field = GetClass().GetField(O("moveType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPercent() {
            static BNM::Field<float> _field = GetClass().GetField(O("percent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetReverseDir() {
            static BNM::Field<bool> _field = GetClass().GetField(O("reverseDir"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetReverseDirOnCycle() {
            static BNM::Field<bool> _field = GetClass().GetField(O("reverseDirOnCycle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRotateAmt() {
            static BNM::Field<float> _field = GetClass().GetField(O("rotateAmt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRotateStartAmt() {
            static BNM::Field<float> _field = GetClass().GetField(O("rotateStartAmt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRotationAmount() {
            static BNM::Field<float> _field = GetClass().GetField(O("rotationAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::RotationAxis GetRotationAxis() {
            static BNM::Field<::GorillaTagScripts::RotationAxis> _field = GetClass().GetField(O("rotationAxis"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRotationRelativeToStarting() {
            static BNM::Field<bool> _field = GetClass().GetField(O("rotationRelativeToStarting"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetStartingRotation() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("startingRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStartPercentage() {
            static BNM::Field<float> _field = GetClass().GetField(O("startPercentage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint32_t GetStartPercentageCycleOffset() {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("startPercentageCycleOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetStartXf() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("startXf"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetVelocity() {
            static BNM::Field<float> _field = GetClass().GetField(O("velocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrForward(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("currForward"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrT(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("currT"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCycleDelay(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("cycleDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCycleDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("cycleDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("distance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDtSinceServerUpdate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("dtSinceServerUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEndXf(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("endXf"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastServerTimeStamp(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastServerTimeStamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLerpAlpha(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("lerpAlpha"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMoveType(::GorillaTagScripts_Builder::BuilderMovingPart_BuilderMovingPartType value) {
            static BNM::Field<::GorillaTagScripts_Builder::BuilderMovingPart_BuilderMovingPartType> _field = GetClass().GetField(O("moveType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPercent(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("percent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReverseDir(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("reverseDir"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReverseDirOnCycle(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("reverseDirOnCycle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotateAmt(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("rotateAmt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotateStartAmt(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("rotateStartAmt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotationAmount(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("rotationAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotationAxis(::GorillaTagScripts::RotationAxis value) {
            static BNM::Field<::GorillaTagScripts::RotationAxis> _field = GetClass().GetField(O("rotationAxis"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotationRelativeToStarting(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("rotationRelativeToStarting"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartingRotation(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("startingRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartPercentage(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("startPercentage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartPercentageCycleOffset(uint32_t value) {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("startPercentageCycleOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartXf(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("startXf"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVelocity(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("velocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void CopySettings(::BNM::IL2CPP::Il2CppObject* settings) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopySettings"), {"settings"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(settings);
        }
        float CycleCompletionPercent() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("CycleCompletionPercent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int CycleCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("CycleCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int64_t CycleLengthMs() {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("CycleLengthMs"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void InitMovingSurface() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitMovingSurface"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool IsEvenCycle() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsEvenCycle"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Move() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Move"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int64_t NetworkTimeMs() {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("NetworkTimeMs"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        double PlatformTime() {
            static BNM::Method<double> _m = GetClass().GetMethod(O("PlatformTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Progress() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Progress"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 UpdatePointToPoint(float perc) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("UpdatePointToPoint"), {"perc"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(perc);
        }
        void UpdateRotation(float perc) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateRotation"), {"perc"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(perc);
        }
    };
}
