#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct TestManipulatableSpinnerIcons : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "TestManipulatableSpinnerIcons");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetCurrentRotation() {
            static BNM::Field<float> _field = GetClass().GetField(O("currentRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetIconCanvas() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("iconCanvas"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetIconElementTemplate() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("iconElementTemplate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetIconOffset() {
            static BNM::Field<float> _field = GetClass().GetField(O("iconOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRollerElementAngle() {
            static BNM::Field<float> _field = GetClass().GetField(O("rollerElementAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRollerElementCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("rollerElementCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetRollerElementTemplate() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("rollerElementTemplate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRotationScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("rotationScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetScrollableCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("scrollableCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSelectedIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("selectedIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ManipulatableSpinner* GetSpinner() {
            static BNM::Field<::GlobalNamespace::ManipulatableSpinner*> _field = GetClass().GetField(O("spinner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Text*>* GetVisibleIcons() {
            static BNM::Field<::BNM::Structures::Mono::List<::Text*>*> _field = GetClass().GetField(O("visibleIcons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrentRotation(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("currentRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIconCanvas(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("iconCanvas"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIconElementTemplate(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("iconElementTemplate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIconOffset(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("iconOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRollerElementAngle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("rollerElementAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRollerElementCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("rollerElementCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRollerElementTemplate(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("rollerElementTemplate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotationScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("rotationScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScrollableCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("scrollableCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSelectedIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("selectedIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpinner(::GlobalNamespace::ManipulatableSpinner* value) {
            static BNM::Field<::GlobalNamespace::ManipulatableSpinner*> _field = GetClass().GetField(O("spinner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVisibleIcons(::BNM::Structures::Mono::List<::Text*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Text*>*> _field = GetClass().GetField(O("visibleIcons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void GenerateRollers() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GenerateRollers"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateRollers() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateRollers"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateSelectedIndex() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateSelectedIndex"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
