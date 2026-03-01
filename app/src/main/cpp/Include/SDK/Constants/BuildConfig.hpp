#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/EAssetReleaseTier.hpp"

namespace Constants {
    struct BuildConfig : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Constants", "BuildConfig");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr ::GlobalNamespace::EAssetReleaseTier ASSET_TIER = (::GlobalNamespace::EAssetReleaseTier)1;
        static constexpr bool BETA = false;
        static constexpr bool GT_CREATOR_BUILD = false;
        static constexpr bool GT_COSMETICS__ONLY_NEW = false;
    };
}
