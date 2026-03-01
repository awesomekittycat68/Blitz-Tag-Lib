#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaGameManager.hpp"
#include "../GorillaGameModes/GameModeType.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct GorillaGuardianManager : ::GlobalNamespace::GorillaGameManager {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaGuardianManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetIsPlaying() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_isPlaying"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsPlaying(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_isPlaying"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetHapticDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("hapticDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHapticStrength() {
            static BNM::Field<float> _field = GetClass().GetField(O("hapticStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLaunchGroundHandCheckDist() {
            static BNM::Field<float> _field = GetClass().GetField(O("launchGroundHandCheckDist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLaunchGroundHeadCheckDist() {
            static BNM::Field<float> _field = GetClass().GetField(O("launchGroundHeadCheckDist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLaunchGroundKickup() {
            static BNM::Field<float> _field = GetClass().GetField(O("launchGroundKickup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLaunchMinimumStrength() {
            static BNM::Field<float> _field = GetClass().GetField(O("launchMinimumStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLaunchStrengthMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("launchStrengthMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxLaunchVelocity() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxLaunchVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRequiredGuardianDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("requiredGuardianDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetSlamImpactPrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("slamImpactPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSlamMaxStrengthMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("slamMaxStrengthMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSlamMaxTapSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("slamMaxTapSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSlamMinStrengthMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("slamMinStrengthMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSlamRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("slamRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSlamTriggerAngle() {
            static BNM::Field<float> _field = GetClass().GetField(O("slamTriggerAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSlamTriggerTapSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("slamTriggerTapSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSlapBackAlignmentThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("slapBackAlignmentThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSlapFrontAlignmentThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("slapFrontAlignmentThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetSlapImpactPrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("slapImpactPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetHapticDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hapticDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHapticStrength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hapticStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLaunchGroundHandCheckDist(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("launchGroundHandCheckDist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLaunchGroundHeadCheckDist(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("launchGroundHeadCheckDist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLaunchGroundKickup(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("launchGroundKickup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLaunchMinimumStrength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("launchMinimumStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLaunchStrengthMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("launchStrengthMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxLaunchVelocity(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxLaunchVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRequiredGuardianDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("requiredGuardianDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlamImpactPrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("slamImpactPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlamMaxStrengthMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("slamMaxStrengthMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlamMaxTapSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("slamMaxTapSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlamMinStrengthMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("slamMinStrengthMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlamRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("slamRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlamTriggerAngle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("slamTriggerAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlamTriggerTapSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("slamTriggerTapSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlapBackAlignmentThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("slapBackAlignmentThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlapFrontAlignmentThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("slapFrontAlignmentThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlapImpactPrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("slapImpactPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddFusionDataBehaviour(::BNM::IL2CPP::Il2CppObject* behaviour) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddFusionDataBehaviour"), {"behaviour"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(behaviour);
        }
        bool CanJoinFrienship(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanJoinFrienship"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player);
        }
        bool CheckLaunchRetriggerDelay(::GlobalNamespace::VRRig* launchedRig) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckLaunchRetriggerDelay"), {"launchedRig"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(launchedRig);
        }
        bool CheckSlap(::GlobalNamespace::NetPlayer* slapper, ::GlobalNamespace::NetPlayer* target, bool leftHand, ::BNM::Structures::Unity::Vector3& velocity) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckSlap"), {"slapper", "target", "leftHand", "velocity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(slapper, target, leftHand, &velocity);
        }
        void EjectGuardian(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EjectGuardian"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player);
        }
        ::BNM::Structures::Mono::String* GameModeName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GameModeName"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* GameModeNameRoomLabel() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GameModeNameRoomLabel"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GorillaGameModes::GameModeType GameType() {
            static BNM::Method<::GorillaGameModes::GameModeType> _m = GetClass().GetMethod(O("GameType"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_isPlaying() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_isPlaying"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void HandleHandTap(::GlobalNamespace::NetPlayer* tappingPlayer, ::GlobalNamespace::Tappable* hitTappable, bool leftHand, ::BNM::Structures::Unity::Vector3 handVelocity, ::BNM::Structures::Unity::Vector3 tapSurfaceNormal) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleHandTap"), {"tappingPlayer", "hitTappable", "leftHand", "handVelocity", "tapSurfaceNormal"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(tappingPlayer, hitTappable, leftHand, handVelocity, tapSurfaceNormal);
        }
        bool IsHoldingPlayer() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsHoldingPlayer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsHoldingPlayer(bool leftHand) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsHoldingPlayer"), {"leftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(leftHand);
        }
        bool IsPlayerGuardian(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsPlayerGuardian"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player);
        }
        bool IsRigBeingHeld(::GlobalNamespace::VRRig* rig) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsRigBeingHeld"), {"rig"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(rig);
        }
        void LaunchPlayer(::GlobalNamespace::NetPlayer* launcher, ::BNM::Structures::Unity::Vector3 velocity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LaunchPlayer"), {"launcher", "velocity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(launcher, velocity);
        }
        bool LocalCanTag(::GlobalNamespace::NetPlayer* myPlayer, ::GlobalNamespace::NetPlayer* otherPlayer) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("LocalCanTag"), {"myPlayer", "otherPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(myPlayer, otherPlayer);
        }
        bool LocalIsTagged(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("LocalIsTagged"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player);
        }
        void LocalPlaySlamEffect(::BNM::Structures::Unity::Vector3 location, ::BNM::Structures::Unity::Vector3 direction) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LocalPlaySlamEffect"), {"location", "direction"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(location, direction);
        }
        void LocalPlaySlapEffect(::BNM::Structures::Unity::Vector3 location, ::BNM::Structures::Unity::Vector3 direction) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LocalPlaySlapEffect"), {"location", "direction"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(location, direction);
        }
        void LocalTag(::GlobalNamespace::NetPlayer* taggedPlayer, ::GlobalNamespace::NetPlayer* taggingPlayer, bool bodyHit, bool leftHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LocalTag"), {"taggedPlayer", "taggingPlayer", "bodyHit", "leftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(taggedPlayer, taggingPlayer, bodyHit, leftHand);
        }
        void NetworkLinkSetup(::GlobalNamespace::GameModeSerializer* netSerializer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NetworkLinkSetup"), {"netSerializer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(netSerializer);
        }
        template <typename TP0 = void*>
        void OnSerializeRead(TP0 newData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSerializeRead"), {"newData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newData);
        }
        void OnSerializeRead(::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSerializeRead"), {"stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, info);
        }
        void* OnSerializeWrite() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("OnSerializeWrite"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnSerializeWrite(::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSerializeWrite"), {"stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, info);
        }
        void PlaySlamEffect(::BNM::Structures::Unity::Vector3 location, ::BNM::Structures::Unity::Vector3 direction) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlaySlamEffect"), {"location", "direction"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(location, direction);
        }
        void PlaySlapEffect(::BNM::Structures::Unity::Vector3 location, ::BNM::Structures::Unity::Vector3 direction) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlaySlapEffect"), {"location", "direction"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(location, direction);
        }
        void RequestEjectGuardian(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestEjectGuardian"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player);
        }
        void ResetGame() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetGame"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_isPlaying(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_isPlaying"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void StartPlaying() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartPlaying"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StopPlaying() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StopPlaying"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
