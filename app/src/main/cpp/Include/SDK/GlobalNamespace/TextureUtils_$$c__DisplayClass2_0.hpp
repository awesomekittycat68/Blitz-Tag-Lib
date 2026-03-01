#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SaveTextureFileFormat.hpp"

namespace GlobalNamespace {
    struct TextureUtils_$$c__DisplayClass2_0 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "TextureUtils").GetInnerClass("<>c__DisplayClass2_0");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Action<bool>* GetDone() {
            static BNM::Field<::BNM::Structures::Mono::Action<bool>*> _field = GetClass().GetField(O("done"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SaveTextureFileFormat GetFileFormat() {
            static BNM::Field<::GlobalNamespace::SaveTextureFileFormat> _field = GetClass().GetField(O("fileFormat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetFilePath() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("filePath"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetHeight() {
            static BNM::Field<int> _field = GetClass().GetField(O("height"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetJpgQuality() {
            static BNM::Field<int> _field = GetClass().GetField(O("jpgQuality"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetNarray() {
            static BNM::Field<void*> _field = GetClass().GetField(O("narray"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetResizeRT() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("resizeRT"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetWidth() {
            static BNM::Field<int> _field = GetClass().GetField(O("width"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDone(::BNM::Structures::Mono::Action<bool>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<bool>*> _field = GetClass().GetField(O("done"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFileFormat(::GlobalNamespace::SaveTextureFileFormat value) {
            static BNM::Field<::GlobalNamespace::SaveTextureFileFormat> _field = GetClass().GetField(O("fileFormat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFilePath(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("filePath"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeight(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("height"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJpgQuality(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("jpgQuality"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNarray(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("narray"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResizeRT(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("resizeRT"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWidth(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("width"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
