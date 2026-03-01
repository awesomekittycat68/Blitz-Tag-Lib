#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BitmapFont_SymbolData.hpp"

namespace GlobalNamespace {
    struct BitmapFont : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BitmapFont");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Dictionary<char, ::GlobalNamespace::BitmapFont_SymbolData>* GetCharToSymbol() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<char, ::GlobalNamespace::BitmapFont_SymbolData>*> _field = GetClass().GetField(O("_charToSymbol"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Color>* GetEmpty() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Color>*> _field = GetClass().GetField(O("_empty"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetCharacterMap() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("characterMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Texture2D* GetFontImage() {
            static BNM::Field<::Texture2D*> _field = GetClass().GetField(O("fontImage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetFontJson() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("fontJson"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSymbolPixelsPerUnit() {
            static BNM::Field<int> _field = GetClass().GetField(O("symbolPixelsPerUnit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::BitmapFont_SymbolData>* GetSymbols() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::BitmapFont_SymbolData>*> _field = GetClass().GetField(O("symbols"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCharToSymbol(::BNM::Structures::Mono::Dictionary<char, ::GlobalNamespace::BitmapFont_SymbolData>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<char, ::GlobalNamespace::BitmapFont_SymbolData>*> _field = GetClass().GetField(O("_charToSymbol"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEmpty(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Color>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Color>*> _field = GetClass().GetField(O("_empty"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCharacterMap(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("characterMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFontImage(::Texture2D* value) {
            static BNM::Field<::Texture2D*> _field = GetClass().GetField(O("fontImage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFontJson(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("fontJson"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSymbolPixelsPerUnit(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("symbolPixelsPerUnit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSymbols(::BNM::Structures::Mono::Array<::GlobalNamespace::BitmapFont_SymbolData>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::BitmapFont_SymbolData>*> _field = GetClass().GetField(O("symbols"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RenderToTexture(::Texture2D* target, ::BNM::Structures::Mono::String* text) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RenderToTexture"), {"target", "text"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(target, text);
        }
    };
}
