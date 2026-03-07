#pragma once
#include <BNMResolve.hpp>
#include "Settings.hpp"
#include "ButtonInfo.hpp"
#include "Buttons.hpp"
#include "SDK/Photon_Pun/PhotonNetwork.hpp"

using namespace BNM;
using namespace BNM::IL2CPP;
using namespace BNM::Structures;

class MenuManager {
private:
    static inline int FPSUpdateThingy;
public:
    struct ButtonCollider : BNM::UnityEngine::MonoBehaviour //im lazy tbh so ima just make this stay here lmao
    {
        BNM_CustomClass(ButtonCollider,
                        BNM::CompileTimeClassBuilder(BNM_OBFUSCATE_TMP(O("")), BNM_OBFUSCATE_TMP(O("ButtonCollider"))).Build(),
                        BNM::CompileTimeClassBuilder(BNM_OBFUSCATE_TMP(O("UnityEngine")), BNM_OBFUSCATE_TMP(O("MonoBehaviour")), BNM_OBFUSCATE_TMP(O("UnityEngine.CoreModule"))).Build(),
                        {},
        );

        void Constructor() {
            BNM::UnityEngine::MonoBehaviour tmp = *this;
            *this = ButtonCollider();
            *((BNM::UnityEngine::MonoBehaviour *)this) = tmp;
        }

        Mono::String* relatedText {};
        void OnTriggerEnter(Collider* collider)
        {
            if (collider->GetGameObject() != BlitzTag::Settings::reference) return;
            if (Time::GetFrameCount() >= BlitzTag::Settings::framePressCooldown + 30)
            {
                MenuManager::Toggle(relatedText);
                BlitzTag::Settings::framePressCooldown = Time::GetFrameCount();
            }
        }
        BNM_CustomField(relatedText, BNM::Defaults::Get<Mono::String*>(), "relatedText");
        BNM_CustomMethod(OnTriggerEnter, false, BNM::Defaults::Get<void>(), "OnTriggerEnter");
        BNM_CustomMethod(Constructor, false, BNM::Defaults::Get<void>(), ".ctor");
    };

    static void Prefix() {
        try {
            bool open = (!BlitzTag::Settings::rightHanded && GlobalNamespace::ControllerInputPoller::GetInstance()->GetLeftControllerSecondaryButton()) || (BlitzTag::Settings::rightHanded && GlobalNamespace::ControllerInputPoller::GetInstance()->GetRightControllerSecondaryButton());
            if (BlitzTag::Settings::menu == nullptr) {
                if (open) {
                    CreateMenu();
                    RecenterMenu();
                    if (BlitzTag::Settings::reference == nullptr) CreateReference();
                }
            } else {
                if (open) {
                    RecenterMenu();
                } else {
                    if (BlitzTag::Settings::menu) {
                        GameObject::Destroy(BlitzTag::Settings::menu);
                        BlitzTag::Settings::menu = nullptr;
                    }
                    if (BlitzTag::Settings::reference) {
                        GameObject::Destroy(BlitzTag::Settings::reference);
                        BlitzTag::Settings::reference = nullptr;
                    }
                }
            }
            for (auto& buttonList : Buttons::buttons) {
                for (auto& button : buttonList) {
                    if (button.enabled && button.method != nullptr) {
                        try { button.method(); } catch (...) {}
                    }
                }
            }
        } catch (Exception& exc) {}
    }

