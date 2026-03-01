#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData.hpp"

namespace GlobalNamespace {
    struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "UnitySourceGeneratedAssemblyMonoScriptTypes_v1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData Get() {
            static BNM::Method<::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData> _m = GetClass().GetMethod(O("Get"));
            return _m.Call();
        }
    };
}
