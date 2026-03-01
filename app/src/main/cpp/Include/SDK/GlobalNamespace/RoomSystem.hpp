#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GTZone.hpp"
#include "PhotonMessageInfoWrapped.hpp"
#include "PlayerEffect.hpp"
#include "RoomSystem_PlayerEffectConfig.hpp"
#include "RoomSystem_ProjectileSource.hpp"
#include "RoomSystem_SoundEffect.hpp"
#include "RoomSystem_StatusEffects.hpp"
#include "../GorillaGameModes/GameModeType.hpp"

namespace GlobalNamespace {
    struct RoomSystem : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "RoomSystem");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetAmITheHost() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_AmITheHost"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GorillaNetworking::GorillaNetworkJoinTrigger* GetInitialJoinTrigger() {
            static BNM::Method<::GorillaNetworking::GorillaNetworkJoinTrigger*> _method = GetClass().GetMethod(O("get_InitialJoinTrigger"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetInitialJoinTrigger(::GorillaNetworking::GorillaNetworkJoinTrigger* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_InitialJoinTrigger"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsVStumpRoom() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsVStumpRoom"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsVStumpRoom(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_IsVStumpRoom"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetJoinedRoom() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_JoinedRoom"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>* GetPlayersInRoom() {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>*> _method = GetClass().GetMethod(O("get_PlayersInRoom"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetRoomGameMode() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_RoomGameMode"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        uint8_t GetRoomSizeOverride() {
            static BNM::Method<uint8_t> _method = GetClass().GetMethod(O("get_RoomSizeOverride"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetRoomSizeOverride(uint8_t value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_RoomSizeOverride"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        uint8_t GetRoomSizeReduction() {
            static BNM::Method<uint8_t> _method = GetClass().GetMethod(O("get_RoomSizeReduction"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetRoomSizeReduction(uint8_t value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_RoomSizeReduction"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetUseRoomSizeOverride() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_UseRoomSizeOverride"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetUseRoomSizeOverride(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_UseRoomSizeOverride"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetWasRoomPrivate() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_WasRoomPrivate"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetWasRoomPrivate(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_WasRoomPrivate"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetWasRoomSubscription() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_WasRoomSubscription"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetWasRoomSubscription(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_WasRoomSubscription"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        static ::GlobalNamespace::RoomSystemSettings* GetRoomSettings() {
            static BNM::Field<::GlobalNamespace::RoomSystemSettings*> _field = GetClass().GetField(O("__roomSettings"));
            return _field.Get();
        }
        static ::GlobalNamespace::RoomSystem* GetCallbackInstance() {
            static BNM::Field<::GlobalNamespace::RoomSystem*> _field = GetClass().GetField(O("callbackInstance"));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetDisconnectTimer() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("disconnectTimer"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<void*>* GetGroupJoinSendData() {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("groupJoinSendData"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<int>* GetHashValues() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("hashValues"));
            return _field.Get();
        }
        static ::GlobalNamespace::CallLimiter* GetHitPlayerCallLimiter() {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("hitPlayerCallLimiter"));
            return _field.Get();
        }
        static ::GlobalNamespace::RoomSystem_ImpactFxContainer* GetImpactEffect() {
            static BNM::Field<::GlobalNamespace::RoomSystem_ImpactFxContainer*> _field = GetClass().GetField(O("impactEffect"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<void*>* GetImpactSendData() {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("impactSendData"));
            return _field.Get();
        }
        static bool GetJoinedRoom_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("joinedRoom"));
            return _field.Get();
        }
        static ::GorillaTag::DelegateListProcessor* GetJoinedRoomEvent() {
            static BNM::Field<::GorillaTag::DelegateListProcessor*> _field = GetClass().GetField(O("JoinedRoomEvent"));
            return _field.Get();
        }
        static ::GlobalNamespace::RoomSystem_LaunchProjectileContainer* GetLaunchProjectile() {
            static BNM::Field<::GlobalNamespace::RoomSystem_LaunchProjectileContainer*> _field = GetClass().GetField(O("launchProjectile"));
            return _field.Get();
        }
        static ::GorillaTag::DelegateListProcessor* GetLeftRoomEvent() {
            static BNM::Field<::GorillaTag::DelegateListProcessor*> _field = GetClass().GetField(O("LeftRoomEvent"));
            return _field.Get();
        }
        static uint8_t GetMRoomSizeOnJoin() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("m_roomSizeOnJoin"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<uint8_t, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::Array<void*>*, ::GlobalNamespace::PhotonMessageInfoWrapped>*>* GetNetEventCallbacks() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<uint8_t, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::Array<void*>*, ::GlobalNamespace::PhotonMessageInfoWrapped>*>*> _field = GetClass().GetField(O("netEventCallbacks"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>* GetNetPlayersInRoom() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>*> _field = GetClass().GetField(O("netPlayersInRoom"));
            return _field.Get();
        }
        static void* GetPlayerBanned() {
            static BNM::Field<void*> _field = GetClass().GetField(O("playerBanned"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<void*>* GetPlayerEffectData() {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("playerEffectData"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::PlayerEffect, ::GlobalNamespace::RoomSystem_PlayerEffectConfig>* GetPlayerEffectDictionary() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::PlayerEffect, ::GlobalNamespace::RoomSystem_PlayerEffectConfig>*> _field = GetClass().GetField(O("playerEffectDictionary"));
            return _field.Get();
        }
        static ::GameObject* GetPlayerImpactEffectPrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("playerImpactEffectPrefab"));
            return _field.Get();
        }
        static ::GlobalNamespace::CallLimiter* GetPlayerLaunchedCallLimiter() {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("playerLaunchedCallLimiter"));
            return _field.Get();
        }
        static ::GorillaTag::DelegateListProcessor* GetPlayersChangedEvent() {
            static BNM::Field<::GorillaTag::DelegateListProcessor*> _field = GetClass().GetField(O("PlayersChangedEvent"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*>* GetPlayerTouchedCallback() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*>*> _field = GetClass().GetField(O("playerTouchedCallback"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GameObject*>* GetPrefabsInstantiated() {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("prefabsInstantiated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GameObject*>* GetPrefabsToInstantiate() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("prefabsToInstantiate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetPrefabsToInstantiateByPath() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("prefabsToInstantiateByPath"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<void*>* GetProjectileSendData() {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("projectileSendData"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<void*>* GetReportHitSendData() {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("reportHitSendData"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<void*>* GetReportTouchSendData() {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("reportTouchSendData"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetRoomGameMode_f() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("roomGameMode"));
            return _field.Get();
        }
        ::GlobalNamespace::RoomSystemSettings* GetRoomSettings_f() {
            static BNM::Field<::GlobalNamespace::RoomSystemSettings*> _field = GetClass().GetField(O("roomSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::Photon_Pun::PhotonView*>* GetSceneViews() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Photon_Pun::PhotonView*>*> _field = GetClass().GetField(O("sceneViews"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<void*>* GetSendEventData() {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("sendEventData"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<void*>* GetSendSoundDataOther() {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("sendSoundDataOther"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<::GlobalNamespace::RoomSystem_SoundEffect, ::GlobalNamespace::NetPlayer*>* GetSoundEffectCallback() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::RoomSystem_SoundEffect, ::GlobalNamespace::NetPlayer*>*> _field = GetClass().GetField(O("soundEffectCallback"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<void*>* GetSoundSendData() {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("soundSendData"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<::GlobalNamespace::RoomSystem_StatusEffects>* GetStatusEffectCallback() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::RoomSystem_StatusEffects>*> _field = GetClass().GetField(O("statusEffectCallback"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<void*>* GetStatusSendData() {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("statusSendData"));
            return _field.Get();
        }
        static void SetRoomSettings(::GlobalNamespace::RoomSystemSettings* value) {
            static BNM::Field<::GlobalNamespace::RoomSystemSettings*> _field = GetClass().GetField(O("__roomSettings"));
            _field.Set(value);
        }
        static void SetCallbackInstance(::GlobalNamespace::RoomSystem* value) {
            static BNM::Field<::GlobalNamespace::RoomSystem*> _field = GetClass().GetField(O("callbackInstance"));
            _field.Set(value);
        }
        static void SetDisconnectTimer(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("disconnectTimer"));
            _field.Set(value);
        }
        static void SetHitPlayerCallLimiter(::GlobalNamespace::CallLimiter* value) {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("hitPlayerCallLimiter"));
            _field.Set(value);
        }
        static void SetImpactEffect(::GlobalNamespace::RoomSystem_ImpactFxContainer* value) {
            static BNM::Field<::GlobalNamespace::RoomSystem_ImpactFxContainer*> _field = GetClass().GetField(O("impactEffect"));
            _field.Set(value);
        }
        static void SetJoinedRoom(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("joinedRoom"));
            _field.Set(value);
        }
        static void SetJoinedRoomEvent(::GorillaTag::DelegateListProcessor* value) {
            static BNM::Field<::GorillaTag::DelegateListProcessor*> _field = GetClass().GetField(O("JoinedRoomEvent"));
            _field.Set(value);
        }
        static void SetLaunchProjectile(::GlobalNamespace::RoomSystem_LaunchProjectileContainer* value) {
            static BNM::Field<::GlobalNamespace::RoomSystem_LaunchProjectileContainer*> _field = GetClass().GetField(O("launchProjectile"));
            _field.Set(value);
        }
        static void SetLeftRoomEvent(::GorillaTag::DelegateListProcessor* value) {
            static BNM::Field<::GorillaTag::DelegateListProcessor*> _field = GetClass().GetField(O("LeftRoomEvent"));
            _field.Set(value);
        }
        static void SetMRoomSizeOnJoin(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("m_roomSizeOnJoin"));
            _field.Set(value);
        }
        static void SetNetPlayersInRoom(::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>*> _field = GetClass().GetField(O("netPlayersInRoom"));
            _field.Set(value);
        }
        static void SetPlayerBanned(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("playerBanned"));
            _field.Set(value);
        }
        static void SetPlayerEffectData(::BNM::Structures::Mono::Array<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("playerEffectData"));
            _field.Set(value);
        }
        static void SetPlayerEffectDictionary(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::PlayerEffect, ::GlobalNamespace::RoomSystem_PlayerEffectConfig>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::PlayerEffect, ::GlobalNamespace::RoomSystem_PlayerEffectConfig>*> _field = GetClass().GetField(O("playerEffectDictionary"));
            _field.Set(value);
        }
        static void SetPlayerImpactEffectPrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("playerImpactEffectPrefab"));
            _field.Set(value);
        }
        static void SetPlayerLaunchedCallLimiter(::GlobalNamespace::CallLimiter* value) {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("playerLaunchedCallLimiter"));
            _field.Set(value);
        }
        static void SetPlayersChangedEvent(::GorillaTag::DelegateListProcessor* value) {
            static BNM::Field<::GorillaTag::DelegateListProcessor*> _field = GetClass().GetField(O("PlayersChangedEvent"));
            _field.Set(value);
        }
        static void SetPlayerTouchedCallback(::BNM::Structures::Mono::Action<::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*>*> _field = GetClass().GetField(O("playerTouchedCallback"));
            _field.Set(value);
        }
        void SetPrefabsInstantiated(::BNM::Structures::Mono::List<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("prefabsInstantiated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrefabsToInstantiate(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("prefabsToInstantiate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrefabsToInstantiateByPath(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("prefabsToInstantiateByPath"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetRoomGameMode(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("roomGameMode"));
            _field.Set(value);
        }
        void SetRoomSettings_fs(::GlobalNamespace::RoomSystemSettings* value) {
            static BNM::Field<::GlobalNamespace::RoomSystemSettings*> _field = GetClass().GetField(O("roomSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetSceneViews(::BNM::Structures::Mono::Array<::Photon_Pun::PhotonView*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Photon_Pun::PhotonView*>*> _field = GetClass().GetField(O("sceneViews"));
            _field.Set(value);
        }
        static void SetSendSoundDataOther(::BNM::Structures::Mono::Array<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("sendSoundDataOther"));
            _field.Set(value);
        }
        static void SetSoundEffectCallback(::BNM::Structures::Mono::Action<::GlobalNamespace::RoomSystem_SoundEffect, ::GlobalNamespace::NetPlayer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::RoomSystem_SoundEffect, ::GlobalNamespace::NetPlayer*>*> _field = GetClass().GetField(O("soundEffectCallback"));
            _field.Set(value);
        }
        static void SetSoundSendData(::BNM::Structures::Mono::Array<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("soundSendData"));
            _field.Set(value);
        }
        static void SetStatusEffectCallback(::BNM::Structures::Mono::Action<::GlobalNamespace::RoomSystem_StatusEffects>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::RoomSystem_StatusEffects>*> _field = GetClass().GetField(O("statusEffectCallback"));
            _field.Set(value);
        }
        static void SetStatusSendData(::BNM::Structures::Mono::Array<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("statusSendData"));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static bool CheckPlayerBanned(::GlobalNamespace::NetPlayer* player, ::BNM::Structures::Mono::String*& cosmeticString) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckPlayerBanned"), {"player", "cosmeticString"});
            return _m.Call(player, &cosmeticString);
        }
        static bool CheckPlayerBanned(int player, ::BNM::Structures::Mono::String*& cosmeticString) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckPlayerBanned"), {"player", "cosmeticString"});
            return _m.Call(player, &cosmeticString);
        }
        static void ClearOverridenRoomSize() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearOverridenRoomSize"));
            _m.Call();
        }
        static void DeserializeImpactEffect(::BNM::Structures::Mono::Array<void*>* impactData, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeserializeImpactEffect"), {"impactData", "info"});
            _m.Call(impactData, info);
        }
        static void DeserializeLaunchProjectile(::BNM::Structures::Mono::Array<void*>* projectileData, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeserializeLaunchProjectile"), {"projectileData", "info"});
            _m.Call(projectileData, info);
        }
        static void DeserializePlayerEffect(::BNM::Structures::Mono::Array<void*>* data, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeserializePlayerEffect"), {"data", "info"});
            _m.Call(data, info);
        }
        static void DeserializePlayerHit(::BNM::Structures::Mono::Array<void*>* data, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeserializePlayerHit"), {"data", "info"});
            _m.Call(data, info);
        }
        static void DeserializePlayerLaunched(::BNM::Structures::Mono::Array<void*>* data, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeserializePlayerLaunched"), {"data", "info"});
            _m.Call(data, info);
        }
        static void DeserializeReportTouch(::BNM::Structures::Mono::Array<void*>* data, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeserializeReportTouch"), {"data", "info"});
            _m.Call(data, info);
        }
        static void DeserializeSoundEffect(::BNM::Structures::Mono::Array<void*>* data, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeserializeSoundEffect"), {"data", "info"});
            _m.Call(data, info);
        }
        static void DeserializeStatusEffect(::BNM::Structures::Mono::Array<void*>* data, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeserializeStatusEffect"), {"data", "info"});
            _m.Call(data, info);
        }
        static bool get_AmITheHost() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_AmITheHost"));
            return _m.Call();
        }
        static ::GorillaNetworking::GorillaNetworkJoinTrigger* get_InitialJoinTrigger() {
            static BNM::Method<::GorillaNetworking::GorillaNetworkJoinTrigger*> _m = GetClass().GetMethod(O("get_InitialJoinTrigger"));
            return _m.Call();
        }
        static bool get_IsVStumpRoom() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsVStumpRoom"));
            return _m.Call();
        }
        static bool get_JoinedRoom() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_JoinedRoom"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>* get_PlayersInRoom() {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>*> _m = GetClass().GetMethod(O("get_PlayersInRoom"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_RoomGameMode() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_RoomGameMode"));
            return _m.Call();
        }
        static uint8_t get_RoomSizeOverride() {
            static BNM::Method<uint8_t> _m = GetClass().GetMethod(O("get_RoomSizeOverride"));
            return _m.Call();
        }
        static uint8_t get_RoomSizeReduction() {
            static BNM::Method<uint8_t> _m = GetClass().GetMethod(O("get_RoomSizeReduction"));
            return _m.Call();
        }
        static bool get_UseRoomSizeOverride() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_UseRoomSizeOverride"));
            return _m.Call();
        }
        static bool get_WasRoomPrivate() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_WasRoomPrivate"));
            return _m.Call();
        }
        static bool get_WasRoomSubscription() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_WasRoomSubscription"));
            return _m.Call();
        }
        static uint8_t GetCurrentRoomExpectedSize() {
            static BNM::Method<uint8_t> _m = GetClass().GetMethod(O("GetCurrentRoomExpectedSize"));
            return _m.Call();
        }
        static ::GlobalNamespace::NetPlayer* GetLowestActorNumberPlayer() {
            static BNM::Method<::GlobalNamespace::NetPlayer*> _m = GetClass().GetMethod(O("GetLowestActorNumberPlayer"));
            return _m.Call();
        }
        static uint8_t GetMaxRoomSize() {
            static BNM::Method<uint8_t> _m = GetClass().GetMethod(O("GetMaxRoomSize"));
            return _m.Call();
        }
        static uint8_t GetOverridenRoomSize() {
            static BNM::Method<uint8_t> _m = GetClass().GetMethod(O("GetOverridenRoomSize"));
            return _m.Call();
        }
        static uint8_t GetRoomSizeForCreate(::GlobalNamespace::GTZone zone, ::GorillaGameModes::GameModeType mode, bool privateRoom, bool sub) {
            static BNM::Method<uint8_t> _m = GetClass().GetMethod(O("GetRoomSizeForCreate"), {"zone", "mode", "privateRoom", "sub"});
            return _m.Call(zone, mode, privateRoom, sub);
        }
        static void HitPlayer(::GlobalNamespace::NetPlayer* player, ::BNM::Structures::Unity::Vector3 direction, float strength) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HitPlayer"), {"player", "direction", "strength"});
            _m.Call(player, direction, strength);
        }
        static void ImpactEffect(::GlobalNamespace::VRRig* targetRig, ::BNM::Structures::Unity::Vector3 position, float r, float g, float b, float a, int projectileCount, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ImpactEffect"), {"targetRig", "position", "r", "g", "b", "a", "projectileCount", "info"});
            _m.Call(targetRig, position, r, g, b, a, projectileCount, info);
        }
        static bool IsPlayerBanned(::GlobalNamespace::NetPlayer* netPlayer) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsPlayerBanned"), {"netPlayer"});
            return _m.Call(netPlayer);
        }
        static bool IsPlayerBanned(int player) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsPlayerBanned"), {"player"});
            return _m.Call(player);
        }
        static void LaunchPlayer(::GlobalNamespace::NetPlayer* player, ::BNM::Structures::Unity::Vector3 velocity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LaunchPlayer"), {"player", "velocity"});
            _m.Call(player, velocity);
        }
        static void MakeRoomMultiplayer(uint8_t roomSize) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MakeRoomMultiplayer"), {"roomSize"});
            _m.Call(roomSize);
        }
        void OnApplicationPause(bool paused) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnApplicationPause"), {"paused"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(paused);
        }
        static void OnEvent(::ExitGames_Client_Photon::EventData* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEvent"), {"data"});
            _m.Call(data);
        }
        template <typename TP1 = void*>
        static void OnEvent(uint8_t code, TP1 data, int source) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEvent"), {"code", "data", "source"});
            _m.Call(code, data, source);
        }
        void OnJoinedRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnJoinedRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnLeftRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLeftRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void OnPlayerEffect(::GlobalNamespace::PlayerEffect effect, ::GlobalNamespace::NetPlayer* target) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerEffect"), {"effect", "target"});
            _m.Call(effect, target);
        }
        void OnPlayerEnteredRoom(::GlobalNamespace::NetPlayer* newPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerEnteredRoom"), {"newPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newPlayer);
        }
        void OnPlayerLeftRoom(::GlobalNamespace::NetPlayer* netPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerLeftRoom"), {"netPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(netPlayer);
        }
        static void OnPlaySoundEffect(::GlobalNamespace::RoomSystem_SoundEffect sound, ::GlobalNamespace::NetPlayer* target) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlaySoundEffect"), {"sound", "target"});
            _m.Call(sound, target);
        }
        static void OnStatusEffect(::GlobalNamespace::RoomSystem_StatusEffects status) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnStatusEffect"), {"status"});
            _m.Call(status);
        }
        static void OverrideRoomSize(uint8_t size) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OverrideRoomSize"), {"size"});
            _m.Call(size);
        }
        static void PlaySoundEffect(int soundIndex, float soundVolume, bool stopCurrentAudio) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlaySoundEffect"), {"soundIndex", "soundVolume", "stopCurrentAudio"});
            _m.Call(soundIndex, soundVolume, stopCurrentAudio);
        }
        static void PlaySoundEffect(int soundIndex, float soundVolume, bool stopCurrentAudio, ::GlobalNamespace::NetPlayer* target) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlaySoundEffect"), {"soundIndex", "soundVolume", "stopCurrentAudio", "target"});
            _m.Call(soundIndex, soundVolume, stopCurrentAudio, target);
        }
        static void SearchForElevator(::BNM::Structures::Mono::Array<void*>* shuffleData, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SearchForElevator"), {"shuffleData", "info"});
            _m.Call(shuffleData, info);
        }
        static void SearchForNearby(::BNM::Structures::Mono::Array<void*>* shuffleData, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SearchForNearby"), {"shuffleData", "info"});
            _m.Call(shuffleData, info);
        }
        static void SearchForParty(::BNM::Structures::Mono::Array<void*>* shuffleData, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SearchForParty"), {"shuffleData", "info"});
            _m.Call(shuffleData, info);
        }
        static void SearchForShuttle(::BNM::Structures::Mono::Array<void*>* shuffleData, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SearchForShuttle"), {"shuffleData", "info"});
            _m.Call(shuffleData, info);
        }
        static void SendElevatorFollowCommand(::BNM::Structures::Mono::String* shuffler, ::BNM::Structures::Mono::String* keyStr, ::GlobalNamespace::GorillaFriendCollider* sourceFriendCollider, ::GlobalNamespace::GorillaFriendCollider* targetFriendCollider) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendElevatorFollowCommand"), {"shuffler", "keyStr", "sourceFriendCollider", "targetFriendCollider"});
            _m.Call(shuffler, keyStr, sourceFriendCollider, targetFriendCollider);
        }
        static void SendEvent(uint8_t& code, void*& evData, ::GlobalNamespace::NetPlayer*& target, bool reliable) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendEvent"), {"code", "evData", "target", "reliable"});
            _m.Call(&code, &evData, &target, reliable);
        }
        static void SendEvent(uint8_t& code, void*& evData, ::GlobalNamespace::NetEventOptions*& neo, bool reliable) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendEvent"), {"code", "evData", "neo", "reliable"});
            _m.Call(&code, &evData, &neo, reliable);
        }
        static void SendGroupJoinFollowCommand(uint8_t eventType, ::BNM::Structures::Mono::String* shuffler, ::BNM::Structures::Mono::String* keyStr, ::GlobalNamespace::GorillaFriendCollider* sourceFriendCollider, ::GlobalNamespace::GorillaFriendCollider* targetFriendCollider) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendGroupJoinFollowCommand"), {"eventType", "shuffler", "keyStr", "sourceFriendCollider", "targetFriendCollider"});
            _m.Call(eventType, shuffler, keyStr, sourceFriendCollider, targetFriendCollider);
        }
        static void SendImpactEffect(::BNM::Structures::Unity::Vector3 position, float r, float g, float b, float a, int projectileCount) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendImpactEffect"), {"position", "r", "g", "b", "a", "projectileCount"});
            _m.Call(position, r, g, b, a, projectileCount);
        }
        static void SendLaunchProjectile(::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Vector3 velocity, ::GlobalNamespace::RoomSystem_ProjectileSource projectileSource, int projectileCount, bool randomColour, uint8_t r, uint8_t g, uint8_t b, uint8_t a) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendLaunchProjectile"), {"position", "velocity", "projectileSource", "projectileCount", "randomColour", "r", "g", "b", "a"});
            _m.Call(position, velocity, projectileSource, projectileCount, randomColour, r, g, b, a);
        }
        static void SendNearbyFollowCommand(::GlobalNamespace::GorillaFriendCollider* friendCollider, ::BNM::Structures::Mono::String* shuffler, ::BNM::Structures::Mono::String* keyStr) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendNearbyFollowCommand"), {"friendCollider", "shuffler", "keyStr"});
            _m.Call(friendCollider, shuffler, keyStr);
        }
        static void SendPartyFollowCommand(::BNM::Structures::Mono::String* shuffler, ::BNM::Structures::Mono::String* keyStr) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendPartyFollowCommand"), {"shuffler", "keyStr"});
            _m.Call(shuffler, keyStr);
        }
        static void SendPlayerEffect(::GlobalNamespace::PlayerEffect effect, ::GlobalNamespace::NetPlayer* target) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendPlayerEffect"), {"effect", "target"});
            _m.Call(effect, target);
        }
        static void SendReportTouch(::GlobalNamespace::NetPlayer* touchedNetPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendReportTouch"), {"touchedNetPlayer"});
            _m.Call(touchedNetPlayer);
        }
        static void SendShuttleFollowCommand(::BNM::Structures::Mono::String* shuffler, ::BNM::Structures::Mono::String* keyStr, ::GlobalNamespace::GorillaFriendCollider* sourceFriendCollider, ::GlobalNamespace::GorillaFriendCollider* targetFriendCollider) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendShuttleFollowCommand"), {"shuffler", "keyStr", "sourceFriendCollider", "targetFriendCollider"});
            _m.Call(shuffler, keyStr, sourceFriendCollider, targetFriendCollider);
        }
        static void SendSoundEffectAll(::GlobalNamespace::RoomSystem_SoundEffect sound) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendSoundEffectAll"), {"sound"});
            _m.Call(sound);
        }
        static void SendSoundEffectAll(int soundIndex, float soundVolume, bool stopCurrentAudio) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendSoundEffectAll"), {"soundIndex", "soundVolume", "stopCurrentAudio"});
            _m.Call(soundIndex, soundVolume, stopCurrentAudio);
        }
        static void SendSoundEffectOnOther(::GlobalNamespace::RoomSystem_SoundEffect sound, ::GlobalNamespace::NetPlayer* target) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendSoundEffectOnOther"), {"sound", "target"});
            _m.Call(sound, target);
        }
        static void SendSoundEffectOnOther(int soundIndex, float soundvolume, ::GlobalNamespace::NetPlayer* target, bool stopCurrentAudio) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendSoundEffectOnOther"), {"soundIndex", "soundvolume", "target", "stopCurrentAudio"});
            _m.Call(soundIndex, soundvolume, target, stopCurrentAudio);
        }
        static void SendSoundEffectToPlayer(::GlobalNamespace::RoomSystem_SoundEffect sound, ::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendSoundEffectToPlayer"), {"sound", "player"});
            _m.Call(sound, player);
        }
        static void SendSoundEffectToPlayer(int soundIndex, float soundVolume, ::GlobalNamespace::NetPlayer* player, bool stopCurrentAudio) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendSoundEffectToPlayer"), {"soundIndex", "soundVolume", "player", "stopCurrentAudio"});
            _m.Call(soundIndex, soundVolume, player, stopCurrentAudio);
        }
        static void SendStatusEffectAll(::GlobalNamespace::RoomSystem_StatusEffects status) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendStatusEffectAll"), {"status"});
            _m.Call(status);
        }
        static void SendStatusEffectToPlayer(::GlobalNamespace::RoomSystem_StatusEffects status, ::GlobalNamespace::NetPlayer* target) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendStatusEffectToPlayer"), {"status", "target"});
            _m.Call(status, target);
        }
        static void set_InitialJoinTrigger(::GorillaNetworking::GorillaNetworkJoinTrigger* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_InitialJoinTrigger"), {"value"});
            _m.Call(value);
        }
        static void set_IsVStumpRoom(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_IsVStumpRoom"), {"value"});
            _m.Call(value);
        }
        static void set_RoomSizeOverride(uint8_t value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_RoomSizeOverride"), {"value"});
            _m.Call(value);
        }
        static void set_RoomSizeReduction(uint8_t value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_RoomSizeReduction"), {"value"});
            _m.Call(value);
        }
        static void set_UseRoomSizeOverride(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_UseRoomSizeOverride"), {"value"});
            _m.Call(value);
        }
        static void set_WasRoomPrivate(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_WasRoomPrivate"), {"value"});
            _m.Call(value);
        }
        static void set_WasRoomSubscription(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_WasRoomSubscription"), {"value"});
            _m.Call(value);
        }
        static void SetFrozenTime() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetFrozenTime"));
            _m.Call();
        }
        static void SetJoinedTaggedTime() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetJoinedTaggedTime"));
            _m.Call();
        }
        static void SetSlowedTime() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetSlowedTime"));
            _m.Call();
        }
        static void SetTaggedTime() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetTaggedTime"));
            _m.Call();
        }
        static void SetUntaggedTime() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetUntaggedTime"));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void StaticLoad() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StaticLoad"));
            _m.Call();
        }
        template <typename TP0 = void*>
        static void TimerDC(TP0 sender, ::BNM::IL2CPP::Il2CppObject* args) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TimerDC"), {"sender", "args"});
            _m.Call(sender, args);
        }
    };
}
