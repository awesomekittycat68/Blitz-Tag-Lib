#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GorillaSceneCamera : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaSceneCamera");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaSceneTransform*>* GetSceneTransforms() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaSceneTransform*>*> _field = GetClass().GetField(O("sceneTransforms"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetSceneTransforms(::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaSceneTransform*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaSceneTransform*>*> _field = GetClass().GetField(O("sceneTransforms"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSceneCamera(int sceneIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetSceneCamera"), {"sceneIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(sceneIndex);
        }
    };
}
