#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SceneIndex.hpp"

namespace GlobalNamespace {
    struct XSceneRef : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "XSceneRef");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::XSceneRefTarget* GetCached() {
            static BNM::Field<::GlobalNamespace::XSceneRefTarget*> _field = GetClass().GetField(O("cached"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDidCache() {
            static BNM::Field<bool> _field = GetClass().GetField(O("didCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTargetID() {
            static BNM::Field<int> _field = GetClass().GetField(O("TargetID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SceneIndex GetTargetScene() {
            static BNM::Field<::GlobalNamespace::SceneIndex> _field = GetClass().GetField(O("TargetScene"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCached(::GlobalNamespace::XSceneRefTarget* value) {
            static BNM::Field<::GlobalNamespace::XSceneRefTarget*> _field = GetClass().GetField(O("cached"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDidCache(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("didCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetID(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("TargetID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetScene(::GlobalNamespace::SceneIndex value) {
            static BNM::Field<::GlobalNamespace::SceneIndex> _field = GetClass().GetField(O("TargetScene"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddCallbackOnLoad(::BNM::Structures::Mono::Action<>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddCallbackOnLoad"), {"callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(callback);
        }
        void AddCallbackOnUnload(::BNM::Structures::Mono::Action<>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddCallbackOnUnload"), {"callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(callback);
        }
        void RemoveCallbackOnLoad(::BNM::Structures::Mono::Action<>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveCallbackOnLoad"), {"callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(callback);
        }
        void RemoveCallbackOnUnload(::BNM::Structures::Mono::Action<>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveCallbackOnUnload"), {"callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(callback);
        }
        bool TryResolve(::GlobalNamespace::XSceneRefTarget*& result) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryResolve"), {"result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(&result);
        }
        bool TryResolve(::GameObject*& result) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryResolve"), {"result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(&result);
        }
        template <typename T>
        bool TryResolve(T& result) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryResolve"), {"result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(&result);
        }
    };
}
