#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GTShopEventType : int {
        item_select = 0,
        item_try_on = 1,
        cart_item_add = 2,
        cart_item_remove = 3,
        checkout_start = 4,
        checkout_cancel = 5,
        register_visit = 6,
        external_item_claim = 7,
    };
}
