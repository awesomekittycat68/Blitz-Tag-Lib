#include "Settings.hpp"
#include "BNMResolve.hpp"

Color BlitzTag::Settings::backgroundColor = Color(0.55f, 0.0f, 1.0f, 0.92f);
std::vector<Color> BlitzTag::Settings::buttonColors = {
    Color(0.45f, 0.0f, 0.85f, 1.0f),
    Color(0.70f, 0.20f, 1.0f, 1.0f)
};
std::vector<Color> BlitzTag::Settings::textColors = {
    Color(1.0f, 1.0f, 1.0f, 1.0f),
    Color(1.0f, 1.0f, 1.0f, 1.0f)
};
Font* BlitzTag::Settings::currentFont = (Font*)Resources::GetBuiltinResource(Font::GetType(), BNM_OBFUSCATE("Arial.ttf"));

bool BlitzTag::Settings::rightHanded = false;

Vector3 BlitzTag::Settings::menuSize = Vector3(0.1f, 1.0f, 1.0f);
int BlitzTag::Settings::buttonsPerPage = 0;
int BlitzTag::Settings::framePressCooldown = 0;

GameObject* BlitzTag::Settings::menu = nullptr;
GameObject* BlitzTag::Settings::menuBackground = nullptr;
GameObject* BlitzTag::Settings::reference = nullptr;
GameObject* BlitzTag::Settings::canvasObject = nullptr;
SphereCollider* BlitzTag::Settings::buttonCollider = nullptr;
Text* BlitzTag::Settings::titleText = nullptr;
Text* BlitzTag::Settings::fpsText = nullptr;

int BlitzTag::Settings::pageNumber = 8;
int BlitzTag::Settings::currentCategory = 0;