#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GTSceneUtils : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GTSceneUtils");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static void AddToBuild(::GlobalNamespace::GTScene* scene) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddToBuild"), {"scene"});
            _m.Call(scene);
        }
        template <typename TP1 = void*>
        static bool Equals_1(::GlobalNamespace::GTScene* x, TP1 y) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Equals"), {"x", "y"});
            return _m.Call(x, y);
        }
        static ::BNM::Structures::Mono::Array<::GlobalNamespace::GTScene*>* ScenesInBuild() {
            static BNM::Method<::BNM::Structures::Mono::Array<::GlobalNamespace::GTScene*>*> _m = GetClass().GetMethod(O("ScenesInBuild"));
            return _m.Call();
        }
        static void SyncBuildScenes() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SyncBuildScenes"));
            _m.Call();
        }
    };
}
