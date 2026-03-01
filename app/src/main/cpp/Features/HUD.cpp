#include "BNMIncludes.hpp"
#include "GUI/GUIManager.hpp"
#include "HUD.h"
#include "../Utils/Logger.hpp"
#include "SDK/GlobalNamespace/VRRig.hpp"
#include "SDK/GlobalNamespace/GorillaTagger.hpp"
#include "SDK/GlobalNamespace/LckBodyCameraSpawner.hpp"
#include "SDK/GorillaLocomotion/GTPlayer.hpp"
#include "SDK/Photon_Pun/PhotonNetwork.hpp"

using namespace BNM;
using namespace BNM::Structures;
using namespace BNM::Structures::Unity;
using namespace BNM::IL2CPP;

auto lastFrame = std::chrono::high_resolution_clock::now();
int fps = 0;               // Cached FPS value
float sessionStart = 0.0f; // Time when session began

void BlitzTag::HUD::Init() {
    sessionStart = Time::GetTime();

    Transform* MainCameraTransform = Camera::GetMain()->GetTransform();

    Class Resources = Class("UnityEngine", "Resources");
    Class FontClass = Class("UnityEngine", "Font");
    Method<Mono::Array<Il2CppObject*>*> FindObjectsOfTypeAll = Resources.GetMethod("FindObjectsOfTypeAll", 1);
    auto arr = FindObjectsOfTypeAll(FontClass.GetMonoType());
    Font* utopium = nullptr;
    for (auto i : arr->ToVector()) {
        Property<Mono::String*> name = FontClass.GetProperty("name");
        std::string realName = name[i].Get()->str();
        if (realName == "Utopium") {
            utopium = (Font*)i;
            break;
        }
    }

    gui = new GUIManager();
    gui->Init(MainCameraTransform, TextAnchor::UpperRight, utopium);
}

void BlitzTag::HUD::Update() {
    static float delta = 0.0f; // smoothed delta
    auto now = std::chrono::high_resolution_clock::now();
    std::chrono::duration<float> frameTime = now - lastFrame;
    lastFrame = now;

    delta += (frameTime.count() - delta) * 0.05f;

    if (delta > 0.0f) {
        fps = static_cast<int>(std::round(1.0f / delta));
    }

    std::string speedText = "Speed: N/A";

    if (!GorillaLocomotion::GTPlayer::GetInstance()) {
        return;
    }

    GorillaLocomotion::GTPlayer* player = GorillaLocomotion::GTPlayer::GetInstance();
    Collider* collider = player->GetBodyCollider();
    if (!collider) {
        return;
    }

    Rigidbody* rb = collider->GetAttachedRigidbody();
    if (!rb) {
        return;
    }

    Vector3 vel = rb->GetVelocity();
    float magnitude = std::sqrt(vel.x * vel.x + vel.y * vel.y + vel.z * vel.z);

    char buffer[128];
    snprintf(buffer, sizeof(buffer),
             "Speed: %.1f m/s\nMax Speed: %.1f m/s",
             magnitude,
             player->GetMaxJumpSpeed());

    speedText = buffer;

    float elapsed = (sessionStart == 0.0f) ? 0.0f : (Time::GetTime() - sessionStart);

    int totalSeconds = static_cast<int>(elapsed);

    int h = totalSeconds / 3600;
    int m = (totalSeconds % 3600) / 60;
    int s = totalSeconds % 60;

    char sessionBuffer[64];
    if (h > 0) {
        snprintf(sessionBuffer, sizeof(sessionBuffer), "Session: %02d:%02d:%02d", h, m, s);
    }
    else {
        snprintf(sessionBuffer, sizeof(sessionBuffer), "Session: %02d:%02d", m, s);
    }

    std::string sessionText = sessionBuffer;

    std::string playersText = "Players: 0 (Not in room)";

    if (Photon_Pun::PhotonNetwork::GetInRoom()) {
        auto list = Photon_Pun::PhotonNetwork::GetPlayerList();
        if (list) {
            playersText = "Players: " + std::to_string(list->GetSize());
        }
        else {
            Logger::Log("list is null");
        }
    }

    std::string pingText = "Ping: N/A";

    if (Photon_Pun::PhotonNetwork::GetIsConnected()) {
        pingText = "Ping: " + std::to_string(Photon_Pun::PhotonNetwork::GetPing()) + "ms";
    }

    std::string finalText =
            speedText +
            "\nFPS: " + std::to_string(fps) +
            "\n" + sessionText +
            "\n" + playersText +
            "\n" + pingText;

    gui->SetText(finalText);
}