    static void CreateMenu() {
        // menu holder
        BlitzTag::Settings::menu = GameObject::CreatePrimitive(PrimitiveType::Cube);
        GameObject::Destroy(BlitzTag::Settings::menu->GetComponent(Rigidbody::GetType()));
        GameObject::Destroy(BlitzTag::Settings::menu->GetComponent(BoxCollider::GetType()));
        GameObject::Destroy(BlitzTag::Settings::menu->GetComponent(Renderer::GetType()));
        BlitzTag::Settings::menu->GetTransform()->SetLocalScale(Vector3(0.1f, 0.3f, 0.3825f));

        // Background
        BlitzTag::Settings::menuBackground = GameObject::CreatePrimitive(PrimitiveType::Cube);
        GameObject::Destroy(BlitzTag::Settings::menuBackground->GetComponent(Rigidbody::GetType()));
        GameObject::Destroy(BlitzTag::Settings::menuBackground->GetComponent(BoxCollider::GetType()));
        BlitzTag::Settings::menuBackground->GetTransform()->SetParent(BlitzTag::Settings::menu->GetTransform());
        BlitzTag::Settings::menuBackground->GetTransform()->SetRotation(Quaternion::identity);
        BlitzTag::Settings::menuBackground->GetTransform()->SetLocalScale(BlitzTag::Settings::menuSize);
        BlitzTag::Settings::menuBackground->GetTransform()->SetPosition(Vector3(0.05f, 0.f, 0.f));

        auto* bgRenderer = (Renderer*)BlitzTag::Settings::menuBackground->GetComponent(Renderer::GetType());
        bgRenderer->GetMaterial()->SetShader(Shader::Find("GorillaTag/UberShader"));
        bgRenderer->GetMaterial()->SetColor(BlitzTag::Settings::backgroundColor);

        // Canvas
        BlitzTag::Settings::canvasObject = (GameObject*)GameObject::GetClass().CreateNewObjectParameters();
        BlitzTag::Settings::canvasObject->GetTransform()->SetParent(BlitzTag::Settings::menu->GetTransform());
        auto* canvas = (Canvas*)BlitzTag::Settings::canvasObject->AddComponent(Canvas::GetType());
        auto* scaler = (CanvasScaler*)BlitzTag::Settings::canvasObject->AddComponent(CanvasScaler::GetType());
        BlitzTag::Settings::canvasObject->AddComponent(GraphicRaycaster::GetType());
        canvas->SetRenderMode(RenderMode::WorldSpace);
        scaler->SetDynamicPixelsPerUnit(1000);

        // Title
        GameObject* titleObj = (GameObject*)GameObject::GetClass().CreateNewObjectParameters();
        titleObj->GetTransform()->SetParent(BlitzTag::Settings::canvasObject->GetTransform());
        BlitzTag::Settings::titleText = (Text*)titleObj->AddComponent(Text::GetType());

        BlitzTag::Settings::titleText->SetFont(BlitzTag::Settings::currentFont);
        BlitzTag::Settings::titleText->SetText("Blitz Tag Staff Menu [" + std::to_string(BlitzTag::Settings::pageNumber + 1) + "]");
        BlitzTag::Settings::titleText->SetFontSize(1);
        BlitzTag::Settings::titleText->SetColor(BlitzTag::Settings::textColors[0]);
        BlitzTag::Settings::titleText->SetSupportRichText(true);
        BlitzTag::Settings::titleText->SetFontStyle(FontStyle::Bold);
        BlitzTag::Settings::titleText->SetAlignment(TextAnchor::MiddleCenter);
        BlitzTag::Settings::titleText->SetTextResizeForBestFit(true);
        BlitzTag::Settings::titleText->SetResizeTextMinSize(0);

        auto* titleRect = (RectTransform*)BlitzTag::Settings::titleText->GetComponent(RectTransform::GetType());
        titleRect->SetLocalPosition(Vector3::zero);
        titleRect->SetSizeDelta(Vector2(0.28f, 0.05f));
        titleRect->SetPosition(Vector3(0.06f, 0.f, 0.165f));
        titleRect->SetRotation(Quaternion::FromEuler(Vector3(180.f, 90.f, 90.f)));

        GameObject *prevObj = GameObject::CreatePrimitive(PrimitiveType::Cube);
        GameObject::Destroy(prevObj->GetComponent(Rigidbody::GetType()));
        auto* col = (BoxCollider *) prevObj->GetComponent(BoxCollider::GetType());
        col->SetIsTrigger(true);

        prevObj->GetTransform()->SetParent(BlitzTag::Settings::menu->GetTransform());
        prevObj->GetTransform()->SetLocalRotation(Quaternion::identity);
        prevObj->GetTransform()->SetLocalScale(Vector3(0.09f, 0.2f, 0.9f));
        prevObj->GetTransform()->SetLocalPosition(Vector3(0.56f, 0.65f, 0.f));

        auto* rend = (Renderer *) prevObj->GetComponent(Renderer::GetType());
        rend->GetMaterial()->SetShader(Shader::Find("GorillaTag/UberShader"));
        rend->GetMaterial()->SetColor(BlitzTag::Settings::backgroundColor);

        auto* bc = (ButtonCollider *) prevObj->AddComponent(ButtonCollider::BNMCustomClass.type);
        bc->relatedText = CreateMonoString("PreviousPage");

        GameObject *textObj = (GameObject *) GameObject::GetClass().CreateNewObjectParameters();
        textObj->GetTransform()->SetParent(BlitzTag::Settings::canvasObject->GetTransform());
        Text *text = (Text *) textObj->AddComponent(Text::GetType());

        text->SetFont(BlitzTag::Settings::currentFont);
        text->SetText("<");
        text->SetFontSize(1);
        text->SetColor(BlitzTag::Settings::textColors[0]);
        text->SetAlignment(TextAnchor::MiddleCenter);
        text->SetTextResizeForBestFit(true);
        text->SetResizeTextMinSize(0);

        auto* rect = (RectTransform *) text->GetComponent(RectTransform::GetType());
        rect->SetLocalPosition(Vector3(0.064f, 0.195f, 0.f));
        rect->SetSizeDelta(Vector2(0.2f, 0.03f));
        rect->SetRotation(Quaternion::FromEuler(Vector3(180.f, 90.f, 90.f)));

        // Next Page Button
        GameObject *nextObj = GameObject::CreatePrimitive(PrimitiveType::Cube);
        GameObject::Destroy(nextObj->GetComponent(Rigidbody::GetType()));
        auto* colNP = (BoxCollider *) nextObj->GetComponent(BoxCollider::GetType());
        colNP->SetIsTrigger(true);

        nextObj->GetTransform()->SetParent(BlitzTag::Settings::menu->GetTransform());
        nextObj->GetTransform()->SetLocalRotation(Quaternion::identity);
        nextObj->GetTransform()->SetLocalScale(Vector3(0.09f, 0.2f, 0.9f));
        nextObj->GetTransform()->SetLocalPosition(Vector3(0.56f, -0.65f, 0.f));

        auto* rendNP = (Renderer *) nextObj->GetComponent(Renderer::GetType());
        rendNP->GetMaterial()->SetShader(Shader::Find("GorillaTag/UberShader"));
        rendNP->GetMaterial()->SetColor(BlitzTag::Settings::backgroundColor);

        auto* nbc = (ButtonCollider *) nextObj->AddComponent(ButtonCollider::BNMCustomClass.type);
        nbc->relatedText = CreateMonoString("NextPage");

        GameObject *textObjNP = (GameObject *) GameObject::GetClass().CreateNewObjectParameters();
        textObjNP->GetTransform()->SetParent(BlitzTag::Settings::canvasObject->GetTransform());
        Text *textNP = (Text *) textObjNP->AddComponent(Text::GetType());

        textNP->SetFont(BlitzTag::Settings::currentFont);
        textNP->SetText(">");
        textNP->SetFontSize(1);
        textNP->SetColor(BlitzTag::Settings::textColors[0]);
        textNP->SetAlignment(TextAnchor::MiddleCenter);
        textNP->SetTextResizeForBestFit(true);
        textNP->SetResizeTextMinSize(0);

        auto *rectNP = (RectTransform *) textNP->GetComponent(RectTransform::GetType());
        rectNP->SetLocalPosition(Vector3(0.064f, -0.195f, 0.f));
        rectNP->SetSizeDelta(Vector2(0.2f, 0.03f));
        rectNP->SetRotation(Quaternion::FromEuler(Vector3(180.f, 90.f, 90.f)));

        std::vector<ButtonInfo> activeButtons(
                Buttons::buttons[BlitzTag::Settings::currentCategory].begin() + std::min((int)Buttons::buttons[BlitzTag::Settings::currentCategory].size(), BlitzTag::Settings::pageNumber * BlitzTag::Settings::buttonsPerPage),
                Buttons::buttons[BlitzTag::Settings::currentCategory].begin() + std::min((int)Buttons::buttons[BlitzTag::Settings::currentCategory].size(), BlitzTag::Settings::pageNumber * BlitzTag::Settings::buttonsPerPage + BlitzTag::Settings::buttonsPerPage)
        );

        for (int i = 0; i < activeButtons.size(); i++)
        {
            CreateButton((float)i * 0.1f, activeButtons[i]);
        }
    }

