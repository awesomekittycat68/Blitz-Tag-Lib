#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct MaterialUtils : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MaterialUtils");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Structures::Mono::String* GetTrimmedMaterialName(::Material* material) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetTrimmedMaterialName"), {"material"});
            return _m.Call(material);
        }
        static void SwapMaterial(::GlobalNamespace::MeshAndMaterials* meshAndMaterial, bool isOnToOff) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SwapMaterial"), {"meshAndMaterial", "isOnToOff"});
            _m.Call(meshAndMaterial, isOnToOff);
        }
    };
}
