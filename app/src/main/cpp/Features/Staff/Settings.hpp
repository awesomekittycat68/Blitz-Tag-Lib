#pragma once
#include "BNMIncludes.hpp"
#include <vector>
#include <unordered_map>

namespace BlitzTag {
    class Settings {
        public:

            static Color backgroundColor;
            static std::vector<Color> buttonColors;
            static std::vector<Color> textColors;

            static Font* currentFont;

            static bool rightHanded;

            static Vector3 menuSize;
            static int buttonsPerPage;
            static int framePressCooldown;

            static GameObject* menu;
            static GameObject* menuBackground;
            static GameObject* reference;
            static GameObject* canvasObject;
            static SphereCollider* buttonCollider;
            static Text* titleText;
            static Text* fpsText;

            static int pageNumber;
            static int currentCategory;

            static void SetCurrentCategory(int value) {
                currentCategory = value;
                pageNumber = 0;
            }
    };
};