#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct DevInspectorScanner : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "DevInspectorScanner");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Text* GetHintTextOutput() {
            static BNM::Field<::Text*> _field = GetClass().GetField(O("hintTextOutput"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRayPerDegree() {
            static BNM::Field<float> _field = GetClass().GetField(O("rayPerDegree"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetScanAngle() {
            static BNM::Field<float> _field = GetClass().GetField(O("scanAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetScanDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("scanDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetScanLayerMask() {
            static BNM::Field<void*> _field = GetClass().GetField(O("scanLayerMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetTargetComponentName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("targetComponentName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetHintTextOutput(::Text* value) {
            static BNM::Field<::Text*> _field = GetClass().GetField(O("hintTextOutput"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRayPerDegree(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("rayPerDegree"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScanAngle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("scanAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScanDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("scanDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScanLayerMask(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("scanLayerMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetComponentName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("targetComponentName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
