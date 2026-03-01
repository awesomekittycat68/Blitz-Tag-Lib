#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace BuildSafe {
    struct AssetDatabase : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("BuildSafe", "AssetDatabase");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename T>
        static ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* FindAssetsOfType() {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _m = GetClass().GetMethod(O("FindAssetsOfType"));
            return _m.Call();
        }
        template <typename T>
        static T LoadAssetAtPath(::BNM::Structures::Mono::String* assetPath) {
            static BNM::Method<T> _m = GetClass().GetMethod(O("LoadAssetAtPath"), {"assetPath"});
            return _m.Call(assetPath);
        }
        template <typename T>
        static ::BNM::Structures::Mono::Array<T>* LoadAssetsOfType() {
            static BNM::Method<::BNM::Structures::Mono::Array<T>*> _m = GetClass().GetMethod(O("LoadAssetsOfType"));
            return _m.Call();
        }
        static void SaveAssetsToDisk(::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* assetsToSave, bool saveProject) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SaveAssetsToDisk"), {"assetsToSave", "saveProject"});
            _m.Call(assetsToSave, saveProject);
        }
        static void SaveToDisk(::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* assetsToSave) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SaveToDisk"), {"assetsToSave"});
            _m.Call(assetsToSave);
        }
    };
}
