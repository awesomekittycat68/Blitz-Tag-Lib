#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SceneIndex.hpp"

namespace GlobalNamespace {
    struct SceneIndexExtensions : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SceneIndexExtensions");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int SceneIndex_COUNT = 20;
        static ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* GetOnSceneLoadCallbacks() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("onSceneLoadCallbacks"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* GetOnSceneUnloadCallbacks() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("onSceneUnloadCallbacks"));
            return _field.Get();
        }
        static void SetOnSceneLoadCallbacks(::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("onSceneLoadCallbacks"));
            _field.Set(value);
        }
        static void SetOnSceneUnloadCallbacks(::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("onSceneUnloadCallbacks"));
            _field.Set(value);
        }
        static void AddCallbackOnSceneLoad(::GlobalNamespace::SceneIndex scene, ::BNM::Structures::Mono::Action<>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddCallbackOnSceneLoad"), {"scene", "callback"});
            _m.Call(scene, callback);
        }
        static void AddCallbackOnSceneUnload(::GlobalNamespace::SceneIndex scene, ::BNM::Structures::Mono::Action<>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddCallbackOnSceneUnload"), {"scene", "callback"});
            _m.Call(scene, callback);
        }
        template <typename TP0 = void*>
        static ::GlobalNamespace::SceneIndex GetSceneIndex(TP0 scene) {
            static BNM::Method<::GlobalNamespace::SceneIndex> _m = GetClass().GetMethod(O("GetSceneIndex"), {"scene"});
            return _m.Call(scene);
        }
        static ::GlobalNamespace::SceneIndex GetSceneIndex(::GameObject* obj) {
            static BNM::Method<::GlobalNamespace::SceneIndex> _m = GetClass().GetMethod(O("GetSceneIndex"), {"obj"});
            return _m.Call(obj);
        }
        static ::GlobalNamespace::SceneIndex GetSceneIndex(::Component* cmp) {
            static BNM::Method<::GlobalNamespace::SceneIndex> _m = GetClass().GetMethod(O("GetSceneIndex"), {"cmp"});
            return _m.Call(cmp);
        }
        template <typename TP0 = void*, typename TP1 = void*>
        static void OnSceneLoad(TP0 scene, TP1 mode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSceneLoad"), {"scene", "mode"});
            _m.Call(scene, mode);
        }
        template <typename TP0 = void*>
        static void OnSceneUnload(TP0 scene) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSceneUnload"), {"scene"});
            _m.Call(scene);
        }
        static void RemoveCallbackOnSceneLoad(::GlobalNamespace::SceneIndex scene, ::BNM::Structures::Mono::Action<>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveCallbackOnSceneLoad"), {"scene", "callback"});
            _m.Call(scene, callback);
        }
        static void RemoveCallbackOnSceneUnload(::GlobalNamespace::SceneIndex scene, ::BNM::Structures::Mono::Action<>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveCallbackOnSceneUnload"), {"scene", "callback"});
            _m.Call(scene, callback);
        }
        static void Reset() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reset"));
            _m.Call();
        }
    };
}
