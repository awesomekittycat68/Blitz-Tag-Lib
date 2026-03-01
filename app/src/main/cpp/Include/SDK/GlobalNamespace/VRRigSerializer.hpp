#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaWrappedSerializer.hpp"
#include "PhotonMessageInfoWrapped.hpp"
#include "../GorillaLocomotion/StiltID.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct VRRigSerializer : ::GlobalNamespace::GorillaWrappedSerializer {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "VRRigSerializer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::FXSystemSettings* GetSettings() {
            static BNM::Method<::GlobalNamespace::FXSystemSettings*> _method = GetClass().GetMethod(O("get_settings"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetTutorialComplete() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_tutorialComplete"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTutorialComplete(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_tutorialComplete"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::Photon_Voice_PUN::PhotonVoiceView* GetVoice() {
            static BNM::Method<::Photon_Voice_PUN::PhotonVoiceView*> _method = GetClass().GetMethod(O("get_Voice"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::VRRig* GetVRRig() {
            static BNM::Method<::GlobalNamespace::VRRig*> _method = GetClass().GetMethod(O("get_VRRig"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void* GetDefaultName() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_defaultName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetNickName() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_nickName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTutorialComplete_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_tutorialComplete"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GeoSoundArg* GetGeoSoundArg() {
            static BNM::Field<::GlobalNamespace::GeoSoundArg*> _field = GetClass().GetField(O("geoSoundArg"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::HandTapArgs* GetHandTapArgs() {
            static BNM::Field<::GlobalNamespace::HandTapArgs*> _field = GetClass().GetField(O("handTapArgs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetNetworkSpeaker() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("networkSpeaker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::RigContainer* GetRigContainer() {
            static BNM::Field<::GlobalNamespace::RigContainer*> _field = GetClass().GetField(O("rigContainer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice_PUN::PhotonVoiceView* GetVoiceView() {
            static BNM::Field<::Photon_Voice_PUN::PhotonVoiceView*> _field = GetClass().GetField(O("voiceView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetVrrig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("vrrig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDefaultName(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_defaultName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNickName(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_nickName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTutorialComplete_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_tutorialComplete"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGeoSoundArg(::GlobalNamespace::GeoSoundArg* value) {
            static BNM::Field<::GlobalNamespace::GeoSoundArg*> _field = GetClass().GetField(O("geoSoundArg"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandTapArgs(::GlobalNamespace::HandTapArgs* value) {
            static BNM::Field<::GlobalNamespace::HandTapArgs*> _field = GetClass().GetField(O("handTapArgs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNetworkSpeaker(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("networkSpeaker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRigContainer(::GlobalNamespace::RigContainer* value) {
            static BNM::Field<::GlobalNamespace::RigContainer*> _field = GetClass().GetField(O("rigContainer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoiceView(::Photon_Voice_PUN::PhotonVoiceView* value) {
            static BNM::Field<::Photon_Voice_PUN::PhotonVoiceView*> _field = GetClass().GetField(O("voiceView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVrrig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("vrrig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void BroadcastLoudSpeakerNetwork(bool toggleBroadcast, int actorNumber) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BroadcastLoudSpeakerNetwork"), {"toggleBroadcast", "actorNumber"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(toggleBroadcast, actorNumber);
        }
        void BroadcastLoudSpeakerNetworkShared(bool toggleBroadcast, ::GlobalNamespace::RigContainer* rigContainer, int actorNumber, bool isLocal) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BroadcastLoudSpeakerNetworkShared"), {"toggleBroadcast", "rigContainer", "actorNumber", "isLocal"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(toggleBroadcast, rigContainer, actorNumber, isLocal);
        }
        void CleanUp(bool netDestroy) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CleanUp"), {"netDestroy"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(netDestroy);
        }
        void CleanupLoudSpeakerNetwork() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CleanupLoudSpeakerNetwork"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CopyBackingFieldsToState(bool ) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopyBackingFieldsToState"), {""});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CopyStateToBackingFields() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopyStateToBackingFields"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DroppedByPlayer(::BNM::Structures::Unity::Vector3 throwVelocity, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DroppedByPlayer"), {"throwVelocity", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(throwVelocity, info);
        }
        void EnableNonCosmeticHandItemRPC(bool enable, bool isLeftHand, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnableNonCosmeticHandItemRPC"), {"enable", "isLeftHand", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(enable, isLeftHand, info);
        }
        void EnableNonCosmeticHandItemShared(bool enable, bool isLeftHand, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnableNonCosmeticHandItemShared"), {"enable", "isLeftHand", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(enable, isLeftHand, info);
        }
        void* get_defaultName() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_defaultName"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_nickName() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_nickName"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::FXSystemSettings* get_settings() {
            static BNM::Method<::GlobalNamespace::FXSystemSettings*> _m = GetClass().GetMethod(O("get_settings"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_tutorialComplete() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_tutorialComplete"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Photon_Voice_PUN::PhotonVoiceView* get_Voice() {
            static BNM::Method<::Photon_Voice_PUN::PhotonVoiceView*> _m = GetClass().GetMethod(O("get_Voice"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::VRRig* get_VRRig() {
            static BNM::Method<::GlobalNamespace::VRRig*> _m = GetClass().GetMethod(O("get_VRRig"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void GrabbedByPlayer(bool grabbedBody, bool grabbedLeftHand, bool grabbedWithLeftHand, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GrabbedByPlayer"), {"grabbedBody", "grabbedLeftHand", "grabbedWithLeftHand", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(grabbedBody, grabbedLeftHand, grabbedWithLeftHand, info);
        }
        void InitializeNoobMaterialShared(float red, float green, float blue, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeNoobMaterialShared"), {"red", "green", "blue", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(red, green, blue, info);
        }
        void OnBeforeDespawn() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnBeforeDespawn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
        void OnFailedSpawn() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnFailedSpawn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnHandTapRPC(int audioClipIndex, bool isDownTap, bool isLeftHand, ::GorillaLocomotion::StiltID stiltID, float handTapSpeed, int64_t packedDirFromHitToHand, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnHandTapRPC"), {"audioClipIndex", "isDownTap", "isLeftHand", "stiltID", "handTapSpeed", "packedDirFromHitToHand", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(audioClipIndex, isDownTap, isLeftHand, stiltID, handTapSpeed, packedDirFromHitToHand, info);
        }
        void OnHandTapRPCShared(int audioClipIndex, bool isDownTap, bool isLeftHand, ::GorillaLocomotion::StiltID stiltID, float handTapSpeed, int64_t packedDirFromHitToHand, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnHandTapRPCShared"), {"audioClipIndex", "isDownTap", "isLeftHand", "stiltID", "handTapSpeed", "packedDirFromHitToHand", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(audioClipIndex, isDownTap, isLeftHand, stiltID, handTapSpeed, packedDirFromHitToHand, info);
        }
        bool OnSpawnSetupCheck(::GlobalNamespace::PhotonMessageInfoWrapped wrappedInfo, ::GameObject*& outTargetObject, ::BNM::MonoType*& outTargetType) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OnSpawnSetupCheck"), {"wrappedInfo", "outTargetObject", "outTargetType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(wrappedInfo, &outTargetObject, &outTargetType);
        }
        void OnSuccesfullySpawned(::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSuccesfullySpawned"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info);
        }
        void PlayDrumShared(int drumIndex, float drumVolume, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayDrumShared"), {"drumIndex", "drumVolume", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(drumIndex, drumVolume, info);
        }
        void PlayGeodeEffectShared(::BNM::Structures::Unity::Vector3 hitPosition, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayGeodeEffectShared"), {"hitPosition", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(hitPosition, info);
        }
        void PlayHandTapShared(int soundIndex, bool isLeftHand, float tapVolume, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayHandTapShared"), {"soundIndex", "isLeftHand", "tapVolume", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(soundIndex, isLeftHand, tapVolume, info);
        }
        void PlaySelfOnlyInstrumentShared(int selfOnlyIndex, int noteIndex, float instrumentVol, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlaySelfOnlyInstrumentShared"), {"selfOnlyIndex", "noteIndex", "instrumentVol", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(selfOnlyIndex, noteIndex, instrumentVol, info);
        }
        void PlaySplashEffectShared(::BNM::Structures::Unity::Vector3 splashPosition, ::BNM::Structures::Unity::Quaternion splashRotation, float splashScale, float boundingRadius, bool bigSplash, bool enteringWater, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlaySplashEffectShared"), {"splashPosition", "splashRotation", "splashScale", "boundingRadius", "bigSplash", "enteringWater", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(splashPosition, splashRotation, splashScale, boundingRadius, bigSplash, enteringWater, info);
        }
        void RequestCosmeticsShared(::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestCosmeticsShared"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info);
        }
        void RequestMaterialColorShared(int askingPlayerID, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestMaterialColorShared"), {"askingPlayerID", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(askingPlayerID, info);
        }
        void RPC_HideAllCosmetics(::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_HideAllCosmetics"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info);
        }
        void RPC_InitializeNoobMaterial(float red, float green, float blue, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_InitializeNoobMaterial"), {"red", "green", "blue", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(red, green, blue, info);
        }
        void RPC_PlayDrum(int drumIndex, float drumVolume, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_PlayDrum"), {"drumIndex", "drumVolume", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(drumIndex, drumVolume, info);
        }
        void RPC_PlayGeodeEffect(::BNM::Structures::Unity::Vector3 hitPosition, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_PlayGeodeEffect"), {"hitPosition", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(hitPosition, info);
        }
        void RPC_PlayHandTap(int soundIndex, bool isLeftHand, float tapVolume, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_PlayHandTap"), {"soundIndex", "isLeftHand", "tapVolume", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(soundIndex, isLeftHand, tapVolume, info);
        }
        void RPC_PlaySelfOnlyInstrument(int selfOnlyIndex, int noteIndex, float instrumentVol, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_PlaySelfOnlyInstrument"), {"selfOnlyIndex", "noteIndex", "instrumentVol", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(selfOnlyIndex, noteIndex, instrumentVol, info);
        }
        void RPC_PlaySplashEffect(::BNM::Structures::Unity::Vector3 splashPosition, ::BNM::Structures::Unity::Quaternion splashRotation, float splashScale, float boundingRadius, bool bigSplash, bool enteringWater, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_PlaySplashEffect"), {"splashPosition", "splashRotation", "splashScale", "boundingRadius", "bigSplash", "enteringWater", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(splashPosition, splashRotation, splashScale, boundingRadius, bigSplash, enteringWater, info);
        }
        void RPC_RequestCosmetics(::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_RequestCosmetics"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info);
        }
        void RPC_UpdateCosmetics(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* currentItems, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_UpdateCosmetics"), {"currentItems", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(currentItems, info);
        }
        void RPC_UpdateCosmeticsWithTryon(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* currentItems, ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* tryOnItems, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_UpdateCosmeticsWithTryon"), {"currentItems", "tryOnItems", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(currentItems, tryOnItems, info);
        }
        void RPC_UpdateCosmeticsWithTryonPacked(::BNM::Structures::Mono::Array<int>* currentItemsPacked, ::BNM::Structures::Mono::Array<int>* tryOnItemsPacked, bool playfx, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_UpdateCosmeticsWithTryonPacked"), {"currentItemsPacked", "tryOnItemsPacked", "playfx", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(currentItemsPacked, tryOnItemsPacked, playfx, info);
        }
        void RPC_UpdateNativeSize(float value, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_UpdateNativeSize"), {"value", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value, info);
        }
        void RPC_UpdateQuestScore(int score, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_UpdateQuestScore"), {"score", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(score, info);
        }
        void RPC_UpdateRankedInfo(float elo, int questRank, int PCRank, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_UpdateRankedInfo"), {"elo", "questRank", "PCRank", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(elo, questRank, PCRank, info);
        }
        template <typename TP0 = void*>
        void set_defaultName(TP0 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_defaultName"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        template <typename TP0 = void*>
        void set_nickName(TP0 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_nickName"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_tutorialComplete(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_tutorialComplete"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetupLoudSpeakerNetwork(::GlobalNamespace::RigContainer* rigContainer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetupLoudSpeakerNetwork"), {"rigContainer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rigContainer);
        }
        void UpdateCosmeticsWithTryonShared(::BNM::Structures::Mono::Array<int>* currentItems, ::BNM::Structures::Mono::Array<int>* tryOnItems, bool playfx, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateCosmeticsWithTryonShared"), {"currentItems", "tryOnItems", "playfx", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(currentItems, tryOnItems, playfx, info);
        }
        void UpdateNativeSizeShared(float value, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateNativeSizeShared"), {"value", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value, info);
        }
        void UpdateQuestScore(int score, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateQuestScore"), {"score", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(score, info);
        }
        void UpdateRankedInfo(float elo, int questRank, int PCRank, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateRankedInfo"), {"elo", "questRank", "PCRank", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(elo, questRank, PCRank, info);
        }
    };
}
