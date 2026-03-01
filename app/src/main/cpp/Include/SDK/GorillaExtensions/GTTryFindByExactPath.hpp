#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaExtensions {
    struct GTTryFindByExactPath : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaExtensions", "GTTryFindByExactPath");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename T>
        static bool WithSiblingIndex(::BNM::Structures::Mono::String* xformPath, T& component) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("WithSiblingIndex"), {"xformPath", "component"});
            return _m.Call(xformPath, &component);
        }
        template <typename T>
        static bool WithSiblingIndexAndTypeName(::BNM::Structures::Mono::String* path, T& out_component) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("WithSiblingIndexAndTypeName"), {"path", "out_component"});
            return _m.Call(path, &out_component);
        }
        static bool XformWithSiblingIndex(::BNM::Structures::Mono::String* xformPath, ::Transform*& finalXform) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("XformWithSiblingIndex"), {"xformPath", "finalXform"});
            return _m.Call(xformPath, &finalXform);
        }
    };
}
