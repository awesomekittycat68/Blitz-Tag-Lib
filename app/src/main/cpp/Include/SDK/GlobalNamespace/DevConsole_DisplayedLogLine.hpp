#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct DevConsole_DisplayedLogLine : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "DevConsole").GetInnerClass("DisplayedLogLine");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::MonoType* GetData() {
            static BNM::Method<::BNM::MonoType*> _method = GetClass().GetMethod(O("get_data"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetData(::BNM::MonoType* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_data"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::IL2CPP::Il2CppObject* GetBackdrop() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("backdrop"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaDevButton*>* GetButtons() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaDevButton*>*> _field = GetClass().GetField(O("buttons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetExpanded() {
            static BNM::Field<bool> _field = GetClass().GetField(O("expanded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaDevButton* GetForwardButton() {
            static BNM::Field<::GlobalNamespace::GorillaDevButton*> _field = GetClass().GetField(O("forwardButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::DevInspector* GetInspector() {
            static BNM::Field<::GlobalNamespace::DevInspector*> _field = GetClass().GetField(O("inspector"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Text* GetLineText() {
            static BNM::Field<::Text*> _field = GetClass().GetField(O("lineText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaDevButton* GetMaximizeButton() {
            static BNM::Field<::GlobalNamespace::GorillaDevButton*> _field = GetClass().GetField(O("maximizeButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTargetMessage() {
            static BNM::Field<int> _field = GetClass().GetField(O("targetMessage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::RectTransform* GetTransform() {
            static BNM::Field<::RectTransform*> _field = GetClass().GetField(O("transform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBackdrop(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("backdrop"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetButtons(::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaDevButton*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaDevButton*>*> _field = GetClass().GetField(O("buttons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExpanded(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("expanded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetForwardButton(::GlobalNamespace::GorillaDevButton* value) {
            static BNM::Field<::GlobalNamespace::GorillaDevButton*> _field = GetClass().GetField(O("forwardButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInspector(::GlobalNamespace::DevInspector* value) {
            static BNM::Field<::GlobalNamespace::DevInspector*> _field = GetClass().GetField(O("inspector"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLineText(::Text* value) {
            static BNM::Field<::Text*> _field = GetClass().GetField(O("lineText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaximizeButton(::GlobalNamespace::GorillaDevButton* value) {
            static BNM::Field<::GlobalNamespace::GorillaDevButton*> _field = GetClass().GetField(O("maximizeButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetMessage(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("targetMessage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTransform(::RectTransform* value) {
            static BNM::Field<::RectTransform*> _field = GetClass().GetField(O("transform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::BNM::MonoType* get_data() {
            static BNM::Method<::BNM::MonoType*> _m = GetClass().GetMethod(O("get_data"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_data(::BNM::MonoType* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_data"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
