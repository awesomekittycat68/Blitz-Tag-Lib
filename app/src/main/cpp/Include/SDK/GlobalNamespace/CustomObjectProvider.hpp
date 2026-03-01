#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct CustomObjectProvider : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CustomObjectProvider");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int GameModeFlag = 1;
        static constexpr int PlayerFlag = 2;
        ::BNM::IL2CPP::Il2CppObject* GetBaker() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _method = GetClass().GetMethod(O("get_Baker"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetBaker_f() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("baker"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GameObject*>* GetSceneObjects() {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("SceneObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void SetBaker(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("baker"));
            _field.Set(value);
        }
        void SetSceneObjects(::BNM::Structures::Mono::List<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("SceneObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void* AcquirePrefabInstance(::BNM::IL2CPP::Il2CppObject* runner, void*& context, ::BNM::IL2CPP::Il2CppObject*& instance) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("AcquirePrefabInstance"), {"runner", "context", "instance"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(runner, &context, &instance);
        }
        template <typename TP1 = void*>
        void DestroyPrefabInstance(::BNM::IL2CPP::Il2CppObject* runner, TP1 prefabId, ::BNM::IL2CPP::Il2CppObject* instance) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DestroyPrefabInstance"), {"runner", "prefabId", "instance"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(runner, prefabId, instance);
        }
        template <typename TP1 = void*>
        void DestroySceneObject(::BNM::IL2CPP::Il2CppObject* runner, TP1 sceneObjectId, ::BNM::IL2CPP::Il2CppObject* instance) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DestroySceneObject"), {"runner", "sceneObjectId", "instance"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(runner, sceneObjectId, instance);
        }
        static ::BNM::IL2CPP::Il2CppObject* get_Baker() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("get_Baker"));
            return _m.Call();
        }
        void IsGameMode(::BNM::IL2CPP::Il2CppObject* instance) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("IsGameMode"), {"instance"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(instance);
        }
    };
}
