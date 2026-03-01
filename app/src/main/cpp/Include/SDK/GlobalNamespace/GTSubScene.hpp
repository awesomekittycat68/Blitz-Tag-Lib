#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GTSubScene : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GTSubScene");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::GlobalNamespace::GTScene*>* GetScenes() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GTScene*>*> _field = GetClass().GetField(O("scenes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetScenes(::BNM::Structures::Mono::Array<::GlobalNamespace::GTScene*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GTScene*>*> _field = GetClass().GetField(O("scenes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void LoadAll() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoadAll"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SwitchToScene(int index) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SwitchToScene"), {"index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(index);
        }
        void SwitchToScene(::GlobalNamespace::GTScene* scene) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SwitchToScene"), {"scene"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(scene);
        }
        void UnloadAll() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnloadAll"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
