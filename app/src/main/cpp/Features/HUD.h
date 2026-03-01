#pragma once

#include "GUI/GUIManager.hpp"

namespace BlitzTag
{
    class HUD {
        public:
            static inline GUIManager* gui;

            static void Init();
            static void Update();
    };
}