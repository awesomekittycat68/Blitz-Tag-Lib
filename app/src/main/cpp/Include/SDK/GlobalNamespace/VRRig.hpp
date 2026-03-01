#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BodyDockPositions_DropPositions.hpp"
#include "GTBitOps_BitWriteInfo.hpp"
#include "InputStruct.hpp"
#include "KeyValueStringPair.hpp"
#include "PhotonMessageInfoWrapped.hpp"
#include "TransferrableObject_ItemStates.hpp"
#include "TransferrableObject_PositionState.hpp"
#include "VRRig_PartyMemberStatus.hpp"
#include "VRRig_VelocityTime.hpp"
#include "../GorillaGameModes/GameModeType.hpp"
#include "../GorillaLocomotion/GTPlayer_MaterialData.hpp"
#include "../GorillaLocomotion/StiltID.hpp"
#include "../GorillaNetworking/CosmeticsController_CosmeticItem.hpp"
#include "../GorillaTag_Cosmetics/CosmeticEffectsOnPlayers_EFFECTTYPE.hpp"
#include "../GorillaTagScripts/SubscriptionManager_SubscriptionDetails.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct VRRig : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "VRRig");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr float REMOTE_CORRECTION_RATE = 5.0f;
        static constexpr bool USE_NEW_NETCODE = false;
        static constexpr int splashLimitCount = 4;
        static constexpr float splashLimitCooldown = 0.5f;
        static constexpr int CHECK_LOUDNESS_FREQ_FRAMES = 10;
        static constexpr int remoteUseReplacementVoice_BIT = 512;
        static constexpr int grabbedRope_BIT = 1024;
        static constexpr int grabbedRopeIsPhotonView_BIT = 2048;
        static constexpr int isHoldingHandsWithPlayer_BIT = 4096;
        static constexpr int isHoldingHoverboard_BIT = 8192;
        static constexpr int isHoverboardLeftHanded_BIT = 16384;
        static constexpr int isOnMovingSurface_BIT = 32768;
        static constexpr int isPropHunt_BIT = 65536;
        static constexpr int propHuntLeftHand_BIT = 131072;
        static constexpr int isLeftHandGrabbable_BIT = 262144;
        static constexpr int isRightHandGrabbable_BIT = 524288;
        static constexpr int isLeftHandTentacleHoldingHand_BIT = 1048576;
        static constexpr int isRightHandTentacleHoldingHand_BIT = 2097152;
        static constexpr int showSubscriber_BIT = 4194304;
        static constexpr int speakingLoudnessVal_BITSHIFT = 24;
        static constexpr float maxGuardianThrowVelocity = 20.0f;
        static constexpr float maxRegularThrowVelocity = 3.0f;
        static constexpr bool SHOW_SCREENS = false;
        ::GlobalNamespace::CosmeticRefRegistry* GetCosmeticReferences() {
            static BNM::Method<::GlobalNamespace::CosmeticRefRegistry*> _method = GetClass().GetMethod(O("get_cosmeticReferences"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCosmeticReferences(::GlobalNamespace::CosmeticRefRegistry* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_cosmeticReferences"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::Array<::GameObject*>* GetCosmetics() {
            static BNM::Method<::BNM::Structures::Mono::Array<::GameObject*>*> _method = GetClass().GetMethod(O("get_cosmetics"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCosmetics(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_cosmetics"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::NetPlayer* GetCreator() {
            static BNM::Method<::GlobalNamespace::NetPlayer*> _method = GetClass().GetMethod(O("get_Creator"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::GorillaSkin* GetCurrentCosmeticSkin() {
            static BNM::Method<::GlobalNamespace::GorillaSkin*> _method = GetClass().GetMethod(O("get_CurrentCosmeticSkin"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCurrentCosmeticSkin(::GlobalNamespace::GorillaSkin* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_CurrentCosmeticSkin"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::GorillaSkin* GetCurrentModeSkin() {
            static BNM::Method<::GlobalNamespace::GorillaSkin*> _method = GetClass().GetMethod(O("get_CurrentModeSkin"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCurrentModeSkin(::GlobalNamespace::GorillaSkin* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_CurrentModeSkin"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::HandEffectContext* GetExtraLeftHandEffect() {
            static BNM::Method<::GlobalNamespace::HandEffectContext*> _method = GetClass().GetMethod(O("get_ExtraLeftHandEffect"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::HandEffectContext* GetExtraRightHandEffect() {
            static BNM::Method<::GlobalNamespace::HandEffectContext*> _method = GetClass().GetMethod(O("get_ExtraRightHandEffect"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::GamePlayer* GetGamePlayerRef() {
            static BNM::Method<::GlobalNamespace::GamePlayer*> _method = GetClass().GetMethod(O("get_GamePlayerRef"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetHasBracelet() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_HasBracelet"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetInitialized() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_Initialized"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetInitializedCosmetics() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_InitializedCosmetics"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetInitializedCosmetics(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_InitializedCosmetics"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsFrozen() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsFrozen"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsFrozen(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_IsFrozen"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsLocal() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_isLocal"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsLocalPartyMember() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsLocalPartyMember"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsMicEnabled() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsMicEnabled"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsMicEnabled(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_IsMicEnabled"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsPlayerMeshHidden() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsPlayerMeshHidden"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetLastHandTouchedGroundAtNetworkTime() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_LastHandTouchedGroundAtNetworkTime"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetLastHandTouchedGroundAtNetworkTime(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_LastHandTouchedGroundAtNetworkTime"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetLastTouchedGroundAtNetworkTime() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_LastTouchedGroundAtNetworkTime"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetLastTouchedGroundAtNetworkTime(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_LastTouchedGroundAtNetworkTime"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::HandEffectContext* GetLeftHandEffect() {
            static BNM::Method<::GlobalNamespace::HandEffectContext*> _method = GetClass().GetMethod(O("get_LeftHandEffect"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetLeftThrowableProjectileIndex() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_LeftThrowableProjectileIndex"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetLeftThrowableProjectileIndex(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_LeftThrowableProjectileIndex"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        static ::GlobalNamespace::VRRig* GetLocalRig() {
            static BNM::Method<::GlobalNamespace::VRRig*> _method = GetClass().GetMethod(O("get_LocalRig"));
            //_method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::Material* GetMyDefaultSkinMaterialInstance() {
            static BNM::Method<::Material*> _method = GetClass().GetMethod(O("get_myDefaultSkinMaterialInstance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetNativeScale() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_NativeScale"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetNativeScale(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_NativeScale"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::Array<::GameObject*>* GetOverrideCosmetics() {
            static BNM::Method<::BNM::Structures::Mono::Array<::GameObject*>*> _method = GetClass().GetMethod(O("get_overrideCosmetics"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetOverrideCosmetics(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_overrideCosmetics"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetPostTickRunning() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_PostTickRunning"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetPostTickRunning(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_PostTickRunning"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetRandomThrowableIndex() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_RandomThrowableIndex"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetRandomThrowableIndex(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_RandomThrowableIndex"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetRigBuildFullyInitialized() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_RigBuildFullyInitialized"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::HandEffectContext* GetRightHandEffect() {
            static BNM::Method<::GlobalNamespace::HandEffectContext*> _method = GetClass().GetMethod(O("get_RightHandEffect"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetRightThrowableProjectileIndex() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_RightThrowableProjectileIndex"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetRightThrowableProjectileIndex(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_RightThrowableProjectileIndex"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetScaleFactor() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_scaleFactor"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetScaleMultiplier() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_ScaleMultiplier"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetScaleMultiplier(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_ScaleMultiplier"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetShowGoldNameTag() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_ShowGoldNameTag"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetShowGoldNameTag(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_ShowGoldNameTag"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetSizeLayerMask() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_SizeLayerMask"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetSizeLayerMask(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_SizeLayerMask"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetSpeakingLoudness() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_SpeakingLoudness"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetSpeakingLoudness(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_SpeakingLoudness"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Unity::Vector3 GetSyncPos() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _method = GetClass().GetMethod(O("get_syncPos"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetSyncPos(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_syncPos"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::GorillaSkin* GetTemporaryEffectSkin() {
            static BNM::Method<::GlobalNamespace::GorillaSkin*> _method = GetClass().GetMethod(O("get_TemporaryEffectSkin"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTemporaryEffectSkin(::GlobalNamespace::GorillaSkin* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_TemporaryEffectSkin"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetWearablePackedStates() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_WearablePackedStates"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetWearablePackedStates(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_WearablePackedStates"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        void add_OnColorChanged(::BNM::Structures::Mono::Action<::BNM::Structures::Unity::Color>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnColorChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnColorChanged(::BNM::Structures::Mono::Action<::BNM::Structures::Unity::Color>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnColorChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnDataChange(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnDataChange"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnDataChange(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnDataChange"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnPlayerNameVisibleChanged(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnPlayerNameVisibleChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnPlayerNameVisibleChanged(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnPlayerNameVisibleChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnQuestScoreChanged(::BNM::Structures::Mono::Action<int>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnQuestScoreChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnQuestScoreChanged(::BNM::Structures::Mono::Action<int>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnQuestScoreChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnRankedSubtierChanged(::BNM::Structures::Mono::Action<int, int>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnRankedSubtierChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnRankedSubtierChanged(::BNM::Structures::Mono::Action<int, int>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnRankedSubtierChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        ::BNM::Structures::Mono::Array<::GameObject*>* GetCosmetics_f() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("_cosmetics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::HandEffectContext* GetExtraLeftHandEffect_f() {
            static BNM::Field<::GlobalNamespace::HandEffectContext*> _field = GetClass().GetField(O("_extraLeftHandEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::HandEffectContext* GetExtraRightHandEffect_f() {
            static BNM::Field<::GlobalNamespace::HandEffectContext*> _field = GetClass().GetField(O("_extraRightHandEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GamePlayer* GetGamePlayerRef_f() {
            static BNM::Field<::GlobalNamespace::GamePlayer*> _field = GetClass().GetField(O("_gamePlayerRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsListeningForOnPostInstantiateAllPrefabs() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isListeningFor_OnPostInstantiateAllPrefabs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::HandEffectContext* GetLeftHandEffect_f() {
            static BNM::Field<::GlobalNamespace::HandEffectContext*> _field = GetClass().GetField(O("_leftHandEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetNextUpdateTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("_nextUpdateTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GameObject*>* GetOverrideCosmetics_f() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("_overrideCosmetics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetPlayerOwnedCosmetics() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_playerOwnedCosmetics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRankedInfoUpdated() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_rankedInfoUpdated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRigBuildFullyInitialized_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_rigBuildFullyInitialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::HandEffectContext* GetRightHandEffect_f() {
            static BNM::Field<::GlobalNamespace::HandEffectContext*> _field = GetClass().GetField(O("_rightHandEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetScoreUpdated() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_scoreUpdated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetTemporaryCosmetics() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_temporaryCosmetics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GameObject*>* GetActiveCosmetics() {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("activeCosmetics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetAudioDesc() {
            static BNM::Field<void*> _field = GetClass().GetField(O("audioDesc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetBackpack() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("backpack"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBlue() {
            static BNM::Field<float> _field = GetClass().GetField(O("blue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::HoldableHand* GetBodyHolds() {
            static BNM::Field<::GlobalNamespace::HoldableHand*> _field = GetClass().GetField(O("bodyHolds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaBodyRenderer* GetBodyRenderer() {
            static BNM::Field<::GlobalNamespace::GorillaBodyRenderer*> _field = GetClass().GetField(O("bodyRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetBodyTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("bodyTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBonkCooldown() {
            static BNM::Field<float> _field = GetClass().GetField(O("bonkCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBonkTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("bonkTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderArmShelf* GetBuilderArmShelfLeft() {
            static BNM::Field<::GlobalNamespace::BuilderArmShelf*> _field = GetClass().GetField(O("builderArmShelfLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderArmShelf* GetBuilderArmShelfRight() {
            static BNM::Field<::GlobalNamespace::BuilderArmShelf*> _field = GetClass().GetField(O("builderArmShelfRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetBuilderResizeWatch() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("builderResizeWatch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetCachedRenderTransformPos() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("cachedRenderTransformPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetCanReport() {
            static BNM::Field<bool> _field = GetClass().GetField(O("canReport"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::AudioClip*>* GetClipToPlay() {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioClip*>*> _field = GetClass().GetField(O("clipToPlay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetColorInitialized() {
            static BNM::Field<bool> _field = GetClass().GetField(O("colorInitialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TagEffects::TagEffectPack* GetCosmeticEffectPack() {
            static BNM::Field<::TagEffects::TagEffectPack*> _field = GetClass().GetField(O("CosmeticEffectPack"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::HandEffectsOverrideCosmetic*>* GetCosmeticHandEffectsOverrideLeft() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::HandEffectsOverrideCosmetic*>*> _field = GetClass().GetField(O("CosmeticHandEffectsOverride_Left"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::HandEffectsOverrideCosmetic*>* GetCosmeticHandEffectsOverrideRight() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::HandEffectsOverrideCosmetic*>*> _field = GetClass().GetField(O("CosmeticHandEffectsOverride_Right"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCosmeticPitchShift() {
            static BNM::Field<float> _field = GetClass().GetField(O("cosmeticPitchShift"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCosmeticRetries() {
            static BNM::Field<int> _field = GetClass().GetField(O("cosmeticRetries"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetCosmeticsActivationPS() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("cosmeticsActivationPS"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SoundBankPlayer* GetCosmeticsActivationSBP() {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("cosmeticsActivationSBP"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::CosmeticsController_CosmeticSet* GetCosmeticSet() {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticSet*> _field = GetClass().GetField(O("cosmeticSet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::CosmeticItemRegistry* GetCosmeticsObjectRegistry() {
            static BNM::Field<::GorillaNetworking::CosmeticItemRegistry*> _field = GetClass().GetField(O("cosmeticsObjectRegistry"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::NetPlayer* GetCreator_f() {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("creator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentCosmeticTries() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentCosmeticTries"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetCurrentHoldParent() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("currentHoldParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice_Unity::MicWrapper* GetCurrentMicWrapper() {
            static BNM::Field<::Photon_Voice_Unity::MicWrapper*> _field = GetClass().GetField(O("currentMicWrapper"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentQuestScore() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentQuestScore"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCurrentRankedELO() {
            static BNM::Field<float> _field = GetClass().GetField(O("currentRankedELO"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentRankedSubTierPC() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentRankedSubTierPC"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentRankedSubTierQuest() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentRankedSubTierQuest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion_Gameplay::GorillaRopeSwing* GetCurrentRopeSwing() {
            static BNM::Field<::GorillaLocomotion_Gameplay::GorillaRopeSwing*> _field = GetClass().GetField(O("currentRopeSwing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetCurrentRopeSwingTarget() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("currentRopeSwingTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaSkin* GetDefaultSkin() {
            static BNM::Field<::GlobalNamespace::GorillaSkin*> _field = GetClass().GetField(O("defaultSkin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDoNotLerpConstant() {
            static BNM::Field<float> _field = GetClass().GetField(O("doNotLerpConstant"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::RigDuplicationZone* GetDuplicationZone() {
            static BNM::Field<::GlobalNamespace::RigDuplicationZone*> _field = GetClass().GetField(O("duplicationZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MeshRenderer* GetFaceSkin() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("faceSkin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetFps() {
            static BNM::Field<int> _field = GetClass().GetField(O("fps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetFPVEffectsParent() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("FPVEffectsParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFrameScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("frameScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::FriendshipBracelet* GetFriendshipBraceletLeftHand() {
            static BNM::Field<::GorillaNetworking::FriendshipBracelet*> _field = GetClass().GetField(O("friendshipBraceletLeftHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::FriendshipBracelet* GetFriendshipBraceletRightHand() {
            static BNM::Field<::GorillaNetworking::FriendshipBracelet*> _field = GetClass().GetField(O("friendshipBraceletRightHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetFrozenEffect() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("frozenEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFrozenEffectMaxHorizontalScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("frozenEffectMaxHorizontalScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFrozenEffectMaxY() {
            static BNM::Field<float> _field = GetClass().GetField(O("frozenEffectMaxY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFrozenEffectMinHorizontalScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("frozenEffectMinHorizontalScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFrozenEffectMinY() {
            static BNM::Field<float> _field = GetClass().GetField(O("frozenEffectMinY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFrozenTimeElapsed() {
            static BNM::Field<float> _field = GetClass().GetField(O("frozenTimeElapsed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::FXSystemSettings* GetFxSettings() {
            static BNM::Field<::GlobalNamespace::FXSystemSettings*> _field = GetClass().GetField(O("fxSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetGeodeCrackingSound() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("geodeCrackingSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::VRRig* GetGLocalRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("gLocalRig"));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetGorillaSnapTurningComp() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("GorillaSnapTurningComp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetGrabbedRopeBoneIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("grabbedRopeBoneIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetGrabbedRopeIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("grabbedRopeIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetGrabbedRopeIsBody() {
            static BNM::Field<bool> _field = GetClass().GetField(O("grabbedRopeIsBody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetGrabbedRopeIsLeft() {
            static BNM::Field<bool> _field = GetClass().GetField(O("grabbedRopeIsLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetGrabbedRopeIsPhotonView() {
            static BNM::Field<bool> _field = GetClass().GetField(O("grabbedRopeIsPhotonView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetGrabbedRopeOffset() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("grabbedRopeOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGreen() {
            static BNM::Field<float> _field = GetClass().GetField(O("green"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetGuardianEjectWatch() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("guardianEjectWatch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetHandLerpValues() {
            static BNM::Field<double> _field = GetClass().GetField(O("handLerpValues"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHandSpeedToVolumeModifier() {
            static BNM::Field<float> _field = GetClass().GetField(O("handSpeedToVolumeModifier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetHandSync() {
            static BNM::Field<int> _field = GetClass().GetField(O("handSync"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::AudioClip*>* GetHandTapSound() {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioClip*>*> _field = GetClass().GetField(O("handTapSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHauntedHearingVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("HauntedHearingVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHauntedRingVoicePitch() {
            static BNM::Field<float> _field = GetClass().GetField(O("HauntedRingVoicePitch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHauntedVoicePitch() {
            static BNM::Field<float> _field = GetClass().GetField(O("HauntedVoicePitch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRMap* GetHead() {
            static BNM::Field<::GlobalNamespace::VRMap*> _field = GetClass().GetField(O("head"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetHeadBodyOffset() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("headBodyOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetHeadConstraint() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("headConstraint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetHeadMesh() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("headMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetHoverboardEnabledCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("hoverboardEnabledCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::HoverboardVisual* GetHoverboardVisual() {
            static BNM::Field<::GlobalNamespace::HoverboardVisual*> _field = GetClass().GetField(O("hoverboardVisual"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetHuntComputer() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("huntComputer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetIceCubeLeft() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("iceCubeLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetIceCubeRight() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("iceCubeRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetIceParticleSystem() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("iceParticleSystem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetInDuplicationZone() {
            static BNM::Field<bool> _field = GetClass().GetField(O("inDuplicationZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetInitialized_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("initialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetInitializedCosmetics_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("initializedCosmetics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetInOverrideSubscriptionZone() {
            static BNM::Field<bool> _field = GetClass().GetField(O("InOverrideSubscriptionZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::TransferrableObject*>* GetInstrumentSelfOnly() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::TransferrableObject*>*> _field = GetClass().GetField(O("instrumentSelfOnly"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetInTempCosmSpace() {
            static BNM::Field<bool> _field = GetClass().GetField(O("inTempCosmSpace"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetInTryOnRoom() {
            static BNM::Field<bool> _field = GetClass().GetField(O("inTryOnRoom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsHaunted() {
            static BNM::Field<bool> _field = GetClass().GetField(O("IsHaunted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsInitialized() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isInitialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsInvisibleToLocalPlayer() {
            static BNM::Field<bool> _field = GetClass().GetField(O("IsInvisibleToLocalPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsMyPlayer() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isMyPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsOfflineVRRig() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isOfflineVRRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetJobPos() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("jobPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetJobRotation() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("jobRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastMountedSurfaceTimer() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastMountedSurfaceTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLastPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastRopeGrabTimer() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastRopeGrabTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastScaleFactor() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastScaleFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetLavaParticleSystem() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("lavaParticleSystem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::LayerChanger* GetLayerChanger() {
            static BNM::Field<::GorillaTagScripts::LayerChanger*> _field = GetClass().GetField(O("layerChanger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRMap* GetLeftHand() {
            static BNM::Field<::GlobalNamespace::VRMap*> _field = GetClass().GetField(O("leftHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetLeftHandGooParticleSystem() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("leftHandGooParticleSystem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLeftHandHoldableStatus() {
            static BNM::Field<int> _field = GetClass().GetField(O("leftHandHoldableStatus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion_Climbing::GorillaClimbable* GetLeftHandHoldsPlayer() {
            static BNM::Field<::GorillaLocomotion_Climbing::GorillaClimbable*> _field = GetClass().GetField(O("leftHandHoldsPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TakeMyHand_HandLink* GetLeftHandLink() {
            static BNM::Field<::GlobalNamespace::TakeMyHand_HandLink*> _field = GetClass().GetField(O("leftHandLink"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CrittersLoudNoise* GetLeftHandNoise() {
            static BNM::Field<::GlobalNamespace::CrittersLoudNoise*> _field = GetClass().GetField(O("leftHandNoise"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetLeftHandPlayer() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("leftHandPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetLeftHandTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("leftHandTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::HoldableHand* GetLeftHolds() {
            static BNM::Field<::GlobalNamespace::HoldableHand*> _field = GetClass().GetField(O("leftHolds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRMapIndex* GetLeftIndex() {
            static BNM::Field<::GlobalNamespace::VRMapIndex*> _field = GetClass().GetField(O("leftIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRMapMiddle* GetLeftMiddle() {
            static BNM::Field<::GlobalNamespace::VRMapMiddle*> _field = GetClass().GetField(O("leftMiddle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRMapThumb* GetLeftThumb() {
            static BNM::Field<::GlobalNamespace::VRMapThumb*> _field = GetClass().GetField(O("leftThumb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLerpValueBody() {
            static BNM::Field<float> _field = GetClass().GetField(O("lerpValueBody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLerpValueFingers() {
            static BNM::Field<float> _field = GetClass().GetField(O("lerpValueFingers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLocalGrabOverrideBlend() {
            static BNM::Field<float> _field = GetClass().GetField(O("localGrabOverrideBlend"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLocalGrabOverrideDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("LocalGrabOverrideDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetLocalOverrideGrabbingHand() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("localOverrideGrabbingHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLocalOverrideIsBody() {
            static BNM::Field<bool> _field = GetClass().GetField(O("localOverrideIsBody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLocalOverrideIsLeftHand() {
            static BNM::Field<bool> _field = GetClass().GetField(O("localOverrideIsLeftHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLocalTrajectoryOverrideBlend() {
            static BNM::Field<float> _field = GetClass().GetField(O("LocalTrajectoryOverrideBlend"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLocalTrajectoryOverrideDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("LocalTrajectoryOverrideDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLocalTrajectoryOverridePosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("LocalTrajectoryOverridePosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLocalTrajectoryOverrideVelocity() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("LocalTrajectoryOverrideVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLocalUseReplacementVoice() {
            static BNM::Field<bool> _field = GetClass().GetField(O("localUseReplacementVoice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLoudnessCheckFrame() {
            static BNM::Field<int> _field = GetClass().GetField(O("loudnessCheckFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetMLastSentTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("m_lastSentTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Utilities::NetTimeAverages* GetMNetSyncAverage() {
            static BNM::Field<::Utilities::NetTimeAverages*> _field = GetClass().GetField(O("m_netSyncAverage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetMSentRankedScore() {
            static BNM::Field<bool> _field = GetClass().GetField(O("m_sentRankedScore"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetMainCamera() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("mainCamera"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::SkinnedMeshRenderer* GetMainSkin() {
            static BNM::Field<::SkinnedMeshRenderer*> _field = GetClass().GetField(O("mainSkin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Material*>* GetMaterialsToChangeTo() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Material*>*> _field = GetClass().GetField(O("materialsToChangeTo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::CosmeticsController_CosmeticSet* GetMergedSet() {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticSet*> _field = GetClass().GetField(O("mergedSet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderPiece* GetMountedMonkeBlock() {
            static BNM::Field<::GlobalNamespace::BuilderPiece*> _field = GetClass().GetField(O("mountedMonkeBlock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetMountedMonkeBlockOffset() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("mountedMonkeBlockOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::MovingSurface* GetMountedMovingSurface() {
            static BNM::Field<::GorillaTagScripts::MovingSurface*> _field = GetClass().GetField(O("mountedMovingSurface"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMountedMovingSurfaceId() {
            static BNM::Field<int> _field = GetClass().GetField(O("mountedMovingSurfaceId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetMountedMovingSurfaceIsBody() {
            static BNM::Field<bool> _field = GetClass().GetField(O("mountedMovingSurfaceIsBody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetMountedMovingSurfaceIsLeft() {
            static BNM::Field<bool> _field = GetClass().GetField(O("mountedMovingSurfaceIsLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetMouthPosition() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("MouthPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetMovingSurfaceIsMonkeBlock() {
            static BNM::Field<bool> _field = GetClass().GetField(O("movingSurfaceIsMonkeBlock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetMovingSurfaceWasBody() {
            static BNM::Field<bool> _field = GetClass().GetField(O("movingSurfaceWasBody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetMovingSurfaceWasLeft() {
            static BNM::Field<bool> _field = GetClass().GetField(O("movingSurfaceWasLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetMovingSurfaceWasMonkeBlock() {
            static BNM::Field<bool> _field = GetClass().GetField(O("movingSurfaceWasMonkeBlock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::AudioSource*>* GetMusicDrums() {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioSource*>*> _field = GetClass().GetField(O("musicDrums"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetMuted() {
            static BNM::Field<bool> _field = GetClass().GetField(O("muted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BodyDockPositions* GetMyBodyDockPositions() {
            static BNM::Field<::GlobalNamespace::BodyDockPositions*> _field = GetClass().GetField(O("myBodyDockPositions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaEyeExpressions* GetMyEyeExpressions() {
            static BNM::Field<::GlobalNamespace::GorillaEyeExpressions*> _field = GetClass().GetField(O("myEyeExpressions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaIK* GetMyIk() {
            static BNM::Field<::GlobalNamespace::GorillaIK*> _field = GetClass().GetField(O("myIk"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaMouthFlap* GetMyMouthFlap() {
            static BNM::Field<::GlobalNamespace::GorillaMouthFlap*> _field = GetClass().GetField(O("myMouthFlap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice_PUN::PhotonVoiceView* GetMyPhotonVoiceView() {
            static BNM::Field<::Photon_Voice_PUN::PhotonVoiceView*> _field = GetClass().GetField(O("myPhotonVoiceView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ReplacementVoice* GetMyReplacementVoice() {
            static BNM::Field<::GlobalNamespace::ReplacementVoice*> _field = GetClass().GetField(O("myReplacementVoice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaSpeakerLoudness* GetMySpeakerLoudness() {
            static BNM::Field<::GlobalNamespace::GorillaSpeakerLoudness*> _field = GetClass().GetField(O("mySpeakerLoudness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetNameTagAnchor() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("nameTagAnchor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetNativeScale_f() {
            static BNM::Field<float> _field = GetClass().GetField(O("nativeScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::NetworkVector3* GetNetSyncPos() {
            static BNM::Field<::GlobalNamespace::NetworkVector3*> _field = GetClass().GetField(O("netSyncPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::NetworkView* GetNetView() {
            static BNM::Field<::GlobalNamespace::NetworkView*> _field = GetClass().GetField(O("netView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<>* GetNewPlayerJoined() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("newPlayerJoined"));
            return _field.Get();
        }
        float GetNextLocalVelocityStoreTimestamp() {
            static BNM::Field<float> _field = GetClass().GetField(O("nextLocalVelocityStoreTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::NonCosmeticHandItem* GetNonCosmeticLeftHandItem() {
            static BNM::Field<::GlobalNamespace::NonCosmeticHandItem*> _field = GetClass().GetField(O("nonCosmeticLeftHandItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::NonCosmeticHandItem* GetNonCosmeticRightHandItem() {
            static BNM::Field<::GlobalNamespace::NonCosmeticHandItem*> _field = GetClass().GetField(O("nonCosmeticRightHandItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetNonHauntedVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("nonHauntedVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::BNM::Structures::Unity::Color>* GetOnColorChanged() {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Unity::Color>*> _field = GetClass().GetField(O("OnColorChanged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::BNM::Structures::Unity::Color>* GetOnColorInitialized() {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Unity::Color>*> _field = GetClass().GetField(O("onColorInitialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<>* GetOnDataChange() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnDataChange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<int, int>* GetOnMaterialIndexChanged() {
            static BNM::Field<::BNM::Structures::Mono::Action<int, int>*> _field = GetClass().GetField(O("OnMaterialIndexChanged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::GlobalNamespace::RigContainer*>* GetOnNameChanged() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::RigContainer*>*> _field = GetClass().GetField(O("OnNameChanged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<>* GetOnPlayerNameVisibleChanged() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnPlayerNameVisibleChanged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<int>* GetOnQuestScoreChanged() {
            static BNM::Field<::BNM::Structures::Mono::Action<int>*> _field = GetClass().GetField(O("OnQuestScoreChanged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<int, int>* GetOnRankedSubtierChanged() {
            static BNM::Field<::BNM::Structures::Mono::Action<int, int>*> _field = GetClass().GetField(O("OnRankedSubtierChanged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetOverrideSubscriptionZoneLocation() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("OverrideSubscriptionZoneLocation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::NetPlayer* GetOwningNetPlayer() {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("OwningNetPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::PaintbrawlBalloons* GetPaintbrawlBalloons() {
            static BNM::Field<::GlobalNamespace::PaintbrawlBalloons*> _field = GetClass().GetField(O("paintbrawlBalloons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig_PartyMemberStatus GetPartyMemberStatus() {
            static BNM::Field<::GlobalNamespace::VRRig_PartyMemberStatus> _field = GetClass().GetField(O("partyMemberStatus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPendingCosmeticUpdate() {
            static BNM::Field<bool> _field = GetClass().GetField(O("pendingCosmeticUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPitchOffset() {
            static BNM::Field<float> _field = GetClass().GetField(O("pitchOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPitchScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("pitchScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::VoicePitchShiftCosmetic*>* GetPitchShiftCosmetics() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::VoicePitchShiftCosmetic*>*> _field = GetClass().GetField(O("PitchShiftCosmetics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPitchShiftCosmeticsDirty() {
            static BNM::Field<bool> _field = GetClass().GetField(O("pitchShiftCosmeticsDirty"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetPlayerColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("playerColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPlayerNameVisible() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("playerNameVisible"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetPlayerOffsetTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("playerOffsetTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TextMeshPro* GetPlayerText1() {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("playerText1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPlayerWasHaunted() {
            static BNM::Field<bool> _field = GetClass().GetField(O("playerWasHaunted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPreviousGrabbedRope() {
            static BNM::Field<int> _field = GetClass().GetField(O("previousGrabbedRope"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPreviousGrabbedRopeBoneIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("previousGrabbedRopeBoneIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPreviousGrabbedRopeWasBody() {
            static BNM::Field<bool> _field = GetClass().GetField(O("previousGrabbedRopeWasBody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPreviousGrabbedRopeWasLeft() {
            static BNM::Field<bool> _field = GetClass().GetField(O("previousGrabbedRopeWasLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPrevMovingSurfaceID() {
            static BNM::Field<int> _field = GetClass().GetField(O("prevMovingSurfaceID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::CosmeticsController_CosmeticSet* GetPrevSet() {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticSet*> _field = GetClass().GetField(O("prevSet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ProjectileWeapon* GetProjectileWeapon() {
            static BNM::Field<::GlobalNamespace::ProjectileWeapon*> _field = GetClass().GetField(O("projectileWeapon"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::PropHuntHandFollower* GetPropHuntHandFollower() {
            static BNM::Field<::GlobalNamespace::PropHuntHandFollower*> _field = GetClass().GetField(O("propHuntHandFollower"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetRankedTimerWatch() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("rankedTimerWatch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRatio() {
            static BNM::Field<float> _field = GetClass().GetField(O("ratio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetRawCosmeticString() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("rawCosmeticString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>* GetRayCastNonAllocColliders() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>*> _field = GetClass().GetField(O("rayCastNonAllocColliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRed() {
            static BNM::Field<float> _field = GetClass().GetField(O("red"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRigReliableState* GetReliableState() {
            static BNM::Field<::GlobalNamespace::VRRigReliableState*> _field = GetClass().GetField(O("reliableState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetRemoteCorrectionNeeded() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("remoteCorrectionNeeded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetRemoteLatestTimestamp() {
            static BNM::Field<double> _field = GetClass().GetField(O("remoteLatestTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRemoteUseReplacementVoice() {
            static BNM::Field<bool> _field = GetClass().GetField(O("remoteUseReplacementVoice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetRemoteVelocity() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("remoteVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetRenderTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("renderTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetReplacementVoiceDetectionDelay() {
            static BNM::Field<int> _field = GetClass().GetField(O("replacementVoiceDetectionDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetReplacementVoiceLoudnessThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("replacementVoiceLoudnessThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::RigContainer* GetRigContainer() {
            static BNM::Field<::GlobalNamespace::RigContainer*> _field = GetClass().GetField(O("rigContainer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRMap* GetRightHand() {
            static BNM::Field<::GlobalNamespace::VRMap*> _field = GetClass().GetField(O("rightHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetRightHandGooParticleSystem() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("rightHandGooParticleSystem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRightHandHoldableStatus() {
            static BNM::Field<int> _field = GetClass().GetField(O("rightHandHoldableStatus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion_Climbing::GorillaClimbable* GetRightHandHoldsPlayer() {
            static BNM::Field<::GorillaLocomotion_Climbing::GorillaClimbable*> _field = GetClass().GetField(O("rightHandHoldsPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TakeMyHand_HandLink* GetRightHandLink() {
            static BNM::Field<::GlobalNamespace::TakeMyHand_HandLink*> _field = GetClass().GetField(O("rightHandLink"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CrittersLoudNoise* GetRightHandNoise() {
            static BNM::Field<::GlobalNamespace::CrittersLoudNoise*> _field = GetClass().GetField(O("rightHandNoise"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetRightHandPlayer() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("rightHandPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetRightHandTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("rightHandTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::HoldableHand* GetRightHolds() {
            static BNM::Field<::GlobalNamespace::HoldableHand*> _field = GetClass().GetField(O("rightHolds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRMapIndex* GetRightIndex() {
            static BNM::Field<::GlobalNamespace::VRMapIndex*> _field = GetClass().GetField(O("rightIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRMapMiddle* GetRightMiddle() {
            static BNM::Field<::GlobalNamespace::VRMapMiddle*> _field = GetClass().GetField(O("rightMiddle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRMapThumb* GetRightThumb() {
            static BNM::Field<::GlobalNamespace::VRMapThumb*> _field = GetClass().GetField(O("rightThumb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRigSerializer* GetRigSerializer() {
            static BNM::Field<::GlobalNamespace::VRRigSerializer*> _field = GetClass().GetField(O("rigSerializer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetRockParticleSystem() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("rockParticleSystem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetScaleMultiplier_f() {
            static BNM::Field<float> _field = GetClass().GetField(O("scaleMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetScoreboardMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("scoreboardMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSDKIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("SDKIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetSenderRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("senderRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSetMatIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("setMatIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::FXSystemSettings* GetSharedFXSettings() {
            static BNM::Field<::GlobalNamespace::FXSystemSettings*> _field = GetClass().GetField(O("sharedFXSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetShouldLerpToMovingSurface() {
            static BNM::Field<bool> _field = GetClass().GetField(O("shouldLerpToMovingSurface"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetShouldLerpToRope() {
            static BNM::Field<bool> _field = GetClass().GetField(O("shouldLerpToRope"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetShouldSendSpeakingLoudness() {
            static BNM::Field<bool> _field = GetClass().GetField(O("shouldSendSpeakingLoudness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetShowGoldNameTag_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("showGoldNameTag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetShowName() {
            static BNM::Field<bool> _field = GetClass().GetField(O("showName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SizeManager* GetSizeManager() {
            static BNM::Field<::GlobalNamespace::SizeManager*> _field = GetClass().GetField(O("sizeManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::XRaySkeleton* GetSkeleton() {
            static BNM::Field<::GlobalNamespace::XRaySkeleton*> _field = GetClass().GetField(O("skeleton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetSnowFlakeParticleSystem() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("snowFlakeParticleSystem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSpeakingLoudness_f() {
            static BNM::Field<float> _field = GetClass().GetField(O("speakingLoudness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CrittersLoudNoise* GetSpeakingNoise() {
            static BNM::Field<::GlobalNamespace::CrittersLoudNoise*> _field = GetClass().GetField(O("speakingNoise"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetSpectatorSkin() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("spectatorSkin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<float>* GetSpeedArray() {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("speedArray"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<float>* GetSplashEffectTimes() {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("splashEffectTimes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::GorillaAmbushManager* GetStealthManager() {
            static BNM::Field<::GorillaTagScripts::GorillaAmbushManager*> _field = GetClass().GetField(O("stealthManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStealthTimer() {
            static BNM::Field<float> _field = GetClass().GetField(O("stealthTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::SubscriptionManager_SubscriptionDetails GetSubDataCache() {
            static BNM::Field<::GorillaTagScripts::SubscriptionManager_SubscriptionDetails> _field = GetClass().GetField(O("subDataCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SuperInfectionHandDisplay* GetSuperInfectionHand() {
            static BNM::Field<::GlobalNamespace::SuperInfectionHandDisplay*> _field = GetClass().GetField(O("superInfectionHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetSyncRotation() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("syncRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTaggedById() {
            static BNM::Field<int> _field = GetClass().GetField(O("taggedById"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetTagSound() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("tagSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTapPointDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("tapPointDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTempInt() {
            static BNM::Field<int> _field = GetClass().GetField(O("tempInt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::CosmeticsController_CosmeticItem GetTempItem() {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticItem> _field = GetClass().GetField(O("tempItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTempItemCost() {
            static BNM::Field<int> _field = GetClass().GetField(O("tempItemCost"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetTempItemId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("tempItemId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetTempItemName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("tempItemName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GorillaTag_Cosmetics::CosmeticEffectsOnPlayers_EFFECTTYPE, ::GorillaTag_Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>* GetTemporaryCosmeticEffects() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GorillaTag_Cosmetics::CosmeticEffectsOnPlayers_EFFECTTYPE, ::GorillaTag_Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>*> _field = GetClass().GetField(O("TemporaryCosmeticEffects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Realtime::Player* GetTempPlayer() {
            static BNM::Field<::Photon_Realtime::Player*> _field = GetClass().GetField(O("tempPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetTempQuat() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("tempQuat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetTempString() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("tempString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetTempVec() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("tempVec"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetTempVRRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("tempVRRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeSpawned() {
            static BNM::Field<float> _field = GetClass().GetField(O("timeSpawned"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::CosmeticsController_CosmeticSet* GetTryOnSet() {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticSet*> _field = GetClass().GetField(O("tryOnSet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTurnFactor() {
            static BNM::Field<int> _field = GetClass().GetField(O("turnFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTurningCompInitialized() {
            static BNM::Field<bool> _field = GetClass().GetField(O("turningCompInitialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetTurnType() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("turnType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CallLimiter* GetUpdateQuestCallLimit() {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("updateQuestCallLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CallLimiter* GetUpdateRankedInfoCallLimit() {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("updateRankedInfoCallLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUsingHauntedRing() {
            static BNM::Field<bool> _field = GetClass().GetField(O("UsingHauntedRing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetVelocityHistoryMaxLength() {
            static BNM::Field<int> _field = GetClass().GetField(O("velocityHistoryMaxLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetVoiceAudio() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("voiceAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetVoicePitchForRelativeScale() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("voicePitchForRelativeScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<float>* GetVoiceSampleBuffer() {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("voiceSampleBuffer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetVStumpReturnWatch() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("vStumpReturnWatch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::GlobalNamespace::GTBitOps_BitWriteInfo>* GetWearablePackedStatesBitWriteInfos() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GTBitOps_BitWriteInfo>*> _field = GetClass().GetField(O("WearablePackedStatesBitWriteInfos"));
            return _field.Get();
        }
        ::GlobalNamespace::ZoneEntityBSP* GetZoneEntity() {
            static BNM::Field<::GlobalNamespace::ZoneEntityBSP*> _field = GetClass().GetField(O("zoneEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCosmetics_fs(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("_cosmetics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExtraLeftHandEffect(::GlobalNamespace::HandEffectContext* value) {
            static BNM::Field<::GlobalNamespace::HandEffectContext*> _field = GetClass().GetField(O("_extraLeftHandEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExtraRightHandEffect(::GlobalNamespace::HandEffectContext* value) {
            static BNM::Field<::GlobalNamespace::HandEffectContext*> _field = GetClass().GetField(O("_extraRightHandEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGamePlayerRef(::GlobalNamespace::GamePlayer* value) {
            static BNM::Field<::GlobalNamespace::GamePlayer*> _field = GetClass().GetField(O("_gamePlayerRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsListeningForOnPostInstantiateAllPrefabs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isListeningFor_OnPostInstantiateAllPrefabs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftHandEffect(::GlobalNamespace::HandEffectContext* value) {
            static BNM::Field<::GlobalNamespace::HandEffectContext*> _field = GetClass().GetField(O("_leftHandEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextUpdateTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_nextUpdateTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverrideCosmetics_fs(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("_overrideCosmetics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRankedInfoUpdated(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_rankedInfoUpdated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRigBuildFullyInitialized(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_rigBuildFullyInitialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightHandEffect(::GlobalNamespace::HandEffectContext* value) {
            static BNM::Field<::GlobalNamespace::HandEffectContext*> _field = GetClass().GetField(O("_rightHandEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScoreUpdated(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_scoreUpdated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAudioDesc(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("audioDesc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBackpack(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("backpack"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBlue(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("blue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBodyHolds(::GlobalNamespace::HoldableHand* value) {
            static BNM::Field<::GlobalNamespace::HoldableHand*> _field = GetClass().GetField(O("bodyHolds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBodyRenderer(::GlobalNamespace::GorillaBodyRenderer* value) {
            static BNM::Field<::GlobalNamespace::GorillaBodyRenderer*> _field = GetClass().GetField(O("bodyRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBodyTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("bodyTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBonkCooldown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("bonkCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBonkTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("bonkTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBuilderArmShelfLeft(::GlobalNamespace::BuilderArmShelf* value) {
            static BNM::Field<::GlobalNamespace::BuilderArmShelf*> _field = GetClass().GetField(O("builderArmShelfLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBuilderArmShelfRight(::GlobalNamespace::BuilderArmShelf* value) {
            static BNM::Field<::GlobalNamespace::BuilderArmShelf*> _field = GetClass().GetField(O("builderArmShelfRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBuilderResizeWatch(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("builderResizeWatch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCachedRenderTransformPos(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("cachedRenderTransformPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCanReport(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("canReport"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetClipToPlay(::BNM::Structures::Mono::Array<::AudioClip*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioClip*>*> _field = GetClass().GetField(O("clipToPlay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetColorInitialized(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("colorInitialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCosmeticEffectPack(::TagEffects::TagEffectPack* value) {
            static BNM::Field<::TagEffects::TagEffectPack*> _field = GetClass().GetField(O("CosmeticEffectPack"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCosmeticHandEffectsOverrideLeft(::BNM::Structures::Mono::List<::GlobalNamespace::HandEffectsOverrideCosmetic*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::HandEffectsOverrideCosmetic*>*> _field = GetClass().GetField(O("CosmeticHandEffectsOverride_Left"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCosmeticHandEffectsOverrideRight(::BNM::Structures::Mono::List<::GlobalNamespace::HandEffectsOverrideCosmetic*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::HandEffectsOverrideCosmetic*>*> _field = GetClass().GetField(O("CosmeticHandEffectsOverride_Right"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCosmeticPitchShift(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("cosmeticPitchShift"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCosmeticRetries(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("cosmeticRetries"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCosmeticsActivationPS(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("cosmeticsActivationPS"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCosmeticsActivationSBP(::GlobalNamespace::SoundBankPlayer* value) {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("cosmeticsActivationSBP"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCosmeticSet(::GorillaNetworking::CosmeticsController_CosmeticSet* value) {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticSet*> _field = GetClass().GetField(O("cosmeticSet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCosmeticsObjectRegistry(::GorillaNetworking::CosmeticItemRegistry* value) {
            static BNM::Field<::GorillaNetworking::CosmeticItemRegistry*> _field = GetClass().GetField(O("cosmeticsObjectRegistry"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCreator(::GlobalNamespace::NetPlayer* value) {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("creator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentCosmeticTries(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentCosmeticTries"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentHoldParent(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("currentHoldParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentMicWrapper(::Photon_Voice_Unity::MicWrapper* value) {
            static BNM::Field<::Photon_Voice_Unity::MicWrapper*> _field = GetClass().GetField(O("currentMicWrapper"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentQuestScore(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentQuestScore"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentRankedELO(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("currentRankedELO"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentRankedSubTierPC(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentRankedSubTierPC"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentRankedSubTierQuest(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentRankedSubTierQuest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentRopeSwing(::GorillaLocomotion_Gameplay::GorillaRopeSwing* value) {
            static BNM::Field<::GorillaLocomotion_Gameplay::GorillaRopeSwing*> _field = GetClass().GetField(O("currentRopeSwing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentRopeSwingTarget(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("currentRopeSwingTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultSkin(::GlobalNamespace::GorillaSkin* value) {
            static BNM::Field<::GlobalNamespace::GorillaSkin*> _field = GetClass().GetField(O("defaultSkin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDoNotLerpConstant(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("doNotLerpConstant"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDuplicationZone(::GlobalNamespace::RigDuplicationZone* value) {
            static BNM::Field<::GlobalNamespace::RigDuplicationZone*> _field = GetClass().GetField(O("duplicationZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFaceSkin(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("faceSkin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFps(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("fps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFPVEffectsParent(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("FPVEffectsParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFrameScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("frameScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFriendshipBraceletLeftHand(::GorillaNetworking::FriendshipBracelet* value) {
            static BNM::Field<::GorillaNetworking::FriendshipBracelet*> _field = GetClass().GetField(O("friendshipBraceletLeftHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFriendshipBraceletRightHand(::GorillaNetworking::FriendshipBracelet* value) {
            static BNM::Field<::GorillaNetworking::FriendshipBracelet*> _field = GetClass().GetField(O("friendshipBraceletRightHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFrozenEffect(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("frozenEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFrozenEffectMaxHorizontalScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("frozenEffectMaxHorizontalScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFrozenEffectMaxY(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("frozenEffectMaxY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFrozenEffectMinHorizontalScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("frozenEffectMinHorizontalScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFrozenEffectMinY(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("frozenEffectMinY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFrozenTimeElapsed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("frozenTimeElapsed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFxSettings(::GlobalNamespace::FXSystemSettings* value) {
            static BNM::Field<::GlobalNamespace::FXSystemSettings*> _field = GetClass().GetField(O("fxSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGeodeCrackingSound(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("geodeCrackingSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetGLocalRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("gLocalRig"));
            _field.Set(value);
        }
        void SetGorillaSnapTurningComp(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("GorillaSnapTurningComp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabbedRopeBoneIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("grabbedRopeBoneIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabbedRopeIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("grabbedRopeIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabbedRopeIsBody(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("grabbedRopeIsBody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabbedRopeIsLeft(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("grabbedRopeIsLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabbedRopeIsPhotonView(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("grabbedRopeIsPhotonView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabbedRopeOffset(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("grabbedRopeOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGreen(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("green"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGuardianEjectWatch(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("guardianEjectWatch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandLerpValues(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("handLerpValues"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandSpeedToVolumeModifier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("handSpeedToVolumeModifier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandSync(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("handSync"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandTapSound(::BNM::Structures::Mono::Array<::AudioClip*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioClip*>*> _field = GetClass().GetField(O("handTapSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHauntedHearingVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("HauntedHearingVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHauntedRingVoicePitch(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("HauntedRingVoicePitch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHauntedVoicePitch(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("HauntedVoicePitch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHead(::GlobalNamespace::VRMap* value) {
            static BNM::Field<::GlobalNamespace::VRMap*> _field = GetClass().GetField(O("head"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeadBodyOffset(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("headBodyOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeadConstraint(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("headConstraint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeadMesh(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("headMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoverboardEnabledCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("hoverboardEnabledCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoverboardVisual(::GlobalNamespace::HoverboardVisual* value) {
            static BNM::Field<::GlobalNamespace::HoverboardVisual*> _field = GetClass().GetField(O("hoverboardVisual"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHuntComputer(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("huntComputer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIceCubeLeft(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("iceCubeLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIceCubeRight(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("iceCubeRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIceParticleSystem(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("iceParticleSystem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInDuplicationZone(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("inDuplicationZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInitialized(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("initialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInitializedCosmetics_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("initializedCosmetics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInOverrideSubscriptionZone(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("InOverrideSubscriptionZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInstrumentSelfOnly(::BNM::Structures::Mono::List<::GlobalNamespace::TransferrableObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::TransferrableObject*>*> _field = GetClass().GetField(O("instrumentSelfOnly"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInTempCosmSpace(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("inTempCosmSpace"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInTryOnRoom(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("inTryOnRoom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsHaunted(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("IsHaunted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsInitialized(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isInitialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsInvisibleToLocalPlayer(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("IsInvisibleToLocalPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsMyPlayer(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isMyPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsOfflineVRRig(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isOfflineVRRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJobPos(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("jobPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJobRotation(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("jobRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastMountedSurfaceTimer(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastMountedSurfaceTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastRopeGrabTimer(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastRopeGrabTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastScaleFactor(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastScaleFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLavaParticleSystem(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("lavaParticleSystem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLayerChanger(::GorillaTagScripts::LayerChanger* value) {
            static BNM::Field<::GorillaTagScripts::LayerChanger*> _field = GetClass().GetField(O("layerChanger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftHand(::GlobalNamespace::VRMap* value) {
            static BNM::Field<::GlobalNamespace::VRMap*> _field = GetClass().GetField(O("leftHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftHandGooParticleSystem(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("leftHandGooParticleSystem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftHandHoldableStatus(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("leftHandHoldableStatus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftHandHoldsPlayer(::GorillaLocomotion_Climbing::GorillaClimbable* value) {
            static BNM::Field<::GorillaLocomotion_Climbing::GorillaClimbable*> _field = GetClass().GetField(O("leftHandHoldsPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftHandLink(::GlobalNamespace::TakeMyHand_HandLink* value) {
            static BNM::Field<::GlobalNamespace::TakeMyHand_HandLink*> _field = GetClass().GetField(O("leftHandLink"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftHandNoise(::GlobalNamespace::CrittersLoudNoise* value) {
            static BNM::Field<::GlobalNamespace::CrittersLoudNoise*> _field = GetClass().GetField(O("leftHandNoise"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftHandPlayer(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("leftHandPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftHandTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("leftHandTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftHolds(::GlobalNamespace::HoldableHand* value) {
            static BNM::Field<::GlobalNamespace::HoldableHand*> _field = GetClass().GetField(O("leftHolds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftIndex(::GlobalNamespace::VRMapIndex* value) {
            static BNM::Field<::GlobalNamespace::VRMapIndex*> _field = GetClass().GetField(O("leftIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftMiddle(::GlobalNamespace::VRMapMiddle* value) {
            static BNM::Field<::GlobalNamespace::VRMapMiddle*> _field = GetClass().GetField(O("leftMiddle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftThumb(::GlobalNamespace::VRMapThumb* value) {
            static BNM::Field<::GlobalNamespace::VRMapThumb*> _field = GetClass().GetField(O("leftThumb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLerpValueBody(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lerpValueBody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLerpValueFingers(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lerpValueFingers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalGrabOverrideBlend(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("localGrabOverrideBlend"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalGrabOverrideDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("LocalGrabOverrideDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalOverrideGrabbingHand(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("localOverrideGrabbingHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalOverrideIsBody(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("localOverrideIsBody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalOverrideIsLeftHand(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("localOverrideIsLeftHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalTrajectoryOverrideBlend(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("LocalTrajectoryOverrideBlend"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalTrajectoryOverrideDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("LocalTrajectoryOverrideDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalTrajectoryOverridePosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("LocalTrajectoryOverridePosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalTrajectoryOverrideVelocity(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("LocalTrajectoryOverrideVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalUseReplacementVoice(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("localUseReplacementVoice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoudnessCheckFrame(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("loudnessCheckFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMLastSentTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("m_lastSentTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMNetSyncAverage(::Utilities::NetTimeAverages* value) {
            static BNM::Field<::Utilities::NetTimeAverages*> _field = GetClass().GetField(O("m_netSyncAverage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMSentRankedScore(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("m_sentRankedScore"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMainCamera(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("mainCamera"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMainSkin(::SkinnedMeshRenderer* value) {
            static BNM::Field<::SkinnedMeshRenderer*> _field = GetClass().GetField(O("mainSkin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaterialsToChangeTo(::BNM::Structures::Mono::Array<::Material*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Material*>*> _field = GetClass().GetField(O("materialsToChangeTo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMergedSet(::GorillaNetworking::CosmeticsController_CosmeticSet* value) {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticSet*> _field = GetClass().GetField(O("mergedSet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMountedMonkeBlock(::GlobalNamespace::BuilderPiece* value) {
            static BNM::Field<::GlobalNamespace::BuilderPiece*> _field = GetClass().GetField(O("mountedMonkeBlock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMountedMonkeBlockOffset(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("mountedMonkeBlockOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMountedMovingSurface(::GorillaTagScripts::MovingSurface* value) {
            static BNM::Field<::GorillaTagScripts::MovingSurface*> _field = GetClass().GetField(O("mountedMovingSurface"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMountedMovingSurfaceId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("mountedMovingSurfaceId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMountedMovingSurfaceIsBody(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("mountedMovingSurfaceIsBody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMountedMovingSurfaceIsLeft(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("mountedMovingSurfaceIsLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMouthPosition(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("MouthPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMovingSurfaceIsMonkeBlock(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("movingSurfaceIsMonkeBlock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMovingSurfaceWasBody(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("movingSurfaceWasBody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMovingSurfaceWasLeft(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("movingSurfaceWasLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMovingSurfaceWasMonkeBlock(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("movingSurfaceWasMonkeBlock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMusicDrums(::BNM::Structures::Mono::Array<::AudioSource*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioSource*>*> _field = GetClass().GetField(O("musicDrums"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMuted(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("muted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMyBodyDockPositions(::GlobalNamespace::BodyDockPositions* value) {
            static BNM::Field<::GlobalNamespace::BodyDockPositions*> _field = GetClass().GetField(O("myBodyDockPositions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMyEyeExpressions(::GlobalNamespace::GorillaEyeExpressions* value) {
            static BNM::Field<::GlobalNamespace::GorillaEyeExpressions*> _field = GetClass().GetField(O("myEyeExpressions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMyIk(::GlobalNamespace::GorillaIK* value) {
            static BNM::Field<::GlobalNamespace::GorillaIK*> _field = GetClass().GetField(O("myIk"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMyMouthFlap(::GlobalNamespace::GorillaMouthFlap* value) {
            static BNM::Field<::GlobalNamespace::GorillaMouthFlap*> _field = GetClass().GetField(O("myMouthFlap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMyPhotonVoiceView(::Photon_Voice_PUN::PhotonVoiceView* value) {
            static BNM::Field<::Photon_Voice_PUN::PhotonVoiceView*> _field = GetClass().GetField(O("myPhotonVoiceView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMyReplacementVoice(::GlobalNamespace::ReplacementVoice* value) {
            static BNM::Field<::GlobalNamespace::ReplacementVoice*> _field = GetClass().GetField(O("myReplacementVoice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMySpeakerLoudness(::GlobalNamespace::GorillaSpeakerLoudness* value) {
            static BNM::Field<::GlobalNamespace::GorillaSpeakerLoudness*> _field = GetClass().GetField(O("mySpeakerLoudness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNameTagAnchor(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("nameTagAnchor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNativeScale_fs(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("nativeScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNetSyncPos(::GlobalNamespace::NetworkVector3* value) {
            static BNM::Field<::GlobalNamespace::NetworkVector3*> _field = GetClass().GetField(O("netSyncPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNetView(::GlobalNamespace::NetworkView* value) {
            static BNM::Field<::GlobalNamespace::NetworkView*> _field = GetClass().GetField(O("netView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetNewPlayerJoined(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("newPlayerJoined"));
            _field.Set(value);
        }
        void SetNextLocalVelocityStoreTimestamp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("nextLocalVelocityStoreTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNonCosmeticLeftHandItem(::GlobalNamespace::NonCosmeticHandItem* value) {
            static BNM::Field<::GlobalNamespace::NonCosmeticHandItem*> _field = GetClass().GetField(O("nonCosmeticLeftHandItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNonCosmeticRightHandItem(::GlobalNamespace::NonCosmeticHandItem* value) {
            static BNM::Field<::GlobalNamespace::NonCosmeticHandItem*> _field = GetClass().GetField(O("nonCosmeticRightHandItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNonHauntedVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("nonHauntedVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnColorChanged(::BNM::Structures::Mono::Action<::BNM::Structures::Unity::Color>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Unity::Color>*> _field = GetClass().GetField(O("OnColorChanged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnColorInitialized(::BNM::Structures::Mono::Action<::BNM::Structures::Unity::Color>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Unity::Color>*> _field = GetClass().GetField(O("onColorInitialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnDataChange(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnDataChange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnMaterialIndexChanged(::BNM::Structures::Mono::Action<int, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<int, int>*> _field = GetClass().GetField(O("OnMaterialIndexChanged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnNameChanged(::BNM::Structures::Mono::Action<::GlobalNamespace::RigContainer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::RigContainer*>*> _field = GetClass().GetField(O("OnNameChanged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnPlayerNameVisibleChanged(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnPlayerNameVisibleChanged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnQuestScoreChanged(::BNM::Structures::Mono::Action<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<int>*> _field = GetClass().GetField(O("OnQuestScoreChanged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnRankedSubtierChanged(::BNM::Structures::Mono::Action<int, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<int, int>*> _field = GetClass().GetField(O("OnRankedSubtierChanged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverrideSubscriptionZoneLocation(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("OverrideSubscriptionZoneLocation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOwningNetPlayer(::GlobalNamespace::NetPlayer* value) {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("OwningNetPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPaintbrawlBalloons(::GlobalNamespace::PaintbrawlBalloons* value) {
            static BNM::Field<::GlobalNamespace::PaintbrawlBalloons*> _field = GetClass().GetField(O("paintbrawlBalloons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPartyMemberStatus(::GlobalNamespace::VRRig_PartyMemberStatus value) {
            static BNM::Field<::GlobalNamespace::VRRig_PartyMemberStatus> _field = GetClass().GetField(O("partyMemberStatus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPendingCosmeticUpdate(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("pendingCosmeticUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPitchOffset(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("pitchOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPitchScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("pitchScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPitchShiftCosmetics(::BNM::Structures::Mono::List<::GlobalNamespace::VoicePitchShiftCosmetic*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::VoicePitchShiftCosmetic*>*> _field = GetClass().GetField(O("PitchShiftCosmetics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPitchShiftCosmeticsDirty(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("pitchShiftCosmeticsDirty"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("playerColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerNameVisible(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("playerNameVisible"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerOffsetTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("playerOffsetTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerText1(::TextMeshPro* value) {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("playerText1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerWasHaunted(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("playerWasHaunted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPreviousGrabbedRope(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("previousGrabbedRope"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPreviousGrabbedRopeBoneIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("previousGrabbedRopeBoneIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPreviousGrabbedRopeWasBody(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("previousGrabbedRopeWasBody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPreviousGrabbedRopeWasLeft(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("previousGrabbedRopeWasLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrevMovingSurfaceID(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("prevMovingSurfaceID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrevSet(::GorillaNetworking::CosmeticsController_CosmeticSet* value) {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticSet*> _field = GetClass().GetField(O("prevSet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProjectileWeapon(::GlobalNamespace::ProjectileWeapon* value) {
            static BNM::Field<::GlobalNamespace::ProjectileWeapon*> _field = GetClass().GetField(O("projectileWeapon"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPropHuntHandFollower(::GlobalNamespace::PropHuntHandFollower* value) {
            static BNM::Field<::GlobalNamespace::PropHuntHandFollower*> _field = GetClass().GetField(O("propHuntHandFollower"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRankedTimerWatch(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("rankedTimerWatch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRatio(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("ratio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRawCosmeticString(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("rawCosmeticString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRayCastNonAllocColliders(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>*> _field = GetClass().GetField(O("rayCastNonAllocColliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("red"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReliableState(::GlobalNamespace::VRRigReliableState* value) {
            static BNM::Field<::GlobalNamespace::VRRigReliableState*> _field = GetClass().GetField(O("reliableState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRemoteCorrectionNeeded(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("remoteCorrectionNeeded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRemoteLatestTimestamp(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("remoteLatestTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRemoteUseReplacementVoice(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("remoteUseReplacementVoice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRemoteVelocity(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("remoteVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRenderTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("renderTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReplacementVoiceDetectionDelay(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("replacementVoiceDetectionDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReplacementVoiceLoudnessThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("replacementVoiceLoudnessThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRigContainer(::GlobalNamespace::RigContainer* value) {
            static BNM::Field<::GlobalNamespace::RigContainer*> _field = GetClass().GetField(O("rigContainer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightHand(::GlobalNamespace::VRMap* value) {
            static BNM::Field<::GlobalNamespace::VRMap*> _field = GetClass().GetField(O("rightHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightHandGooParticleSystem(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("rightHandGooParticleSystem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightHandHoldableStatus(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("rightHandHoldableStatus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightHandHoldsPlayer(::GorillaLocomotion_Climbing::GorillaClimbable* value) {
            static BNM::Field<::GorillaLocomotion_Climbing::GorillaClimbable*> _field = GetClass().GetField(O("rightHandHoldsPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightHandLink(::GlobalNamespace::TakeMyHand_HandLink* value) {
            static BNM::Field<::GlobalNamespace::TakeMyHand_HandLink*> _field = GetClass().GetField(O("rightHandLink"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightHandNoise(::GlobalNamespace::CrittersLoudNoise* value) {
            static BNM::Field<::GlobalNamespace::CrittersLoudNoise*> _field = GetClass().GetField(O("rightHandNoise"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightHandPlayer(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("rightHandPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightHandTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("rightHandTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightHolds(::GlobalNamespace::HoldableHand* value) {
            static BNM::Field<::GlobalNamespace::HoldableHand*> _field = GetClass().GetField(O("rightHolds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightIndex(::GlobalNamespace::VRMapIndex* value) {
            static BNM::Field<::GlobalNamespace::VRMapIndex*> _field = GetClass().GetField(O("rightIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightMiddle(::GlobalNamespace::VRMapMiddle* value) {
            static BNM::Field<::GlobalNamespace::VRMapMiddle*> _field = GetClass().GetField(O("rightMiddle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightThumb(::GlobalNamespace::VRMapThumb* value) {
            static BNM::Field<::GlobalNamespace::VRMapThumb*> _field = GetClass().GetField(O("rightThumb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRigSerializer(::GlobalNamespace::VRRigSerializer* value) {
            static BNM::Field<::GlobalNamespace::VRRigSerializer*> _field = GetClass().GetField(O("rigSerializer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRockParticleSystem(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("rockParticleSystem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScaleMultiplier_fs(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("scaleMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScoreboardMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("scoreboardMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSDKIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("SDKIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSenderRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("senderRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSetMatIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("setMatIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSharedFXSettings(::GlobalNamespace::FXSystemSettings* value) {
            static BNM::Field<::GlobalNamespace::FXSystemSettings*> _field = GetClass().GetField(O("sharedFXSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShouldLerpToMovingSurface(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("shouldLerpToMovingSurface"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShouldLerpToRope(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("shouldLerpToRope"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShouldSendSpeakingLoudness(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("shouldSendSpeakingLoudness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShowGoldNameTag_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("showGoldNameTag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShowName(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("showName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSizeManager(::GlobalNamespace::SizeManager* value) {
            static BNM::Field<::GlobalNamespace::SizeManager*> _field = GetClass().GetField(O("sizeManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSkeleton(::GlobalNamespace::XRaySkeleton* value) {
            static BNM::Field<::GlobalNamespace::XRaySkeleton*> _field = GetClass().GetField(O("skeleton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSnowFlakeParticleSystem(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("snowFlakeParticleSystem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpeakingLoudness_fs(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("speakingLoudness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpeakingNoise(::GlobalNamespace::CrittersLoudNoise* value) {
            static BNM::Field<::GlobalNamespace::CrittersLoudNoise*> _field = GetClass().GetField(O("speakingNoise"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpectatorSkin(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("spectatorSkin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpeedArray(::BNM::Structures::Mono::Array<float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("speedArray"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSplashEffectTimes(::BNM::Structures::Mono::Array<float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("splashEffectTimes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStealthManager(::GorillaTagScripts::GorillaAmbushManager* value) {
            static BNM::Field<::GorillaTagScripts::GorillaAmbushManager*> _field = GetClass().GetField(O("stealthManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStealthTimer(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("stealthTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubDataCache(::GorillaTagScripts::SubscriptionManager_SubscriptionDetails value) {
            static BNM::Field<::GorillaTagScripts::SubscriptionManager_SubscriptionDetails> _field = GetClass().GetField(O("subDataCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSuperInfectionHand(::GlobalNamespace::SuperInfectionHandDisplay* value) {
            static BNM::Field<::GlobalNamespace::SuperInfectionHandDisplay*> _field = GetClass().GetField(O("superInfectionHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSyncRotation(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("syncRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTaggedById(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("taggedById"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTagSound(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("tagSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTapPointDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("tapPointDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTempInt(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("tempInt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTempItem(::GorillaNetworking::CosmeticsController_CosmeticItem value) {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticItem> _field = GetClass().GetField(O("tempItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTempItemCost(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("tempItemCost"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTempItemId(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("tempItemId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTempItemName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("tempItemName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTemporaryCosmeticEffects(::BNM::Structures::Mono::Dictionary<::GorillaTag_Cosmetics::CosmeticEffectsOnPlayers_EFFECTTYPE, ::GorillaTag_Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GorillaTag_Cosmetics::CosmeticEffectsOnPlayers_EFFECTTYPE, ::GorillaTag_Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>*> _field = GetClass().GetField(O("TemporaryCosmeticEffects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTempPlayer(::Photon_Realtime::Player* value) {
            static BNM::Field<::Photon_Realtime::Player*> _field = GetClass().GetField(O("tempPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTempQuat(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("tempQuat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTempString(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("tempString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTempVec(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("tempVec"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTempVRRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("tempVRRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeSpawned(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timeSpawned"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTryOnSet(::GorillaNetworking::CosmeticsController_CosmeticSet* value) {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticSet*> _field = GetClass().GetField(O("tryOnSet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTurnFactor(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("turnFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTurningCompInitialized(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("turningCompInitialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTurnType(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("turnType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpdateQuestCallLimit(::GlobalNamespace::CallLimiter* value) {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("updateQuestCallLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpdateRankedInfoCallLimit(::GlobalNamespace::CallLimiter* value) {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("updateRankedInfoCallLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUsingHauntedRing(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("UsingHauntedRing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVelocityHistoryMaxLength(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("velocityHistoryMaxLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoiceAudio(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("voiceAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoicePitchForRelativeScale(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("voicePitchForRelativeScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoiceSampleBuffer(::BNM::Structures::Mono::Array<float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("voiceSampleBuffer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVStumpReturnWatch(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("vStumpReturnWatch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZoneEntity(::GlobalNamespace::ZoneEntityBSP* value) {
            static BNM::Field<::GlobalNamespace::ZoneEntityBSP*> _field = GetClass().GetField(O("zoneEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        template <typename TP0 = void*>
        void ActivateVOEffect(TP0 effect) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ActivateVOEffect"), {"effect"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(effect);
        }
        int ActiveTransferrableObjectIndex(int idx) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ActiveTransferrableObjectIndex"), {"idx"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(idx);
        }
        int ActiveTransferrableObjectIndexLength() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ActiveTransferrableObjectIndexLength"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void add_OnColorChanged_1(::BNM::Structures::Mono::Action<::BNM::Structures::Unity::Color>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnColorChanged"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_OnDataChange_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnDataChange"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_OnPlayerNameVisibleChanged_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnPlayerNameVisibleChanged"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_OnQuestScoreChanged_1(::BNM::Structures::Mono::Action<int>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnQuestScoreChanged"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_OnRankedSubtierChanged_1(::BNM::Structures::Mono::Action<int, int>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnRankedSubtierChanged"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void AddCosmetic(::BNM::Structures::Mono::String* cosmeticId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddCosmetic"), {"cosmeticId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(cosmeticId);
        }
        template <typename TP0 = void*>
        void AddLateUpdateCallback(TP0 action) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddLateUpdateCallback"), {"action"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(action);
        }
        void AddVelocityToQueue(::BNM::Structures::Unity::Vector3 position, double serverTime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddVelocityToQueue"), {"position", "serverTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(position, serverTime);
        }
        void ApplyColorCode() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyColorCode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP0 = void*>
        void ApplyInstanceKnockBack(TP0 effect) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyInstanceKnockBack"), {"effect"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(effect);
        }
        void ApplyLocalGrabOverride(bool isBody, bool isLeftHand, ::Transform* grabbingHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyLocalGrabOverride"), {"isBody", "isLeftHand", "grabbingHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isBody, isLeftHand, grabbingHand);
        }
        void ApplyLocalTrajectoryOverride(::BNM::Structures::Unity::Vector3 overrideVelocity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyLocalTrajectoryOverride"), {"overrideVelocity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(overrideVelocity);
        }
        void AssignDrumToMusicDrums(int drumIndex, ::AudioSource* drum) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AssignDrumToMusicDrums"), {"drumIndex", "drum"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(drumIndex, drum);
        }
        int AssignInstrumentToInstrumentSelfOnly(::GlobalNamespace::TransferrableObject* instrument) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("AssignInstrumentToInstrumentSelfOnly"), {"instrument"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(instrument);
        }
        static void AttachLocalPlayerToMovingSurface(int blockId, bool isLeft, bool isBody, ::BNM::Structures::Unity::Vector3 offset, bool isMonkeBlock) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AttachLocalPlayerToMovingSurface"), {"blockId", "isLeft", "isBody", "offset", "isMonkeBlock"});
            _m.Call(blockId, isLeft, isBody, offset, isMonkeBlock);
        }
        template <typename TP1 = void*>
        static void AttachLocalPlayerToPhotonView(::Photon_Pun::PhotonView* view, TP1 xrNode, ::BNM::Structures::Unity::Vector3 offset, ::BNM::Structures::Unity::Vector3 velocity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AttachLocalPlayerToPhotonView"), {"view", "xrNode", "offset", "velocity"});
            _m.Call(view, xrNode, offset, velocity);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void BreakHandLinks() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BreakHandLinks"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void* buildEntries() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("buildEntries"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void BuildInitialize() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BuildInitialize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void BuildInitialize_AfterCosmeticsV2Instantiated() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BuildInitialize_AfterCosmeticsV2Instantiated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ChangeLayer(::BNM::Structures::Mono::String* layerName) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ChangeLayer"), {"layerName"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(layerName);
        }
        void ChangeMaterial(int materialIndex, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ChangeMaterial"), {"materialIndex", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(materialIndex, info);
        }
        void ChangeMaterialLocal(int materialIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ChangeMaterialLocal"), {"materialIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(materialIndex);
        }
        void CheckForEarlyAccess() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckForEarlyAccess"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool CheckTagDistanceRollback(::GlobalNamespace::VRRig* otherRig, float max, float timeInterval) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckTagDistanceRollback"), {"otherRig", "max", "timeInterval"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(otherRig, max, timeInterval);
        }
        ::BNM::Structures::Unity::Vector3 ClampVelocityRelativeToPlayerSafe(::BNM::Structures::Unity::Vector3 inVel, float max, float teleportSpeedThreshold) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("ClampVelocityRelativeToPlayerSafe"), {"inVel", "max", "teleportSpeedThreshold"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(inVel, max, teleportSpeedThreshold);
        }
        void ClearDuplicationZone(::GlobalNamespace::RigDuplicationZone* duplicationZone) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearDuplicationZone"), {"duplicationZone"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(duplicationZone);
        }
        void ClearLocalGrabOverride() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearLocalGrabOverride"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ClearPartyMemberStatus() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearPartyMemberStatus"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ClearRopeData() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearRopeData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CosmeticsV2_Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CosmeticsV2_Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CosmeticsV2_OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CosmeticsV2_OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void DetachLocalPlayerFromMovingSurface() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DetachLocalPlayerFromMovingSurface"));
            _m.Call();
        }
        static void DetachLocalPlayerFromPhotonView() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DetachLocalPlayerFromPhotonView"));
            _m.Call();
        }
        void DisableHitWithKnockBack() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DisableHitWithKnockBack"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP0 = void*>
        void DisableHitWithKnockBack(TP0 effect) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DisableHitWithKnockBack"), {"effect"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(effect);
        }
        void DroppedByPlayer(::GlobalNamespace::VRRig* grabbedByRig, ::BNM::Structures::Unity::Vector3 throwVelocity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DroppedByPlayer"), {"grabbedByRig", "throwVelocity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(grabbedByRig, throwVelocity);
        }
        void EnableBuilderResizeWatch(bool on) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnableBuilderResizeWatch"), {"on"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(on);
        }
        void EnableGuardianEjectWatch(bool on) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnableGuardianEjectWatch"), {"on"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(on);
        }
        template <typename TP0 = void*>
        void EnableHitWithKnockBack(TP0 effect) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnableHitWithKnockBack"), {"effect"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(effect);
        }
        void EnableHuntWatch(bool on) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnableHuntWatch"), {"on"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(on);
        }
        void EnableNonCosmeticHandItemRPC(bool enable, bool isLeftHand, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnableNonCosmeticHandItemRPC"), {"enable", "isLeftHand", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(enable, isLeftHand, info);
        }
        void EnablePaintbrawlCosmetics(bool on) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnablePaintbrawlCosmetics"), {"on"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(on);
        }
        void EnableRankedTimerWatch(bool on) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnableRankedTimerWatch"), {"on"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(on);
        }
        void EnableSuperInfectionHands(bool on) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnableSuperInfectionHands"), {"on"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(on);
        }
        void EnableVStumpReturnWatch(bool on) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnableVStumpReturnWatch"), {"on"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(on);
        }
        void ForceResetFrozenEffect() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ForceResetFrozenEffect"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void GenerateFingerAngleLookupTables() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GenerateFingerAngleLookupTables"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void GenerateTableIndex(::GlobalNamespace::VRMapIndex*& index) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GenerateTableIndex"), {"index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&index);
        }
        void GenerateTableMiddle(::GlobalNamespace::VRMapMiddle*& middle) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GenerateTableMiddle"), {"middle"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&middle);
        }
        void GenerateTableThumb(::GlobalNamespace::VRMapThumb*& thumb) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GenerateTableThumb"), {"thumb"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&thumb);
        }
        ::GlobalNamespace::CosmeticRefRegistry* get_cosmeticReferences() {
            static BNM::Method<::GlobalNamespace::CosmeticRefRegistry*> _m = GetClass().GetMethod(O("get_cosmeticReferences"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::Array<::GameObject*>* get_cosmetics() {
            static BNM::Method<::BNM::Structures::Mono::Array<::GameObject*>*> _m = GetClass().GetMethod(O("get_cosmetics"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::NetPlayer* get_Creator() {
            static BNM::Method<::GlobalNamespace::NetPlayer*> _m = GetClass().GetMethod(O("get_Creator"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::GorillaSkin* get_CurrentCosmeticSkin() {
            static BNM::Method<::GlobalNamespace::GorillaSkin*> _m = GetClass().GetMethod(O("get_CurrentCosmeticSkin"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::GorillaSkin* get_CurrentModeSkin() {
            static BNM::Method<::GlobalNamespace::GorillaSkin*> _m = GetClass().GetMethod(O("get_CurrentModeSkin"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::HandEffectContext* get_ExtraLeftHandEffect() {
            static BNM::Method<::GlobalNamespace::HandEffectContext*> _m = GetClass().GetMethod(O("get_ExtraLeftHandEffect"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::HandEffectContext* get_ExtraRightHandEffect() {
            static BNM::Method<::GlobalNamespace::HandEffectContext*> _m = GetClass().GetMethod(O("get_ExtraRightHandEffect"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::GamePlayer* get_GamePlayerRef() {
            static BNM::Method<::GlobalNamespace::GamePlayer*> _m = GetClass().GetMethod(O("get_GamePlayerRef"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_HasBracelet() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_HasBracelet"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_Initialized() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_Initialized"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_InitializedCosmetics() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_InitializedCosmetics"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsFrozen() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsFrozen"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_isLocal() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_isLocal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsLocalPartyMember() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsLocalPartyMember"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsMicEnabled() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsMicEnabled"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsPlayerMeshHidden() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsPlayerMeshHidden"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_LastHandTouchedGroundAtNetworkTime() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_LastHandTouchedGroundAtNetworkTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_LastTouchedGroundAtNetworkTime() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_LastTouchedGroundAtNetworkTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::HandEffectContext* get_LeftHandEffect() {
            static BNM::Method<::GlobalNamespace::HandEffectContext*> _m = GetClass().GetMethod(O("get_LeftHandEffect"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_LeftThrowableProjectileColor() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_LeftThrowableProjectileColor"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_LeftThrowableProjectileIndex() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_LeftThrowableProjectileIndex"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static ::GlobalNamespace::VRRig* get_LocalRig() {
            static BNM::Method<::GlobalNamespace::VRRig*> _m = GetClass().GetMethod(O("get_LocalRig"));
            return _m.Call();
        }
        ::Material* get_myDefaultSkinMaterialInstance() {
            static BNM::Method<::Material*> _m = GetClass().GetMethod(O("get_myDefaultSkinMaterialInstance"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_NativeScale() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_NativeScale"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::Array<::GameObject*>* get_overrideCosmetics() {
            static BNM::Method<::BNM::Structures::Mono::Array<::GameObject*>*> _m = GetClass().GetMethod(O("get_overrideCosmetics"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_PostTickRunning() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_PostTickRunning"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_RandomThrowableIndex() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_RandomThrowableIndex"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_RigBuildFullyInitialized() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_RigBuildFullyInitialized"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::HandEffectContext* get_RightHandEffect() {
            static BNM::Method<::GlobalNamespace::HandEffectContext*> _m = GetClass().GetMethod(O("get_RightHandEffect"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_RightThrowableProjectileColor() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_RightThrowableProjectileColor"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_RightThrowableProjectileIndex() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_RightThrowableProjectileIndex"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_scaleFactor() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_scaleFactor"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_ScaleMultiplier() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_ScaleMultiplier"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_ShowGoldNameTag() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_ShowGoldNameTag"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_SizeLayerMask() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_SizeLayerMask"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_SpeakingLoudness() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_SpeakingLoudness"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 get_syncPos() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("get_syncPos"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_TemporaryCosmetics() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_TemporaryCosmetics"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::GorillaSkin* get_TemporaryEffectSkin() {
            static BNM::Method<::GlobalNamespace::GorillaSkin*> _m = GetClass().GetMethod(O("get_TemporaryEffectSkin"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_WearablePackedStates() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_WearablePackedStates"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void GetCosmeticsPlayFabCatalogData() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetCosmeticsPlayFabCatalogData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int GetCurrentQuestScore_1() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetCurrentQuestScore"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetCurrentRankedSubTier(bool getPC) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetCurrentRankedSubTier"), {"getPC"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(getPC);
        }
        ::GlobalNamespace::HandEffectContext* GetHandEffect(bool isLeftHand, ::GorillaLocomotion::StiltID stiltID) {
            static BNM::Method<::GlobalNamespace::HandEffectContext*> _m = GetClass().GetMethod(O("GetHandEffect"), {"isLeftHand", "stiltID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(isLeftHand, stiltID);
        }
        ::GorillaLocomotion::GTPlayer_MaterialData GetHandSurfaceData(int index) {
            static BNM::Method<::GorillaLocomotion::GTPlayer_MaterialData> _m = GetClass().GetMethod(O("GetHandSurfaceData"), {"index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(index);
        }
        ::GlobalNamespace::VRMap* GetMakingFist(bool debug, bool& isLeftHand) {
            static BNM::Method<::GlobalNamespace::VRMap*> _m = GetClass().GetMethod(O("GetMakingFist"), {"debug", "isLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(debug, &isLeftHand);
        }
        ::BNM::Structures::Unity::Vector3 GetMouthPosition_1() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetMouthPosition"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::VRRig_PartyMemberStatus GetPartyMemberStatus_1() {
            static BNM::Method<::GlobalNamespace::VRRig_PartyMemberStatus> _m = GetClass().GetMethod(O("GetPartyMemberStatus"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetRandomThrowableModelIndex() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetRandomThrowableModelIndex"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* GetThrowableProjectileColor(bool isLeftHand) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetThrowableProjectileColor"), {"isLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(isLeftHand);
        }
        void GrabbedByPlayer(::GlobalNamespace::VRRig* grabbedByRig, bool grabbedBody, bool grabbedLeftHand, bool grabbedWithLeftHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GrabbedByPlayer"), {"grabbedByRig", "grabbedBody", "grabbedLeftHand", "grabbedWithLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(grabbedByRig, grabbedBody, grabbedLeftHand, grabbedWithLeftHand);
        }
        void HandHold_HandPositionReleaseOverride(::GlobalNamespace::HandHold* hh, bool leftHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandHold_HandPositionReleaseOverride"), {"hh", "leftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(hh, leftHand);
        }
        void HandHold_HandPositionRequestOverride(::GlobalNamespace::HandHold* hh, bool leftHand, ::BNM::Structures::Unity::Vector3 pos) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandHold_HandPositionRequestOverride"), {"hh", "leftHand", "pos"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(hh, leftHand, pos);
        }
        void Handle_CosmeticsV2_OnPostInstantiateAllPrefabs_DoEnableAllCosmetics() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Handle_CosmeticsV2_OnPostInstantiateAllPrefabs_DoEnableAllCosmetics"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool HasCosmetic(::BNM::Structures::Mono::String* cosmeticId) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasCosmetic"), {"cosmeticId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(cosmeticId);
        }
        void HideAllCosmetics(::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HideAllCosmetics"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info);
        }
        void IncrementRPC(::GlobalNamespace::PhotonMessageInfoWrapped info, ::BNM::Structures::Mono::String* sourceCall) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("IncrementRPC"), {"info", "sourceCall"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info, sourceCall);
        }
        void IncrementRPC(::Photon_Pun::PhotonMessageInfo info, ::BNM::Structures::Mono::String* sourceCall) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("IncrementRPC"), {"info", "sourceCall"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info, sourceCall);
        }
        void InitializeNoobMaterial(float red, float green, float blue, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeNoobMaterial"), {"red", "green", "blue", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(red, green, blue, info);
        }
        void InitializeNoobMaterialLocal(float red, float green, float blue) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeNoobMaterialLocal"), {"red", "green", "blue"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(red, green, blue);
        }
        bool IsInHandHoldChainWithOtherPlayer(int otherPlayer) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsInHandHoldChainWithOtherPlayer"), {"otherPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(otherPlayer);
        }
        bool IsInRankedMode() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsInRankedMode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsItemAllowed(::BNM::Structures::Mono::String* itemName) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsItemAllowed"), {"itemName"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(itemName);
        }
        bool IsLocalTrajectoryOverrideActive() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsLocalTrajectoryOverrideActive"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsMakingFistLeft() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsMakingFistLeft"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsMakingFistRight() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsMakingFistRight"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsMakingFiveLeft() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsMakingFiveLeft"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsMakingFiveRight() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsMakingFiveRight"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsOnGround(float headCheckDistance, float handCheckDistance, ::BNM::Structures::Unity::Vector3& groundNormal) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsOnGround"), {"headCheckDistance", "handCheckDistance", "groundNormal"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(headCheckDistance, handCheckDistance, &groundNormal);
        }
        bool IsPositionInRange(::BNM::Structures::Unity::Vector3 position, float range) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsPositionInRange"), {"position", "range"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(position, range);
        }
        ::BNM::Structures::Unity::Vector3 LatestVelocity() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("LatestVelocity"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool LocalCheckCollision(::BNM::Structures::Unity::Vector3 startPosition, ::BNM::Structures::Unity::Vector3 movement, float radius, ::BNM::Structures::Unity::Vector3& finalPosition, ::BNM::Structures::Unity::RaycastHit& hit) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("LocalCheckCollision"), {"startPosition", "movement", "radius", "finalPosition", "hit"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(startPosition, movement, radius, &finalPosition, &hit);
        }
        bool LocalTestMovementCollision(::BNM::Structures::Unity::Vector3 startPosition, ::BNM::Structures::Unity::Vector3 startVelocity, ::BNM::Structures::Unity::Vector3& modifiedVelocity, ::BNM::Structures::Unity::Vector3& finalPosition) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("LocalTestMovementCollision"), {"startPosition", "startVelocity", "modifiedVelocity", "finalPosition"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(startPosition, startVelocity, &modifiedVelocity, &finalPosition);
        }
        void LocalUpdateCosmeticsWithTryon(::GorillaNetworking::CosmeticsController_CosmeticSet* newSet, ::GorillaNetworking::CosmeticsController_CosmeticSet* newTryOnSet, bool playfx) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LocalUpdateCosmeticsWithTryon"), {"newSet", "newTryOnSet", "playfx"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newSet, newTryOnSet, playfx);
        }
        void NetInitialize() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NetInitialize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Mono::String* NormalizeName(bool doIt, ::BNM::Structures::Mono::String* text) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("NormalizeName"), {"doIt", "text"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(doIt, text);
        }
        void OnColorInitialized(::BNM::Structures::Mono::Action<::BNM::Structures::Unity::Color>* action) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnColorInitialized"), {"action"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(action);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP1 = void*>
        void OnKIDSessionUpdated(bool showCustomNames, TP1 managedBy) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnKIDSessionUpdated"), {"showCustomNames", "managedBy"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(showCustomNames, managedBy);
        }
        template <typename TP0 = void*>
        void OnSerializeRead(TP0 objectData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSerializeRead"), {"objectData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(objectData);
        }
        void* OnSerializeWrite() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("OnSerializeWrite"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnSubscriptionData() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSubscriptionData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int16_t PackCompetitiveData() {
            static BNM::Method<int16_t> _m = GetClass().GetMethod(O("PackCompetitiveData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void PlayClimbSound(::AudioClip* clip, bool isLeftHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayClimbSound"), {"clip", "isLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(clip, isLeftHand);
        }
        template <typename TP0 = void*>
        void PlayCosmeticEffectSFX(TP0 effect) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayCosmeticEffectSFX"), {"effect"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(effect);
        }
        void PlayDrum(int drumIndex, float drumVolume, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayDrum"), {"drumIndex", "drumVolume", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(drumIndex, drumVolume, info);
        }
        void PlayGeodeEffect(::BNM::Structures::Unity::Vector3 hitPosition) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayGeodeEffect"), {"hitPosition"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(hitPosition);
        }
        void PlayHandTapLocal(int audioClipIndex, bool isLeftHand, float tapVolume) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayHandTapLocal"), {"audioClipIndex", "isLeftHand", "tapVolume"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(audioClipIndex, isLeftHand, tapVolume);
        }
        void PlaySelfOnlyInstrument(int selfOnlyIndex, int noteIndex, float instrumentVol, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlaySelfOnlyInstrument"), {"selfOnlyIndex", "noteIndex", "instrumentVol", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(selfOnlyIndex, noteIndex, instrumentVol, info);
        }
        void PlaySplashEffect(::BNM::Structures::Unity::Vector3 splashPosition, ::BNM::Structures::Unity::Quaternion splashRotation, float splashScale, float boundingRadius, bool bigSplash, bool enteringWater, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlaySplashEffect"), {"splashPosition", "splashRotation", "splashScale", "boundingRadius", "bigSplash", "enteringWater", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(splashPosition, splashRotation, splashScale, boundingRadius, bigSplash, enteringWater, info);
        }
        void PlayTaggedEffect() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayTaggedEffect"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PlayTagSoundLocal(int soundIndex, float soundVolume, bool stopCurrentAudio) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayTagSoundLocal"), {"soundIndex", "soundVolume", "stopCurrentAudio"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(soundIndex, soundVolume, stopCurrentAudio);
        }
        void PostTick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PostTick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RefreshCosmetics() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshCosmetics"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RemoteRigUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoteRigUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void remove_OnColorChanged_1(::BNM::Structures::Mono::Action<::BNM::Structures::Unity::Color>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnColorChanged"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_OnDataChange_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnDataChange"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_OnPlayerNameVisibleChanged_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnPlayerNameVisibleChanged"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_OnQuestScoreChanged_1(::BNM::Structures::Mono::Action<int>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnQuestScoreChanged"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_OnRankedSubtierChanged_1(::BNM::Structures::Mono::Action<int, int>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnRankedSubtierChanged"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        template <typename TP0 = void*>
        void RemoveLateUpdateCallback(TP0 action) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveLateUpdateCallback"), {"action"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(action);
        }
        template <typename TP0 = void*>
        void RemoveTemporaryCosmeticEffects(TP0 effect) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveTemporaryCosmeticEffects"), {"effect"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(effect);
        }
        void RequestCosmetics(::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestCosmetics"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info);
        }
        void RequestMaterialColor(int askingPlayerID, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestMaterialColor"), {"askingPlayerID", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(askingPlayerID, info);
        }
        void ResetTimeSpawned() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetTimeSpawned"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RestoreLayer() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RestoreLayer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int ReturnHandPosition() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ReturnHandPosition"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 ReturnVelocityAtTime(double timeToReturn) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("ReturnVelocityAtTime"), {"timeToReturn"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(timeToReturn);
        }
        template <typename TP2 = void*>
        void RPC_EnableNonCosmeticHandItem(bool enable, bool isLeftHand, TP2 info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_EnableNonCosmeticHandItem"), {"enable", "isLeftHand", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(enable, isLeftHand, info);
        }
        ::BNM::Structures::Unity::Quaternion SanitizeQuaternion(::BNM::Structures::Unity::Quaternion quat) {
            static BNM::Method<::BNM::Structures::Unity::Quaternion> _m = GetClass().GetMethod(O("SanitizeQuaternion"), {"quat"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(quat);
        }
        ::BNM::Structures::Unity::Vector3 SanitizeVector3(::BNM::Structures::Unity::Vector3 vec) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("SanitizeVector3"), {"vec"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(vec);
        }
        void SaveOwnedCosmetics(::BNM::Structures::Mono::String* cosmetics) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SaveOwnedCosmetics"), {"cosmetics"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(cosmetics);
        }
        void ScaleUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ScaleUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SendScoresToGameModeRoom(::GorillaGameModes::GameModeType newGameModeType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendScoresToGameModeRoom"), {"newGameModeType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newGameModeType);
        }
        void SendScoresToNewPlayer(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendScoresToNewPlayer"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player);
        }
        void SendScoresToRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendScoresToRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SerializeReadShared(::GlobalNamespace::InputStruct data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SerializeReadShared"), {"data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(data);
        }
        ::GlobalNamespace::InputStruct SerializeWriteShared() {
            static BNM::Method<::GlobalNamespace::InputStruct> _m = GetClass().GetMethod(O("SerializeWriteShared"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_cosmeticReferences(::GlobalNamespace::CosmeticRefRegistry* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_cosmeticReferences"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_cosmetics(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_cosmetics"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_CurrentCosmeticSkin(::GlobalNamespace::GorillaSkin* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_CurrentCosmeticSkin"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_CurrentModeSkin(::GlobalNamespace::GorillaSkin* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_CurrentModeSkin"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_InitializedCosmetics(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_InitializedCosmetics"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_IsFrozen(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_IsFrozen"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_IsMicEnabled(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_IsMicEnabled"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_LastHandTouchedGroundAtNetworkTime(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_LastHandTouchedGroundAtNetworkTime"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_LastTouchedGroundAtNetworkTime(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_LastTouchedGroundAtNetworkTime"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        template <typename TP0 = void*>
        void set_LeftThrowableProjectileColor(TP0 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_LeftThrowableProjectileColor"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_LeftThrowableProjectileIndex(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_LeftThrowableProjectileIndex"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_NativeScale(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_NativeScale"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_overrideCosmetics(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_overrideCosmetics"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_PostTickRunning(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_PostTickRunning"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_RandomThrowableIndex(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_RandomThrowableIndex"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        template <typename TP0 = void*>
        void set_RightThrowableProjectileColor(TP0 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_RightThrowableProjectileColor"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_RightThrowableProjectileIndex(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_RightThrowableProjectileIndex"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_ScaleMultiplier(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_ScaleMultiplier"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_ShowGoldNameTag(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_ShowGoldNameTag"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_SizeLayerMask(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_SizeLayerMask"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_SpeakingLoudness(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_SpeakingLoudness"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_syncPos(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_syncPos"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_TemporaryEffectSkin(::GlobalNamespace::GorillaSkin* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TemporaryEffectSkin"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_WearablePackedStates(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_WearablePackedStates"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetActiveTransferrableObjectIndex(int idx, int v) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetActiveTransferrableObjectIndex"), {"idx", "v"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(idx, v);
        }
        void SetColor(::BNM::Structures::Unity::Color color) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetColor"), {"color"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(color);
        }
        void SetCosmeticsActive(bool playfx) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetCosmeticsActive"), {"playfx"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playfx);
        }
        void SetDuplicationZone_1(::GlobalNamespace::RigDuplicationZone* duplicationZone) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetDuplicationZone"), {"duplicationZone"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(duplicationZone);
        }
        void SetGooParticleSystemStatus(bool isLeftHand, bool isEnabled) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetGooParticleSystemStatus"), {"isLeftHand", "isEnabled"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isLeftHand, isEnabled);
        }
        void SetHandEffectData(::GlobalNamespace::HandEffectContext* effectContext, int audioClipIndex, bool isDownTap, bool isLeftHand, ::GorillaLocomotion::StiltID stiltID, float handTapVolume, float handTapSpeed, ::BNM::Structures::Unity::Vector3 dirFromHitToHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetHandEffectData"), {"effectContext", "audioClipIndex", "isDownTap", "isLeftHand", "stiltID", "handTapVolume", "handTapSpeed", "dirFromHitToHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(effectContext, audioClipIndex, isDownTap, isLeftHand, stiltID, handTapVolume, handTapSpeed, dirFromHitToHand);
        }
        void SetHeadBodyOffset_1() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetHeadBodyOffset"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetInvisibleToLocalPlayer(bool invisible) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetInvisibleToLocalPlayer"), {"invisible"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(invisible);
        }
        void SetJumpLimitLocal(float maxJumpSpeed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetJumpLimitLocal"), {"maxJumpSpeed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(maxJumpSpeed);
        }
        void SetJumpMultiplierLocal(float jumpMultiplier) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetJumpMultiplierLocal"), {"jumpMultiplier"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(jumpMultiplier);
        }
        void SetNameTagText(::BNM::Structures::Mono::String* name) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetNameTagText"), {"name"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(name);
        }
        void SetPitchShiftCosmeticsDirty_1() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetPitchShiftCosmeticsDirty"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetPlayerMeshHidden(bool hide) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetPlayerMeshHidden"), {"hide"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(hide);
        }
        void SetQuestScore(int score) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetQuestScore"), {"score"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(score);
        }
        void SetQuestScoreLocal(int score) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetQuestScoreLocal"), {"score"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(score);
        }
        void SetRandomThrowableModelIndex(int randModelIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetRandomThrowableModelIndex"), {"randModelIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(randModelIndex);
        }
        void SetRankedInfo(float rankedELO, int rankedSubtierQuest, int rankedSubtierPC, bool broadcastToOtherClients) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetRankedInfo"), {"rankedELO", "rankedSubtierQuest", "rankedSubtierPC", "broadcastToOtherClients"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rankedELO, rankedSubtierQuest, rankedSubtierPC, broadcastToOtherClients);
        }
        void SetRankedInfoLocal(float rankedELO, int rankedSubTierQuest, int rankedSubTierPC) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetRankedInfoLocal"), {"rankedELO", "rankedSubTierQuest", "rankedSubTierPC"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rankedELO, rankedSubTierQuest, rankedSubTierPC);
        }
        void SetTaggedBy(::GlobalNamespace::VRRig* taggingRig) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetTaggedBy"), {"taggingRig"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(taggingRig);
        }
        template <typename TP1 = void*>
        void SetThrowableProjectileColor(bool isLeftHand, TP1 color) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetThrowableProjectileColor"), {"isLeftHand", "color"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isLeftHand, color);
        }
        void SetTransferrableDockPosition(int idx, ::GlobalNamespace::BodyDockPositions_DropPositions v) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetTransferrableDockPosition"), {"idx", "v"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(idx, v);
        }
        void SetTransferrableItemStates(int idx, ::GlobalNamespace::TransferrableObject_ItemStates v) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetTransferrableItemStates"), {"idx", "v"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(idx, v);
        }
        void SetTransferrablePosStates(int idx, ::GlobalNamespace::TransferrableObject_PositionState v) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetTransferrablePosStates"), {"idx", "v"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(idx, v);
        }
        void SharedStart() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SharedStart"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool ShouldPlayReplacementVoice() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ShouldPlayReplacementVoice"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool ShouldUseNewIKMethod(bool isReceivingNewIKData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ShouldUseNewIKMethod"), {"isReceivingNewIKData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(isReceivingNewIKData);
        }
        void SliceUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SliceUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP0 = void*>
        void SpawnSkinEffects(TP0 effect) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SpawnSkinEffects"), {"effect"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(effect);
        }
        template <typename TP0 = void*>
        void SpawnVFXEffect(TP0 effect) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SpawnVFXEffect"), {"effect"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(effect);
        }
        void ToggleMatParticles(bool enabled) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ToggleMatParticles"), {"enabled"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(enabled);
        }
        void ToggleParticleSystem(::ParticleSystem* ps, bool enabled) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ToggleParticleSystem"), {"ps", "enabled"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(ps, enabled);
        }
        ::GlobalNamespace::BodyDockPositions_DropPositions TransferrableDockPosition(int idx) {
            static BNM::Method<::GlobalNamespace::BodyDockPositions_DropPositions> _m = GetClass().GetMethod(O("TransferrableDockPosition"), {"idx"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(idx);
        }
        ::GlobalNamespace::TransferrableObject_ItemStates TransferrableItemStates(int idx) {
            static BNM::Method<::GlobalNamespace::TransferrableObject_ItemStates> _m = GetClass().GetMethod(O("TransferrableItemStates"), {"idx"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(idx);
        }
        ::GlobalNamespace::TransferrableObject_PositionState TransferrablePosStates(int idx) {
            static BNM::Method<::GlobalNamespace::TransferrableObject_PositionState> _m = GetClass().GetMethod(O("TransferrablePosStates"), {"idx"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(idx);
        }
        bool TryGetCosmeticVoiceOverride(::GorillaTag_Cosmetics::CosmeticEffectsOnPlayers_EFFECTTYPE key, ::GorillaTag_Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*& value) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetCosmeticVoiceOverride"), {"key", "value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(key, &value);
        }
        void TrySweptMoveTo(::BNM::Structures::Unity::Vector3 targetPosition, bool& handCollided, bool& buttCollided) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TrySweptMoveTo"), {"targetPosition", "handCollided", "buttCollided"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(targetPosition, &handCollided, &buttCollided);
        }
        void TrySweptOffsetMove(::BNM::Structures::Unity::Vector3 movement, bool& handCollided, bool& buttCollided) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TrySweptOffsetMove"), {"movement", "handCollided", "buttCollided"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(movement, &handCollided, &buttCollided);
        }
        void UnpackCompetitiveData(int16_t packed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnpackCompetitiveData"), {"packed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(packed);
        }
        void UpdateCosmeticsWithTryon(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* currentItems, ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* tryOnItems, bool playfx, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateCosmeticsWithTryon"), {"currentItems", "tryOnItems", "playfx", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(currentItems, tryOnItems, playfx, info);
        }
        void UpdateCosmeticsWithTryon(::BNM::Structures::Mono::Array<int>* currentItemsPacked, ::BNM::Structures::Mono::Array<int>* tryOnItemsPacked, bool playfx, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateCosmeticsWithTryon"), {"currentItemsPacked", "tryOnItemsPacked", "playfx", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(currentItemsPacked, tryOnItemsPacked, playfx, info);
        }
        void UpdateExtrapolationTarget() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateExtrapolationTarget"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateFriendshipBracelet() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateFriendshipBracelet"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateFrozen(float dt, float freezeDuration) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateFrozen"), {"dt", "freezeDuration"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt, freezeDuration);
        }
        void UpdateFrozenEffect(bool enable) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateFrozenEffect"), {"enable"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(enable);
        }
        void UpdateMatParticles(int materialIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateMatParticles"), {"materialIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(materialIndex);
        }
        void UpdateMovingMonkeBlockData() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateMovingMonkeBlockData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateName() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateName"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateName(bool isNamePermissionEnabled) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateName"), {"isNamePermissionEnabled"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isNamePermissionEnabled);
        }
        void UpdateNameSafeAccount(bool isSafeAccount) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateNameSafeAccount"), {"isSafeAccount"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isSafeAccount);
        }
        void UpdateQuestScore(int score, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateQuestScore"), {"score", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(score, info);
        }
        void UpdateRankedInfo(float rankedELO, int rankedSubtierQuest, int rankedSubtierPC, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateRankedInfo"), {"rankedELO", "rankedSubtierQuest", "rankedSubtierPC", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rankedELO, rankedSubtierQuest, rankedSubtierPC, info);
        }
        void UpdateReplacementVoice() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateReplacementVoice"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateRopeData() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateRopeData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void VRRigResize(float ratioVar) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("VRRigResize"), {"ratioVar"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(ratioVar);
        }
    };
}
