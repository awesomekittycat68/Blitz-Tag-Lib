#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CosmeticTiltReactor_TiltEvent_ComparisonMethod.hpp"
#include "CosmeticTiltReactor_TiltEvent_TiltEventType.hpp"

namespace GlobalNamespace {
    struct CosmeticTiltReactor_TiltEvent : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CosmeticTiltReactor").GetInnerClass("TiltEvent");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetAngleThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("angleThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CosmeticTiltReactor_TiltEvent_ComparisonMethod GetComparisonMethod() {
            static BNM::Field<::GlobalNamespace::CosmeticTiltReactor_TiltEvent_ComparisonMethod> _field = GetClass().GetField(O("comparisonMethod"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDotThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("dotThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("duration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasFired() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasFired"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnTiltEvent() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnTiltEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRetriggerDelay() {
            static BNM::Field<float> _field = GetClass().GetField(O("retriggerDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetThresholdCrossTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("thresholdCrossTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CosmeticTiltReactor_TiltEvent_TiltEventType GetTiltEventType() {
            static BNM::Field<::GlobalNamespace::CosmeticTiltReactor_TiltEvent_TiltEventType> _field = GetClass().GetField(O("tiltEventType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWasGreater() {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasGreater"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAngleThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("angleThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetComparisonMethod(::GlobalNamespace::CosmeticTiltReactor_TiltEvent_ComparisonMethod value) {
            static BNM::Field<::GlobalNamespace::CosmeticTiltReactor_TiltEvent_ComparisonMethod> _field = GetClass().GetField(O("comparisonMethod"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDotThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("dotThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("duration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasFired(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasFired"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnTiltEvent(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnTiltEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRetriggerDelay(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("retriggerDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetThresholdCrossTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("thresholdCrossTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTiltEventType(::GlobalNamespace::CosmeticTiltReactor_TiltEvent_TiltEventType value) {
            static BNM::Field<::GlobalNamespace::CosmeticTiltReactor_TiltEvent_TiltEventType> _field = GetClass().GetField(O("tiltEventType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWasGreater(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasGreater"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
