#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ConsoleMode.hpp"
#include "DevConsoleInstance.hpp"

namespace GlobalNamespace {
    struct DevConsoleHand : ::GlobalNamespace::DevConsoleInstance {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "DevConsoleHand");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Text* GetComponentInspectionText() {
            static BNM::Field<::Text*> _field = GetClass().GetField(O("componentInspectionText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaDevButton* GetComponentInspectorButton() {
            static BNM::Field<::GlobalNamespace::GorillaDevButton*> _field = GetClass().GetField(O("componentInspectorButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GameObject*>* GetComponentInspectorButtons() {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("componentInspectorButtons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetComponentInspectorScale() {
            static BNM::Field<double> _field = GetClass().GetField(O("componentInspectorScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaDevButton* GetConsoleButton() {
            static BNM::Field<::GlobalNamespace::GorillaDevButton*> _field = GetClass().GetField(O("consoleButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GameObject*>* GetConsoleButtons() {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("consoleButtons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetDebugScale() {
            static BNM::Field<double> _field = GetClass().GetField(O("debugScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaDevButton* GetInspectorButton() {
            static BNM::Field<::GlobalNamespace::GorillaDevButton*> _field = GetClass().GetField(O("inspectorButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GameObject*>* GetInspectorButtons() {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("inspectorButtons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetInspectorScale() {
            static BNM::Field<double> _field = GetClass().GetField(O("inspectorScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsLeftHand() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLeftHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsStillEnabled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isStillEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ConsoleMode GetMode() {
            static BNM::Field<::GlobalNamespace::ConsoleMode> _field = GetClass().GetField(O("mode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GameObject*>* GetOtherButtonsList() {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("otherButtonsList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::DevInspector* GetSelectedInspector() {
            static BNM::Field<::GlobalNamespace::DevInspector*> _field = GetClass().GetField(O("selectedInspector"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaDevButton* GetShowNonStarItems() {
            static BNM::Field<::GlobalNamespace::GorillaDevButton*> _field = GetClass().GetField(O("showNonStarItems"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaDevButton* GetShowPrivateItems() {
            static BNM::Field<::GlobalNamespace::GorillaDevButton*> _field = GetClass().GetField(O("showPrivateItems"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetComponentInspectionText(::Text* value) {
            static BNM::Field<::Text*> _field = GetClass().GetField(O("componentInspectionText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetComponentInspectorButton(::GlobalNamespace::GorillaDevButton* value) {
            static BNM::Field<::GlobalNamespace::GorillaDevButton*> _field = GetClass().GetField(O("componentInspectorButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetComponentInspectorButtons(::BNM::Structures::Mono::List<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("componentInspectorButtons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetComponentInspectorScale(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("componentInspectorScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetConsoleButton(::GlobalNamespace::GorillaDevButton* value) {
            static BNM::Field<::GlobalNamespace::GorillaDevButton*> _field = GetClass().GetField(O("consoleButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetConsoleButtons(::BNM::Structures::Mono::List<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("consoleButtons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugScale(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("debugScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInspectorButton(::GlobalNamespace::GorillaDevButton* value) {
            static BNM::Field<::GlobalNamespace::GorillaDevButton*> _field = GetClass().GetField(O("inspectorButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInspectorButtons(::BNM::Structures::Mono::List<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("inspectorButtons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInspectorScale(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("inspectorScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsLeftHand(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLeftHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsStillEnabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isStillEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMode(::GlobalNamespace::ConsoleMode value) {
            static BNM::Field<::GlobalNamespace::ConsoleMode> _field = GetClass().GetField(O("mode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOtherButtonsList(::BNM::Structures::Mono::List<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("otherButtonsList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSelectedInspector(::GlobalNamespace::DevInspector* value) {
            static BNM::Field<::GlobalNamespace::DevInspector*> _field = GetClass().GetField(O("selectedInspector"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShowNonStarItems(::GlobalNamespace::GorillaDevButton* value) {
            static BNM::Field<::GlobalNamespace::GorillaDevButton*> _field = GetClass().GetField(O("showNonStarItems"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShowPrivateItems(::GlobalNamespace::GorillaDevButton* value) {
            static BNM::Field<::GlobalNamespace::GorillaDevButton*> _field = GetClass().GetField(O("showPrivateItems"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
