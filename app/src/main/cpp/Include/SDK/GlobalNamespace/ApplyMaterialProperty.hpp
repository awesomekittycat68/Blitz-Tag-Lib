#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ApplyMaterialProperty_ApplyMode.hpp"

namespace GlobalNamespace {
    struct ApplyMaterialProperty : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ApplyMaterialProperty");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::IL2CPP::Il2CppObject* GetBlock() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_block"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::MaterialInstance* GetInstance() {
            static BNM::Field<::GlobalNamespace::MaterialInstance*> _field = GetClass().GetField(O("_instance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Renderer* GetRenderer() {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("_renderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetApplyOnStart() {
            static BNM::Field<bool> _field = GetClass().GetField(O("applyOnStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::ApplyMaterialProperty_CustomMaterialData*>* GetCustomData() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::ApplyMaterialProperty_CustomMaterialData*>*> _field = GetClass().GetField(O("customData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ApplyMaterialProperty_ApplyMode GetMode() {
            static BNM::Field<::GlobalNamespace::ApplyMaterialProperty_ApplyMode> _field = GetClass().GetField(O("mode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetTargetMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("targetMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBlock(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_block"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInstance(::GlobalNamespace::MaterialInstance* value) {
            static BNM::Field<::GlobalNamespace::MaterialInstance*> _field = GetClass().GetField(O("_instance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRenderer(::Renderer* value) {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("_renderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetApplyOnStart(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("applyOnStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCustomData(::BNM::Structures::Mono::List<::GlobalNamespace::ApplyMaterialProperty_CustomMaterialData*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::ApplyMaterialProperty_CustomMaterialData*>*> _field = GetClass().GetField(O("customData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMode(::GlobalNamespace::ApplyMaterialProperty_ApplyMode value) {
            static BNM::Field<::GlobalNamespace::ApplyMaterialProperty_ApplyMode> _field = GetClass().GetField(O("mode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("targetMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Apply() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Apply"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ApplyMaterialInstance() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyMaterialInstance"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ApplyMaterialPropertyBlock() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyMaterialPropertyBlock"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GlobalNamespace::ApplyMaterialProperty_CustomMaterialData* GetOrCreateData(int id, ::BNM::Structures::Mono::String* propertyName) {
            static BNM::Method<::GlobalNamespace::ApplyMaterialProperty_CustomMaterialData*> _m = GetClass().GetMethod(O("GetOrCreateData"), {"id", "propertyName"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(id, propertyName);
        }
        void SetColor(::BNM::Structures::Mono::String* propertyName, ::BNM::Structures::Unity::Color color) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetColor"), {"propertyName", "color"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(propertyName, color);
        }
        void SetColor(int propertyId, ::BNM::Structures::Unity::Color color) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetColor"), {"propertyId", "color"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(propertyId, color);
        }
        void SetFloat(::BNM::Structures::Mono::String* propertyName, float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetFloat"), {"propertyName", "value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(propertyName, value);
        }
        void SetFloat(int propertyId, float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetFloat"), {"propertyId", "value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(propertyId, value);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateShaderPropertyIds() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateShaderPropertyIds"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
