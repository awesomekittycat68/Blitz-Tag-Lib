#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GorillaLightmapData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaLightmapData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Color>* GetDirs() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Color>*> _field = GetClass().GetField(O("dirs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Texture2D*>* GetDirTextures() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Texture2D*>*> _field = GetClass().GetField(O("dirTextures"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDone() {
            static BNM::Field<bool> _field = GetClass().GetField(O("done"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Color>* GetLights() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Color>*> _field = GetClass().GetField(O("lights"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Texture2D*>* GetLightTextures() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Texture2D*>*> _field = GetClass().GetField(O("lightTextures"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDirs(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Color>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Color>*> _field = GetClass().GetField(O("dirs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDirTextures(::BNM::Structures::Mono::Array<::Texture2D*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Texture2D*>*> _field = GetClass().GetField(O("dirTextures"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDone(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("done"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLights(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Color>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Color>*> _field = GetClass().GetField(O("lights"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLightTextures(::BNM::Structures::Mono::Array<::Texture2D*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Texture2D*>*> _field = GetClass().GetField(O("lightTextures"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
