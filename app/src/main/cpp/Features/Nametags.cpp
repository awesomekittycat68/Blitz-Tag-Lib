#include "BNMIncludes.hpp"
#include "BNMResolve.hpp"
#include "Nametags.h"
#include "../Utils/Logger.hpp"
#include "SDK/GlobalNamespace/VRRig.hpp"
#include "SDK/GlobalNamespace/GorillaParent.hpp"
#include "SDK/GlobalNamespace/NetPlayer.hpp"

using namespace BNM;
using namespace BNM::Structures;
using namespace BNM::Structures::Unity;

namespace BlitzTag
{
    static std::unordered_map<void*, GameObject*> nametags;
    static bool nameTagEnabled = false;
    static bool anchorNameTag = false;
    static bool nameTagChams = false;
    static const Color tagColor = Color(0.4f, 0.8f, 1.0f);

    static float GetTagDistance(GlobalNamespace::VRRig* rig)
    {
        return 0.25f;
    }

    static Vector3 GetNameTagPosition(GlobalNamespace::VRRig* rig)
    {
        Transform* anchor = anchorNameTag ? rig->GetBodyTransform() : rig->GetHeadMesh()->GetTransform();
        Vector3 up = anchor->GetUp();
        Vector3 pos = anchor->GetPosition();
        return Vector3(
            pos.x + up.x * GetTagDistance(rig),
            pos.y + up.y * GetTagDistance(rig),
            pos.z + up.z * GetTagDistance(rig)
        );
    }

    void Nametags::Update()
    {
        if (!nameTagEnabled)
        {
            Disable();
            return;
        }

        GlobalNamespace::GorillaParent* parent = GlobalNamespace::GorillaParent::GetInstance();
        if (!parent)
            return;

        Mono::List<GlobalNamespace::VRRig*>* vrrigs = parent->GetVrrigs();
        if (!vrrigs)
            return;

        std::vector<void*> activeRigs;

        for (int i = vrrigs->GetSize() - 1; i >= 0; i--)
        {
            GlobalNamespace::VRRig* rig = vrrigs->GetData()[i];
            if (!rig)
                continue;

            if (rig->GetIsLocal())
                continue;

            GameObject* headMesh = rig->GetHeadMesh();
            if (!headMesh)
                continue;

            activeRigs.push_back(rig);

            void* rigKey = rig;
            GameObject* tagObj = nullptr;

            auto it = nametags.find(rigKey);
            if (it == nametags.end() || !it->second)
            {
                tagObj = (GameObject*)GameObject::GetClass().CreateNewObjectParameters(CreateMonoString("BlitzTag_Nametag"));

                Transform* tagTransform = tagObj->GetTransform();
                tagTransform->SetLocalScale(Vector3(0.25f, 0.25f, 0.25f));

                TextMesh* textMesh = tagObj->AddComponent<TextMesh*>(TextMesh::GetType());
                if (textMesh)
                {
                    textMesh->SetFontSize(48);
                    textMesh->SetCharacterSize(0.01f);
                    textMesh->SetAnchor(4);
                    textMesh->SetAlignment(1);
                    textMesh->SetColor(tagColor);
                }

                nametags[rigKey] = tagObj;
            }
            else
            {
                tagObj = it->second;
            }

            TextMesh* tmComponent = tagObj->GetComponent<TextMesh*>(TextMesh::GetType());
            if (tmComponent)
            {
                GlobalNamespace::NetPlayer* creator = rig->GetCreator();
                std::string name = "Player";
                if (creator)
                {
                    Mono::String* nick = creator->GetNickName();
                    if (nick)
                    {
                        name = nick->str();
                        if (name.empty())
                            name = "Player";
                    }
                }

                tmComponent->SetText(name);
            }

            float scale = 0.25f;
            try
            {
                scale = rig->GetScaleFactor();
            }
            catch (...) {}

            Transform* tagTransform = tagObj->GetTransform();
            tagTransform->SetLocalScale(Vector3(0.25f * scale, 0.25f * scale, 0.25f * scale));
            tagTransform->SetPosition(GetNameTagPosition(rig));

            Camera* cam = Camera::GetMain();
            if (cam)
            {
                Transform* camTransform = cam->GetTransform();
                tagTransform->LookAt(camTransform->GetPosition());
                Quaternion currentRot = tagTransform->GetRotation();
                Quaternion y180 = Quaternion::FromEuler(0.0f, 180.0f, 0.0f);
                tagTransform->SetRotation(currentRot * y180);
            }
        }

        if (!nametags.empty())
        {
            std::vector<void*> toRemove;
            for (auto& kvp : nametags)
            {
                bool found = false;
                for (void* activeRig : activeRigs)
                {
                    if (kvp.first == activeRig)
                    {
                        found = true;
                        break;
                    }
                }

                if (!found || !kvp.second)
                {
                    if (kvp.second)
                        GameObject::Destroy(kvp.second);
                    toRemove.push_back(kvp.first);
                }
            }

            for (void* key : toRemove)
            {
                nametags.erase(key);
            }
        }
    }

    void Nametags::Disable()
    {
        for (auto& kvp : nametags)
        {
            if (kvp.second)
                GameObject::Destroy(kvp.second);
        }
        nametags.clear();
    }

    void Nametags::SetEnabled(bool enabled)
    {
        if (!enabled && nameTagEnabled)
        {
            Disable();
        }
        nameTagEnabled = enabled;
    }
}
