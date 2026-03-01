#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace BuildSafe {
    struct SceneViewUtils_FuncRaycastWorld : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("BuildSafe", "SceneViewUtils").GetInnerClass("FuncRaycastWorld");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TP3 = void*>
        void* BeginInvoke(::BNM::Structures::Unity::Vector2 screenPos, ::BNM::Structures::Unity::RaycastHit& hit, ::BNM::IL2CPP::Il2CppObject* callback, TP3 object) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("BeginInvoke"), {"screenPos", "hit", "callback", "object"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(screenPos, &hit, callback, object);
        }
        template <typename TP1 = void*>
        bool EndInvoke(::BNM::Structures::Unity::RaycastHit& hit, TP1 result) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("EndInvoke"), {"hit", "result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(&hit, result);
        }
        bool Invoke(::BNM::Structures::Unity::Vector2 screenPos, ::BNM::Structures::Unity::RaycastHit& hit) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Invoke"), {"screenPos", "hit"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(screenPos, &hit);
        }
    };
}
