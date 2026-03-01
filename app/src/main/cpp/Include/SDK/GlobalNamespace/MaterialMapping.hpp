#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ShaderGroup.hpp"

namespace GlobalNamespace {
    struct MaterialMapping : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MaterialMapping");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::MaterialMapping* GetInstance() {
            static BNM::Field<::GlobalNamespace::MaterialMapping*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static ::GlobalNamespace::MaterialMapping* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::MaterialMapping*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::ShaderGroup>* GetMap() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::ShaderGroup>*> _field = GetClass().GetField(O("map"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetMaterialDirectory() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("materialDirectory"));
            return _field.Get();
        }
        ::Material* GetMirrorMat() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("mirrorMat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetMirrorTexture() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("mirrorTexture"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetPath() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("path"));
            return _field.Get();
        }
        static void SetInstance(::GlobalNamespace::MaterialMapping* value) {
            static BNM::Field<::GlobalNamespace::MaterialMapping*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void SetMap(::BNM::Structures::Mono::Array<::GlobalNamespace::ShaderGroup>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::ShaderGroup>*> _field = GetClass().GetField(O("map"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetMaterialDirectory(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("materialDirectory"));
            _field.Set(value);
        }
        void SetMirrorMat(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("mirrorMat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMirrorTexture(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("mirrorTexture"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetPath(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("path"));
            _field.Set(value);
        }
        void CleanUpData() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CleanUpData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
