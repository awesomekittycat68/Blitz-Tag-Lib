#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaPlayerLineButton_ButtonType.hpp"
#include "GorillaReportButton_MetaReportReason.hpp"

namespace GlobalNamespace {
    struct GorillaReportButton : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaReportButton");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GorillaPlayerLineButton_ButtonType GetButtonType() {
            static BNM::Field<::GlobalNamespace::GorillaPlayerLineButton_ButtonType> _field = GetClass().GetField(O("buttonType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDebounceTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("debounceTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsOn() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaReportButton_MetaReportReason GetMetaReportType() {
            static BNM::Field<::GlobalNamespace::GorillaReportButton_MetaReportReason> _field = GetClass().GetField(O("metaReportType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Text* GetMyText() {
            static BNM::Field<::Text*> _field = GetClass().GetField(O("myText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetOffMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("offMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetOffText() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("offText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetOnMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("onMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetOnText() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("onText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaPlayerScoreboardLine* GetParentLine() {
            static BNM::Field<::GlobalNamespace::GorillaPlayerScoreboardLine*> _field = GetClass().GetField(O("parentLine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSelected() {
            static BNM::Field<bool> _field = GetClass().GetField(O("selected"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTestPress() {
            static BNM::Field<bool> _field = GetClass().GetField(O("testPress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTouchTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("touchTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetButtonType(::GlobalNamespace::GorillaPlayerLineButton_ButtonType value) {
            static BNM::Field<::GlobalNamespace::GorillaPlayerLineButton_ButtonType> _field = GetClass().GetField(O("buttonType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebounceTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("debounceTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsOn(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMetaReportType(::GlobalNamespace::GorillaReportButton_MetaReportReason value) {
            static BNM::Field<::GlobalNamespace::GorillaReportButton_MetaReportReason> _field = GetClass().GetField(O("metaReportType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMyText(::Text* value) {
            static BNM::Field<::Text*> _field = GetClass().GetField(O("myText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOffMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("offMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOffText(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("offText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("onMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnText(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("onText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParentLine(::GlobalNamespace::GorillaPlayerScoreboardLine* value) {
            static BNM::Field<::GlobalNamespace::GorillaPlayerScoreboardLine*> _field = GetClass().GetField(O("parentLine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSelected(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("selected"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTestPress(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("testPress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTouchTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("touchTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AssignParentLine(::GlobalNamespace::GorillaPlayerScoreboardLine* parent) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AssignParentLine"), {"parent"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(parent);
        }
        void OnTriggerEnter(::Collider* collider) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerEnter"), {"collider"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(collider);
        }
        void OnTriggerExit(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerExit"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void UpdateColor() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateColor"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
