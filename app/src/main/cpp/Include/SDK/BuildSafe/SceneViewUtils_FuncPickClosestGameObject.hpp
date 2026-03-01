#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace BuildSafe {
    struct SceneViewUtils_FuncPickClosestGameObject : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("BuildSafe", "SceneViewUtils").GetInnerClass("FuncPickClosestGameObject");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TP7 = void*>
        void* BeginInvoke(::Camera* cam, int layers, ::BNM::Structures::Unity::Vector2 position, ::BNM::Structures::Mono::Array<::GameObject*>* ignore, ::BNM::Structures::Mono::Array<::GameObject*>* filter, int& materialIndex, ::BNM::IL2CPP::Il2CppObject* callback, TP7 object) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("BeginInvoke"), {"cam", "layers", "position", "ignore", "filter", "materialIndex", "callback", "object"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(cam, layers, position, ignore, filter, &materialIndex, callback, object);
        }
        template <typename TP1 = void*>
        ::GameObject* EndInvoke(int& materialIndex, TP1 result) {
            static BNM::Method<::GameObject*> _m = GetClass().GetMethod(O("EndInvoke"), {"materialIndex", "result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(&materialIndex, result);
        }
        ::GameObject* Invoke(::Camera* cam, int layers, ::BNM::Structures::Unity::Vector2 position, ::BNM::Structures::Mono::Array<::GameObject*>* ignore, ::BNM::Structures::Mono::Array<::GameObject*>* filter, int& materialIndex) {
            static BNM::Method<::GameObject*> _m = GetClass().GetMethod(O("Invoke"), {"cam", "layers", "position", "ignore", "filter", "materialIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(cam, layers, position, ignore, filter, &materialIndex);
        }
    };
}
