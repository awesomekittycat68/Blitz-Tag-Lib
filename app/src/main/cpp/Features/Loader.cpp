#include "../Externs.h"
#include "Loader.h"
#include "BNM/Loading.hpp"
#include "SDK/GorillaLocomotion/GTPlayer.hpp"

namespace BlitzTag
{
    static void (*AwakeGTAG)(GorillaLocomotion::GTPlayer*);
    static void new_Awake(GorillaLocomotion::GTPlayer* instance)
    {
        Awake();
        AwakeGTAG(instance);
    }

    static void (*UpdateGTAG)(GorillaLocomotion::GTPlayer*);
    static void new_Update(GorillaLocomotion::GTPlayer* instance)
    {
        Update();
        UpdateGTAG(instance);
    }

    void Loader::Initialize()
    {
        BasicHook(GorillaLocomotion::GTPlayer::GetClass().GetMethod("Awake"), new_Awake, AwakeGTAG);
        BasicHook(GorillaLocomotion::GTPlayer::GetClass().GetMethod("FixedUpdate"), new_Update, UpdateGTAG);
    }
}