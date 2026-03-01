#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts {
    struct BuilderTable_SnapParams : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts", "BuilderTable").GetInnerClass("SnapParams");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetMaxBlockSnapDist() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxBlockSnapDist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxOffsetY() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxOffsetY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxTwistDotProduct() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxTwistDotProduct"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxUpDotProduct() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxUpDotProduct"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinOffsetY() {
            static BNM::Field<float> _field = GetClass().GetField(O("minOffsetY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSnapAttachDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("snapAttachDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSnapDelayOffsetDist() {
            static BNM::Field<float> _field = GetClass().GetField(O("snapDelayOffsetDist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSnapDelayTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("snapDelayTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetUnSnapDelayDist() {
            static BNM::Field<float> _field = GetClass().GetField(O("unSnapDelayDist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetUnSnapDelayTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("unSnapDelayTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMaxBlockSnapDist(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxBlockSnapDist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxOffsetY(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxOffsetY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxTwistDotProduct(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxTwistDotProduct"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxUpDotProduct(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxUpDotProduct"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinOffsetY(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minOffsetY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSnapAttachDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("snapAttachDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSnapDelayOffsetDist(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("snapDelayOffsetDist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSnapDelayTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("snapDelayTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnSnapDelayDist(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("unSnapDelayDist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnSnapDelayTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("unSnapDelayTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
