#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace BuildSafe {
    struct EditorOnlyScripts : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("BuildSafe", "EditorOnlyScripts");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static void Cleanup(::BNM::Structures::Mono::Array<::GameObject*>* rootObjects, bool force) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Cleanup"), {"rootObjects", "force"});
            _m.Call(rootObjects, force);
        }
    };
}
