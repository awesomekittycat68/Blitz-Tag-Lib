#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct TextComponentLegacySupportStore : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "TextComponentLegacySupportStore");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetCharacterSpacing() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_characterSpacing"));
            return _method.Call();
        }
        void SetCharacterSpacing(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_characterSpacing"));
            _method.Call(value);
        }
        bool GetIsValid() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsValid"));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetText() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_text"));
            return _method.Call();
        }
        void SetText(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_text"));
            _method.Call(value);
        }
        ::BNM::IL2CPP::Il2CppObject* GetLegacyTextMeshReference() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_legacyTextMeshReference"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Text* GetLegacyTextReference() {
            static BNM::Field<::Text*> _field = GetClass().GetField(O("_legacyTextReference"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetObjectReference() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_objectReference"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetTmpTextReference() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_tmpTextReference"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetLegacyTextMeshReference(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_legacyTextMeshReference"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLegacyTextReference(::Text* value) {
            static BNM::Field<::Text*> _field = GetClass().GetField(O("_legacyTextReference"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetObjectReference(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_objectReference"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTmpTextReference(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_tmpTextReference"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        float get_characterSpacing() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_characterSpacing"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsValid() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsValid"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_text() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_text"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_characterSpacing(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_characterSpacing"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_text(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_text"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetCharSpacing(float spacing) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetCharSpacing"), {"spacing"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(spacing);
        }
        void SetFont(::BNM::IL2CPP::Il2CppObject* font) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetFont"), {"font"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(font);
        }
        void SetFont_1(::BNM::IL2CPP::Il2CppObject* font) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetFont"), {"font"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(font);
        }
        void SetFont(::BNM::IL2CPP::Il2CppObject* font, ::BNM::IL2CPP::Il2CppObject* legacyFont) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetFont"), {"font", "legacyFont"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(font, legacyFont);
        }
        void SetFontSize(float fontSize) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetFontSize"), {"fontSize"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(fontSize);
        }
        void SetText_1(::BNM::Structures::Mono::String* newText) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetText"), {"newText"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newText);
        }
    };
}
