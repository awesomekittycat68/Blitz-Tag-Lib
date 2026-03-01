#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct TransformUtils : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "TransformUtils");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* kFwdSlash = "/";
        static void* ComputePathHash(::Transform* t) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("ComputePathHash"), {"t"});
            return _m.Call(t);
        }
        static int ComputePathHashByInstance(::Transform* t) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ComputePathHashByInstance"), {"t"});
            return _m.Call(t);
        }
        static ::BNM::Structures::Mono::String* GetScenePath(::Transform* t) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetScenePath"), {"t"});
            return _m.Call(t);
        }
        static ::BNM::Structures::Mono::String* GetScenePathReverse(::Transform* t) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetScenePathReverse"), {"t"});
            return _m.Call(t);
        }
    };
}
