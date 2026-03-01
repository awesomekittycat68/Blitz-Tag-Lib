#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct MeshUtils : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MeshUtils");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::IL2CPP::Il2CppObject* CreateReadableMeshCopy(::BNM::IL2CPP::Il2CppObject* sourceMesh) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("CreateReadableMeshCopy"), {"sourceMesh"});
            return _m.Call(sourceMesh);
        }
    };
}
