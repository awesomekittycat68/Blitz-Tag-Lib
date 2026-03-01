#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct MaterialInstance : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MaterialInstance");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* instancePostfix = " (Instance)";
        ::Renderer* GetCachedRenderer() {
            static BNM::Method<::Renderer*> _method = GetClass().GetMethod(O("get_CachedRenderer"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::Array<::Material*>* GetCachedRendererSharedMaterials() {
            static BNM::Method<::BNM::Structures::Mono::Array<::Material*>*> _method = GetClass().GetMethod(O("get_CachedRendererSharedMaterials"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCachedRendererSharedMaterials(::BNM::Structures::Mono::Array<::Material*>* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_CachedRendererSharedMaterials"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetCacheSharedMaterialsFromRenderer() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_CacheSharedMaterialsFromRenderer"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCacheSharedMaterialsFromRenderer(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_CacheSharedMaterialsFromRenderer"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::Material* GetMaterial() {
            static BNM::Method<::Material*> _method = GetClass().GetMethod(O("get_Material"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::Array<::Material*>* GetMaterials() {
            static BNM::Method<::BNM::Structures::Mono::Array<::Material*>*> _method = GetClass().GetMethod(O("get_Materials"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::Renderer* GetCachedRenderer_f() {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("cachedRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Material*>* GetCachedSharedMaterials() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Material*>*> _field = GetClass().GetField(O("cachedSharedMaterials"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetCacheSharedMaterialsFromRenderer_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("cacheSharedMaterialsFromRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Material*>* GetDefaultMaterials() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Material*>*> _field = GetClass().GetField(O("defaultMaterials"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetInitialized() {
            static BNM::Field<bool> _field = GetClass().GetField(O("initialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Material*>* GetInstanceMaterials() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Material*>*> _field = GetClass().GetField(O("instanceMaterials"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetMaterialOwners() {
            static BNM::Field<void*> _field = GetClass().GetField(O("materialOwners"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetMaterialsInstanced() {
            static BNM::Field<bool> _field = GetClass().GetField(O("materialsInstanced"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCachedRenderer(::Renderer* value) {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("cachedRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCachedSharedMaterials(::BNM::Structures::Mono::Array<::Material*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Material*>*> _field = GetClass().GetField(O("cachedSharedMaterials"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCacheSharedMaterialsFromRenderer_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("cacheSharedMaterialsFromRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultMaterials(::BNM::Structures::Mono::Array<::Material*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Material*>*> _field = GetClass().GetField(O("defaultMaterials"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInitialized(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("initialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInstanceMaterials(::BNM::Structures::Mono::Array<::Material*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Material*>*> _field = GetClass().GetField(O("instanceMaterials"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaterialsInstanced(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("materialsInstanced"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AcquireInstances() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AcquireInstances"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::Material* AcquireMaterial(::BNM::IL2CPP::Il2CppObject* owner, bool instance) {
            static BNM::Method<::Material*> _m = GetClass().GetMethod(O("AcquireMaterial"), {"owner", "instance"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(owner, instance);
        }
        ::BNM::Structures::Mono::Array<::Material*>* AcquireMaterials(::BNM::IL2CPP::Il2CppObject* owner, bool instance) {
            static BNM::Method<::BNM::Structures::Mono::Array<::Material*>*> _m = GetClass().GetMethod(O("AcquireMaterials"), {"owner", "instance"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(owner, instance);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CreateInstances() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateInstances"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void DestroyMaterials(::BNM::Structures::Mono::Array<::Material*>* materials) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DestroyMaterials"), {"materials"});
            _m.Call(materials);
        }
        static void DestroySafe(::BNM::IL2CPP::Il2CppObject* toDestroy) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DestroySafe"), {"toDestroy"});
            _m.Call(toDestroy);
        }
        ::Renderer* get_CachedRenderer() {
            static BNM::Method<::Renderer*> _m = GetClass().GetMethod(O("get_CachedRenderer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::Array<::Material*>* get_CachedRendererSharedMaterials() {
            static BNM::Method<::BNM::Structures::Mono::Array<::Material*>*> _m = GetClass().GetMethod(O("get_CachedRendererSharedMaterials"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_CacheSharedMaterialsFromRenderer() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_CacheSharedMaterialsFromRenderer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Material* get_Material() {
            static BNM::Method<::Material*> _m = GetClass().GetMethod(O("get_Material"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::Array<::Material*>* get_Materials() {
            static BNM::Method<::BNM::Structures::Mono::Array<::Material*>*> _m = GetClass().GetMethod(O("get_Materials"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static bool HasValidMaterial(::BNM::Structures::Mono::Array<::Material*>* materials) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasValidMaterial"), {"materials"});
            return _m.Call(materials);
        }
        void Initialize() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Initialize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static ::BNM::Structures::Mono::Array<::Material*>* InstanceMaterials(::BNM::Structures::Mono::Array<::Material*>* source) {
            static BNM::Method<::BNM::Structures::Mono::Array<::Material*>*> _m = GetClass().GetMethod(O("InstanceMaterials"), {"source"});
            return _m.Call(source);
        }
        static bool IsInstanceMaterial(::Material* material) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsInstanceMaterial"), {"material"});
            return _m.Call(material);
        }
        static bool MaterialsMatch(::BNM::Structures::Mono::Array<::Material*>* a, ::BNM::Structures::Mono::Array<::Material*>* b) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("MaterialsMatch"), {"a", "b"});
            return _m.Call(a, b);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ReleaseMaterial(::BNM::IL2CPP::Il2CppObject* owner, bool autoDestroy) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReleaseMaterial"), {"owner", "autoDestroy"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(owner, autoDestroy);
        }
        void RestoreRenderer() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RestoreRenderer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_CachedRendererSharedMaterials(::BNM::Structures::Mono::Array<::Material*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_CachedRendererSharedMaterials"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_CacheSharedMaterialsFromRenderer(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_CacheSharedMaterialsFromRenderer"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
