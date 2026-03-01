#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GlobalObjectRefType : int {
        Null = 0,
        ImportedAsset = 1,
        SceneObject = 2,
        SourceAsset = 3,
    };
}
