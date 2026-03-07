#pragma once
#include <BNMResolve.hpp>
#include <functional>
#include <string>
#include "ButtonInfo.hpp"
#include "Settings.hpp"

using namespace BNM;
using namespace BNM::IL2CPP;
using namespace BNM::Structures;

class Buttons {
public:
    static inline std::vector<std::vector<ButtonInfo>> buttons = {
            {//Main Stuff - 0
                    ButtonInfo {.buttonText = "Settings", .method = []() { BlitzTag::Settings::SetCurrentCategory(1); }, .isTogglable = false},
                    ButtonInfo {.buttonText = "Movement", .method = []() { BlitzTag::Settings::SetCurrentCategory(2); }, .isTogglable = false},
                    ButtonInfo {.buttonText = "Name", .method = []() { BlitzTag::Settings::SetCurrentCategory(3); }, .isTogglable = false},
                    ButtonInfo {.buttonText = "Overpowered", .method = []() { BlitzTag::Settings::SetCurrentCategory(4); }, .isTogglable = false},
                    ButtonInfo {.buttonText = "Credits", .method = []() { BlitzTag::Settings::SetCurrentCategory(5); }, .isTogglable = false},
            },
            {//Settings - 1
                    ButtonInfo {.buttonText = "Back", .method = []() { BlitzTag::Settings::SetCurrentCategory(0); }, .isTogglable = false},
                    ButtonInfo {.buttonText = "Right Hand Menu", .enableMethod = []() { BlitzTag::Settings::rightHanded = true; }, .disableMethod = []() { BlitzTag::Settings::rightHanded = false; }},
            },
            {//Movement - 2
                    ButtonInfo {.buttonText = "Back", .method = []() { BlitzTag::Settings::SetCurrentCategory(0); }, .isTogglable = false},
            },
            {//Name - 3
                    ButtonInfo {.buttonText = "Back", .method = []() { BlitzTag::Settings::SetCurrentCategory(0); }, .isTogglable = false},
            },

            {//Overpowered - 4
                    ButtonInfo {.buttonText = "Back", .method = []() { BlitzTag::Settings::SetCurrentCategory(0); }, .isTogglable = false},
            },
            {//Credits - 5
                    ButtonInfo {.buttonText = "Back", .method = []() { BlitzTag::Settings::SetCurrentCategory(0); }, .isTogglable = false},
            },
    };
};