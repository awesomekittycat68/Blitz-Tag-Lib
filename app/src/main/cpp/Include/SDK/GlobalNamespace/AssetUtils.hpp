#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct AssetUtils : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "AssetUtils");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static int64_t ComputeAssetId(::BNM::IL2CPP::Il2CppObject* asset, bool _unsigned) {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("ComputeAssetId"), {"asset", "unsigned"});
            return _m.Call(asset, _unsigned);
        }
        static void ExecAndUnloadUnused(::BNM::Structures::Mono::Action<>* action) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ExecAndUnloadUnused"), {"action"});
            _m.Call(action);
        }
        template <typename T>
        static void FindAllAssetsOfType(T& results, ::BNM::Structures::Mono::String*& assetPaths) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FindAllAssetsOfType"), {"results", "assetPaths"});
            _m.Call(&results, &assetPaths);
        }
        static void ForceSave(::BNM::IL2CPP::Il2CppObject* asset) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ForceSave"), {"asset"});
            _m.Call(asset);
        }
        template <typename T, typename TP0 = void*>
        static void ForceSave(TP0 assets, ::BNM::Structures::Mono::Action<T>* onPreSave, bool unloadUnusedAfter) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ForceSave"), {"assets", "onPreSave", "unloadUnusedAfter"});
            _m.Call(assets, onPreSave, unloadUnusedAfter);
        }
        template <typename T>
        static void LoadAssetOfType(T& result, ::BNM::Structures::Mono::String*& resultPath) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoadAssetOfType"), {"result", "resultPath"});
            _m.Call(&result, &resultPath);
        }
    };
}
