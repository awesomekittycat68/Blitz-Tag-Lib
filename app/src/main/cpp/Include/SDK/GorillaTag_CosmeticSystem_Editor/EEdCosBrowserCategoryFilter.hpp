#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_CosmeticSystem_Editor {
    enum class EEdCosBrowserCategoryFilter : int {
        None = 0,
        Hat = 1,
        Badge = 2,
        Face = 4,
        Paw = 8,
        Chest = 16,
        Fur = 32,
        Shirt = 64,
        Back = 128,
        Arms = 256,
        Pants = 512,
        TagEffect = 1024,
        Set = 4096,
        All = 6143,
    };
}
