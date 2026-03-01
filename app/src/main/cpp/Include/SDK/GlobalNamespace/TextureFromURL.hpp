#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "TextureFromURL_Source.hpp"

namespace GlobalNamespace {
    struct TextureFromURL : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "TextureFromURL");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Renderer* GetRenderer() {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("_renderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetData() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaxTitleDataAttempts() {
            static BNM::Field<int> _field = GetClass().GetField(O("maxTitleDataAttempts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TextureFromURL_Source GetSource() {
            static BNM::Field<::GlobalNamespace::TextureFromURL_Source> _field = GetClass().GetField(O("source"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Texture2D* GetTexture() {
            static BNM::Field<::Texture2D*> _field = GetClass().GetField(O("texture"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetRenderer(::Renderer* value) {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("_renderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetData(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxTitleDataAttempts(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("maxTitleDataAttempts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSource(::GlobalNamespace::TextureFromURL_Source value) {
            static BNM::Field<::GlobalNamespace::TextureFromURL_Source> _field = GetClass().GetField(O("source"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTexture(::Texture2D* value) {
            static BNM::Field<::Texture2D*> _field = GetClass().GetField(O("texture"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void applyRemoteTexture(::BNM::Structures::Mono::String* imageUrl) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("applyRemoteTexture"), {"imageUrl"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(imageUrl);
        }
        void* GetRemoteTexture(::BNM::Structures::Mono::String* url) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetRemoteTexture"), {"url"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(url);
        }
        void LoadFromTitleData() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoadFromTitleData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnPlayFabError(::PlayFab::PlayFabError* error) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayFabError"), {"error"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(error);
        }
        void OnTitleDataRequestComplete(::BNM::Structures::Mono::String* imageUrl) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTitleDataRequestComplete"), {"imageUrl"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(imageUrl);
        }
    };
}
