#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct Bindings_PlayerInput : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "Bindings").GetInnerClass("PlayerInput");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetLeftGrip() {
            static BNM::Field<float> _field = GetClass().GetField(O("leftGrip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLeftPrimaryButton() {
            static BNM::Field<bool> _field = GetClass().GetField(O("leftPrimaryButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLeftSecondaryButton() {
            static BNM::Field<bool> _field = GetClass().GetField(O("leftSecondaryButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLeftTrigger() {
            static BNM::Field<float> _field = GetClass().GetField(O("leftTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLeftXAxis() {
            static BNM::Field<float> _field = GetClass().GetField(O("leftXAxis"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLeftYAxis() {
            static BNM::Field<float> _field = GetClass().GetField(O("leftYAxis"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRightGrip() {
            static BNM::Field<float> _field = GetClass().GetField(O("rightGrip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRightPrimaryButton() {
            static BNM::Field<bool> _field = GetClass().GetField(O("rightPrimaryButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRightSecondaryButton() {
            static BNM::Field<bool> _field = GetClass().GetField(O("rightSecondaryButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRightTrigger() {
            static BNM::Field<float> _field = GetClass().GetField(O("rightTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRightXAxis() {
            static BNM::Field<float> _field = GetClass().GetField(O("rightXAxis"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRightYAxis() {
            static BNM::Field<float> _field = GetClass().GetField(O("rightYAxis"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetLeftGrip(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("leftGrip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftPrimaryButton(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("leftPrimaryButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftSecondaryButton(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("leftSecondaryButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftTrigger(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("leftTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftXAxis(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("leftXAxis"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftYAxis(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("leftYAxis"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightGrip(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("rightGrip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightPrimaryButton(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("rightPrimaryButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightSecondaryButton(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("rightSecondaryButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightTrigger(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("rightTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightXAxis(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("rightXAxis"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightYAxis(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("rightYAxis"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
