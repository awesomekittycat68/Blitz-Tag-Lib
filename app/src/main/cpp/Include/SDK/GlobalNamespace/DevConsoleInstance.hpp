#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct DevConsoleInstance : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "DevConsoleInstance");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GorillaDevButton* GetBottomButton() {
            static BNM::Field<::GlobalNamespace::GorillaDevButton*> _field = GetClass().GetField(O("BottomButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaDevButton*>* GetButtons() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaDevButton*>*> _field = GetClass().GetField(O("buttons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetCanExpand() {
            static BNM::Field<bool> _field = GetClass().GetField(O("canExpand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetConsoleLineExample() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("ConsoleLineExample"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentLogIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentLogIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GameObject*>* GetDisableWhileActive() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("disableWhileActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GameObject*>* GetEnableWhileActive() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("enableWhileActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetExpandAmount() {
            static BNM::Field<int> _field = GetClass().GetField(O("expandAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetExpandedMessageIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("expandedMessageIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsEnabled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLineHeight() {
            static BNM::Field<float> _field = GetClass().GetField(O("lineHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLineStartHeight() {
            static BNM::Field<float> _field = GetClass().GetField(O("lineStartHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLineStartTextWidth() {
            static BNM::Field<float> _field = GetClass().GetField(O("lineStartTextWidth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLineStartZ() {
            static BNM::Field<float> _field = GetClass().GetField(O("lineStartZ"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::DevConsole_DisplayedLogLine*>* GetLogLines() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::DevConsole_DisplayedLogLine*>*> _field = GetClass().GetField(O("logLines"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaDevButton*>* GetLogTypeButtons() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaDevButton*>*> _field = GetClass().GetField(O("logTypeButtons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxHeight() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetSelectedLogTypes() {
            static BNM::Field<void*> _field = GetClass().GetField(O("selectedLogTypes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTargetLogIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("targetLogIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetTextScale() {
            static BNM::Field<double> _field = GetClass().GetField(O("textScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTextStartHeight() {
            static BNM::Field<float> _field = GetClass().GetField(O("textStartHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBottomButton(::GlobalNamespace::GorillaDevButton* value) {
            static BNM::Field<::GlobalNamespace::GorillaDevButton*> _field = GetClass().GetField(O("BottomButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetButtons(::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaDevButton*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaDevButton*>*> _field = GetClass().GetField(O("buttons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCanExpand(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("canExpand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetConsoleLineExample(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("ConsoleLineExample"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentLogIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentLogIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisableWhileActive(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("disableWhileActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnableWhileActive(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("enableWhileActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExpandAmount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("expandAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExpandedMessageIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("expandedMessageIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsEnabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLineHeight(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lineHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLineStartHeight(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lineStartHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLineStartTextWidth(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lineStartTextWidth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLineStartZ(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lineStartZ"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLogLines(::BNM::Structures::Mono::List<::GlobalNamespace::DevConsole_DisplayedLogLine*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::DevConsole_DisplayedLogLine*>*> _field = GetClass().GetField(O("logLines"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLogTypeButtons(::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaDevButton*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaDevButton*>*> _field = GetClass().GetField(O("logTypeButtons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxHeight(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSelectedLogTypes(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("selectedLogTypes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetLogIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("targetLogIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTextScale(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("textScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTextStartHeight(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("textStartHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