    static void CreateButton(float offset, const ButtonInfo& method) {
        GameObject* buttonObj = GameObject::CreatePrimitive(PrimitiveType::Cube);
        GameObject::Destroy(buttonObj->GetComponent(Rigidbody::GetType()));
        auto* col = (BoxCollider *) buttonObj->GetComponent(BoxCollider::GetType());
        col->SetIsTrigger(true);
        buttonObj->GetTransform()->SetParent(BlitzTag::Settings::menu->GetTransform());
        buttonObj->GetTransform()->SetRotation(Quaternion::identity);
        buttonObj->GetTransform()->SetLocalScale(Vector3(0.09f, 0.9f, 0.08f));
        buttonObj->GetTransform()->SetLocalPosition(Vector3(0.56f, 0.f, 0.28f - offset));
        auto* rend = (Renderer *) buttonObj->GetComponent(Renderer::GetType());
        rend->GetMaterial()->SetShader(Shader::Find("GorillaTag/UberShader"));
        rend->GetMaterial()->SetColor(method.enabled ? BlitzTag::Settings::buttonColors[1] : BlitzTag::Settings::buttonColors[0]);

        auto* nbc = (ButtonCollider*)buttonObj->AddComponent(ButtonCollider::BNMCustomClass.type);
        nbc->relatedText = CreateMonoString(method.buttonText);

        GameObject* textObj = (GameObject*)GameObject::GetClass().CreateNewObjectParameters();
        textObj->GetTransform()->SetParent(BlitzTag::Settings::canvasObject->GetTransform());
        Text* text = (Text*)textObj->AddComponent(Text::GetType());
        text->SetFont(BlitzTag::Settings::currentFont);
        /*if (!method.overlapText.empty()) text->SetText(method.overlapText);
        else*/ text->SetText(method.buttonText);
        text->SetSupportRichText(true);
        text->SetFontSize(1);
        text->SetColor(method.enabled ? BlitzTag::Settings::textColors[1] : BlitzTag::Settings::textColors[0]);
        text->SetAlignment(TextAnchor::MiddleCenter);
        text->SetFontStyle(FontStyle::Italic);
        text->SetTextResizeForBestFit(true);
        text->SetResizeTextMinSize(0);
        auto* rect = (RectTransform*)text->GetComponent(RectTransform::GetType());
        rect->SetLocalPosition(Vector3::zero);
        rect->SetSizeDelta(Vector2(0.2f, 0.03f));
        rect->SetLocalPosition(Vector3(0.064f, 0.f, 0.111f - offset / 2.6f));
        rect->SetRotation(Quaternion::FromEuler(Vector3(180.f, 90.f, 90.f)));
    }
    static void RecreateMenu() {
        if (BlitzTag::Settings::menu != nullptr) {
            GameObject::Destroy(BlitzTag::Settings::menu);
            BlitzTag::Settings::menu = nullptr;
        }
        CreateMenu();
        RecenterMenu();
    }
    static void RecenterMenu() {
        if (!BlitzTag::Settings::rightHanded) {
            if (GameObject::Find("LeftHand Controller") != nullptr) {
                BlitzTag::Settings::menu->GetTransform()->SetPosition(GameObject::Find("LeftHand Controller")->GetTransform()->GetPosition());
                BlitzTag::Settings::menu->GetTransform()->SetRotation(GameObject::Find("LeftHand Controller")->GetTransform()->GetRotation());
            }
        }
        else {
            if (GameObject::Find("RightHand Controller") != nullptr) {
                BlitzTag::Settings::menu->GetTransform()->SetPosition(GameObject::Find("RightHand Controller")->GetTransform()->GetPosition());
                Vector3 rot = GameObject::Find("RightHand Controller")->GetTransform()->GetEulerAngles();
                rot += Vector3(0.f, 0.f, 180.f);
                BlitzTag::Settings::menu->GetTransform()->SetRotation(Quaternion::FromEuler(rot));
            }
        }
    }
    static void CreateReference() {
        BlitzTag::Settings::reference = GameObject::CreatePrimitive(PrimitiveType::Sphere);
        BlitzTag::Settings::reference->GetTransform()->SetParent(BlitzTag::Settings::rightHanded ? GameObject::Find("LeftHand Controller")->GetTransform() : GameObject::Find("RightHand Controller")->GetTransform());
        auto* RefRend = (Renderer*)BlitzTag::Settings::reference->GetComponent(Renderer::GetType());
        RefRend->GetMaterial()->SetShader(Shader::Find("GorillaTag/UberShader"));
        RefRend->GetMaterial()->SetColor(BlitzTag::Settings::backgroundColor);
        BlitzTag::Settings::reference->GetTransform()->SetLocalPosition(Vector3(0.f, -0.1f, 0.f));
        BlitzTag::Settings::reference->GetTransform()->SetLocalScale(Vector3(0.01f, 0.01f, 0.01f));
        BlitzTag::Settings::buttonCollider = (SphereCollider*)BlitzTag::Settings::reference->GetComponent(SphereCollider::GetType());
    }
    static void Toggle(Mono::String* text) {
        if (!text) return;
        std::string buttonText = text->str();
        int lastPage = ((Buttons::buttons[BlitzTag::Settings::currentCategory].size() + BlitzTag::Settings::buttonsPerPage - 1) / BlitzTag::Settings::buttonsPerPage) - 1;
        if (buttonText == "PreviousPage") {
            BlitzTag::Settings::pageNumber--;
            if (BlitzTag::Settings::pageNumber < 0)
                BlitzTag::Settings::pageNumber = lastPage;
        } else if (buttonText == "NextPage") {
            BlitzTag::Settings::pageNumber++;
            if (BlitzTag::Settings::pageNumber > lastPage)
                BlitzTag::Settings::pageNumber = 0;
        } else if (buttonText == "DisconnectBTN") {
            Photon_Pun::PhotonNetwork::Disconnect();
        } else {
            for (auto& Button : Buttons::buttons[BlitzTag::Settings::currentCategory]) {
                if (Button.buttonText == buttonText) {
                    if (Button.isTogglable) {
                        Button.enabled = !Button.enabled;
                        if (Button.enabled) {
                            if (Button.enableMethod != nullptr) { Button.enableMethod(); }
                        } else if (!Button.enabled) {
                            if (Button.disableMethod != nullptr) { Button.disableMethod(); }
                        }
                    } else {
                        if (Button.method != nullptr) { Button.method(); }
                    }
                    break;
                }
            }
        }
        RecreateMenu();
    }
};
