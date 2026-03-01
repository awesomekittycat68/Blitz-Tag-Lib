#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct ObjectExtensions : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ObjectExtensions");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static void Destroy(::BNM::IL2CPP::Il2CppObject* target) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Destroy"), {"target"});
            _m.Call(target);
        }
    };
}
