#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct __JobReflectionRegistrationOutput__1221673671587648887 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "__JobReflectionRegistrationOutput__1221673671587648887");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static void CreateJobReflectionData() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateJobReflectionData"));
            _m.Call();
        }
        static void EarlyInit() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EarlyInit"));
            _m.Call();
        }
    };
}
