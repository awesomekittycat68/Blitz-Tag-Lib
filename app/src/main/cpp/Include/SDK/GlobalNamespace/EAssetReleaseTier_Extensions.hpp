#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "EAssetReleaseTier.hpp"
#include "EBuildReleaseTier.hpp"

namespace GlobalNamespace {
    struct EAssetReleaseTier_Extensions : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "EAssetReleaseTier_Extensions");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static bool ShouldIncludeInBuild(::GlobalNamespace::EAssetReleaseTier assetTier, ::GlobalNamespace::EBuildReleaseTier buildTier) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ShouldIncludeInBuild"), {"assetTier", "buildTier"});
            return _m.Call(assetTier, buildTier);
        }
    };
}
