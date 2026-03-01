#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class FXType : int {
        BalloonPop = 0,
        PlayHandTap = 1,
        HWIngredients = 2,
        Impact = 3,
        Projectile = 4,
        OnHandTap = 5,
        RequestFortune = 6,
        PlayerLaunch = 7,
        RequestOwnership = 8,
        RequestCosmetics = 9,
        PlayRemotePointRedemption = 10,
        CMS_RequestTrigger = 11,
        Friending = 12,
        TeleportToVStumpVFX = 13,
        ReturnFromVStumpVFX = 14,
        VerifyPartyMember = 15,
        VS_SetTerminalControlStatus = 16,
        VS_UpdateScreen = 17,
        VS_RefreshDriverNickname = 18,
        VS_RequestTerminalControlStatusChange = 19,
        PlayerHitEvent = 20,
        MaterialCycler = 21,
        RequestOwnershipFromAuthority = 22,
        GroupJoin = 23,
        Length = 24,
    };
}
