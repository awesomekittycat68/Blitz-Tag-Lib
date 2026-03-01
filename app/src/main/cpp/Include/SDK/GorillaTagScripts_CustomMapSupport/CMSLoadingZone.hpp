#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts_CustomMapSupport {
    struct CMSLoadingZone : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.CustomMapSupport", "CMSLoadingZone");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Unity::Color GetDynamicLightingAmbientColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("dynamicLightingAmbientColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int>* GetScenesToLoad() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("scenesToLoad"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int>* GetScenesToUnload() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("scenesToUnload"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUseDynamicLighting() {
            static BNM::Field<bool> _field = GetClass().GetField(O("useDynamicLighting"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDynamicLightingAmbientColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("dynamicLightingAmbientColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScenesToLoad(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("scenesToLoad"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScenesToUnload(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("scenesToUnload"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseDynamicLighting(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("useDynamicLighting"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::BNM::Structures::Mono::Array<int>* CleanSceneUnloadArray(::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* unload, ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* load, ::BNM::Structures::Mono::String*& assetBundleSceneFilePaths) {
            static BNM::Method<::BNM::Structures::Mono::Array<int>*> _m = GetClass().GetMethod(O("CleanSceneUnloadArray"), {"unload", "load", "assetBundleSceneFilePaths"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(unload, load, &assetBundleSceneFilePaths);
        }
        ::BNM::Structures::Mono::Array<int>* GetSceneIndexes(::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* sceneNames, ::BNM::Structures::Mono::String*& assetBundleSceneFilePaths) {
            static BNM::Method<::BNM::Structures::Mono::Array<int>*> _m = GetClass().GetMethod(O("GetSceneIndexes"), {"sceneNames", "assetBundleSceneFilePaths"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(sceneNames, &assetBundleSceneFilePaths);
        }
        ::BNM::Structures::Mono::String* GetSceneNameFromFilePath(::BNM::Structures::Mono::String* filePath) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetSceneNameFromFilePath"), {"filePath"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(filePath);
        }
        void OnTriggerEnter(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerEnter"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void SetupLoadingZone(::BNM::IL2CPP::Il2CppObject* settings, ::BNM::Structures::Mono::String*& assetBundleSceneFilePaths) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetupLoadingZone"), {"settings", "assetBundleSceneFilePaths"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(settings, &assetBundleSceneFilePaths);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
