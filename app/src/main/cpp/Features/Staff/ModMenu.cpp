#pragma once

#include "BNMIncludes.hpp"
#include "MenuManager.hpp"
#include "ModMenu.hpp"
//#include "Buttons.hpp"
#include "Settings.hpp"
#include "Settings.cpp"
#include "ButtonInfo.hpp"

void ModMenu::Init() {
    BlitzTag::Settings::currentFont = (Font*)Resources::GetBuiltinResource(Font::GetType(), BNM_OBFUSCATE("Arial.ttf"));
    if (!BlitzTag::Settings::currentFont) {
        BNM_LOG_WARN(BNM_OBFUSCATE("Failed to load Arial.ttf"));
    }
}

void ModMenu::Update() {
    MenuManager::Prefix();
}