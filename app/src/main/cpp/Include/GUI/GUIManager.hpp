#pragma once

// Made by discord.gg/spm

#include "BNMResolve.hpp"

struct GUIManager {
public:
    bool _initialized;
    GameObject* menuInstance;
    Text* menuText;

    GUIManager() : _initialized(false), menuInstance(nullptr), menuText(nullptr) {
    }

    void InitV2(Transform* cameraTransform, bool leftSide, Font* customFont) {
        if (_initialized) return;
        _initialized = true;

        menuInstance = (GameObject*)GameObject::GetClass().CreateNewObjectParameters();

        Canvas* canvas = (Canvas*)menuInstance->AddComponent(Canvas::GetType());
        canvas->SetRenderMode(RenderMode::WorldSpace);

        RectTransform* menuTransform = (RectTransform*)menuInstance->GetComponent(RectTransform::GetType());

        Font* fontToUse = customFont;
        if (customFont == nullptr || !customFont->Alive()) {
            fontToUse = (Font*)Resources::GetBuiltinResource(Font::GetType(), BNM_OBFUSCATE("Arial.ttf"));
        }

        menuText = (Text*)menuInstance->AddComponent(Text::GetType());

        Material* guiMaterial = (Material*)Material::GetClass().CreateNewObjectParameters(Shader::Find(
                BNM_OBFUSCATE("GUI/Text Shader")));

        menuTransform->SetParent(cameraTransform, false);
        menuText->SetFont(fontToUse);
        menuTransform->SetLocalEulerAngles(Vector3::zero);
        menuTransform->SetSizeDelta(Vector2(300.0f, 250.0f));
        menuTransform->SetLocalPosition(Vector3(-0.1f, -0.3297f, 1.6f));
        menuTransform->SetLocalScale(Vector3(0.005f, 0.005f, 0.005f));

        menuText->SetMaterial(guiMaterial);

        CanvasScaler* canvasScaler = (CanvasScaler*)menuInstance->AddComponent(CanvasScaler::GetType());

        canvasScaler->SetDynamicPixelsPerUnit(65.f);
        menuText->SetFontStyle(FontStyle::Bold);
        SetDock(leftSide);
    }

    void Init(Transform* cameraTransform, TextAnchor dockPos, Font* customFont) {
        if (_initialized) return;
        _initialized = true;

        menuInstance = (GameObject*)GameObject::GetClass().CreateNewObjectParameters(CreateMonoString(BNM_OBFUSCATE("[Menu Instance]")));

        Canvas* canvas = (Canvas*)menuInstance->AddComponent(Canvas::GetType());
        canvas->SetRenderMode(RenderMode::WorldSpace);

        RectTransform* menuTransform = (RectTransform*)menuInstance->GetComponent(RectTransform::GetType());

        Font* fontToUse = customFont;
        if (customFont == nullptr || !customFont->Alive()) {
            fontToUse = (Font*)Resources::GetBuiltinResource(Font::GetType(), BNM_OBFUSCATE("Arial.ttf"));
        }

        menuText = (Text*)menuInstance->AddComponent(Text::GetType());

        Material* guiMaterial = (Material*)Material::GetClass().CreateNewObjectParameters(Shader::Find(
                BNM_OBFUSCATE("GUI/Text Shader")));

        menuTransform->SetParent(cameraTransform, false);
        menuText->SetFont(fontToUse);
        menuTransform->SetLocalEulerAngles(Vector3::zero);
        menuTransform->SetSizeDelta(Vector2(300.0f, 250.0f));
        menuTransform->SetLocalPosition(Vector3(-0.1f, -0.3297f, 1.6f));
        menuTransform->SetLocalScale(Vector3(0.005f, 0.005f, 0.005f));

        menuText->SetMaterial(guiMaterial);

        CanvasScaler* canvasScaler = (CanvasScaler*)menuInstance->AddComponent(CanvasScaler::GetType());

        canvasScaler->SetDynamicPixelsPerUnit(65.f);
        menuText->SetFontStyle(FontStyle::Bold);
        SetDock(dockPos);
    }
    void Destroy() {
        if (!_initialized) return;
        _initialized = false;

        if (menuInstance) {
            GameObject::Destroy(menuInstance);
            menuInstance = nullptr;
        }
    }

    void SetText(const std::string& tex) {
        menuText->SetText(tex);
    }

    void SetDock(bool leftSide) {
        SetDock(TextAnchor::UpperLeft);
        Transform* menuTransform = menuInstance->GetTransform();
        menuTransform->SetLocalPosition(Vector3(leftSide ? 1.085f : -.1f, -0.3297, 1.6f));
    }

    void SetDock(TextAnchor dockPos) {
        menuText->SetAlignment((TextAnchor)dockPos);
    }

    void SetEnabled(bool active) {
        menuInstance->SetActive(active);
    }
};