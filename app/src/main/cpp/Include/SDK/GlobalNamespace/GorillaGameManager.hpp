#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GorillaGameModes/GameModeType.hpp"
#include "../Photon_Pun/MonoBehaviourPunCallbacks.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct GorillaGameManager : ::Photon_Pun::MonoBehaviourPunCallbacks {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaGameManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* GAME_MODE_NONE_KEY = "GAME_MODE_NONE";
        static constexpr const char* GAME_MODE_CASUAL_ROOM_LABEL_KEY = "GAME_MODE_CASUAL_ROOM_LABEL";
        static constexpr const char* GAME_MODE_INFECTION_ROOM_LABEL_KEY = "GAME_MODE_INFECTION_ROOM_LABEL";
        static constexpr const char* GAME_MODE_HUNT_ROOM_LABEL_KEY = "GAME_MODE_HUNT_ROOM_LABEL";
        static constexpr const char* GAME_MODE_PAINTBRAWL_ROOM_LABEL_KEY = "GAME_MODE_PAINTBRAWL_ROOM_LABEL";
        static constexpr const char* GAME_MODE_SUPER_INFECTION_ROOM_LABEL_KEY = "GAME_MODE_SUPER_INFECTION_ROOM_LABEL";
        static constexpr const char* GAME_MODE_SUPER_CASUAL_ROOM_LABEL_KEY = "GAME_MODE_SUPER_CASUAL_ROOM_LABEL";
        static constexpr const char* GAME_MODE_NONE_ROOM_LABEL_KEY = "GAME_MODE_NONE_ROOM_LABEL";
        static constexpr const char* GAME_MODE_CUSTOM_ROOM_LABEL_KEY = "GAME_MODE_CUSTOM_ROOM_LABEL";
        static constexpr const char* GAME_MODE_GHOST_ROOM_LABEL_KEY = "GAME_MODE_GHOST_ROOM_LABEL";
        static constexpr const char* GAME_MODE_AMBUSH_ROOM_LABEL_KEY = "GAME_MODE_AMBUSH_ROOM_LABEL";
        static constexpr const char* GAME_MODE_FREEZE_TAG_ROOM_LABEL_KEY = "GAME_MODE_FREEZE_TAG_ROOM_LABEL";
        static constexpr const char* GAME_MODE_GUARDIAN_ROOM_LABEL_KEY = "GAME_MODE_GUARDIAN_ROOM_LABEL";
        static constexpr const char* GAME_MODE_PROP_HUNT_ROOM_LABEL_KEY = "GAME_MODE_PROP_HUNT_ROOM_LABEL";
        static constexpr const char* GAME_MODE_COMP_INF_ROOM_LABEL_KEY = "GAME_MODE_COMP_INF_ROOM_LABEL";
        static constexpr int k_defaultMatIndex = 0;
        ::GlobalNamespace::GorillaGameManager* GetInstance() {
            static BNM::Method<::GlobalNamespace::GorillaGameManager*> _method = GetClass().GetMethod(O("get_instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::GameModeSerializer* GetSerializer() {
            static BNM::Method<::GlobalNamespace::GameModeSerializer*> _method = GetClass().GetMethod(O("get_Serializer"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void add_OnTouch(::GlobalNamespace::GorillaGameManager_OnTouchDelegate* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnTouch"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnTouch(::GlobalNamespace::GorillaGameManager_OnTouchDelegate* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnTouch"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        ::BNM::Structures::Mono::String* GetGameModeName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_gameModeName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCheckCooldown() {
            static BNM::Field<float> _field = GetClass().GetField(O("checkCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::NetPlayer*>* GetCurrentNetPlayerArray() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::NetPlayer*>*> _field = GetClass().GetField(O("currentNetPlayerArray"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFastJumpLimit() {
            static BNM::Field<float> _field = GetClass().GetField(O("fastJumpLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFastJumpMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("fastJumpMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastCheck() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastCheck"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<int, int>* GetLastTaggedActorNr() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, int>*> _field = GetClass().GetField(O("lastTaggedActorNr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<>* GetOnInstanceReady() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("onInstanceReady"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<>* GetOnReplicatedClientReady() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("onReplicatedClientReady"));
            return _field.Get();
        }
        static ::GlobalNamespace::GorillaGameManager_OnTouchDelegate* GetOnTouch() {
            static BNM::Field<::GlobalNamespace::GorillaGameManager_OnTouchDelegate*> _field = GetClass().GetField(O("OnTouch"));
            return _field.Get();
        }
        int GetOutInt() {
            static BNM::Field<int> _field = GetClass().GetField(O("outInt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::NetPlayer* GetOutPlayer() {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("outPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<float>* GetPlayerSpeed() {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("playerSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static bool GetReplicatedClientReady() {
            static BNM::Field<bool> _field = GetClass().GetField(O("replicatedClientReady"));
            return _field.Get();
        }
        ::GlobalNamespace::GameModeSerializer* GetSerializer_f() {
            static BNM::Field<::GlobalNamespace::GameModeSerializer*> _field = GetClass().GetField(O("serializer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSlowJumpLimit() {
            static BNM::Field<float> _field = GetClass().GetField(O("slowJumpLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSlowJumpMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("slowJumpMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTagDistanceThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("tagDistanceThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetTempRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("tempRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetGameModeName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_gameModeName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCheckCooldown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("checkCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentNetPlayerArray(::BNM::Structures::Mono::Array<::GlobalNamespace::NetPlayer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::NetPlayer*>*> _field = GetClass().GetField(O("currentNetPlayerArray"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFastJumpLimit(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("fastJumpLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFastJumpMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("fastJumpMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastCheck(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastCheck"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastTaggedActorNr(::BNM::Structures::Mono::Dictionary<int, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, int>*> _field = GetClass().GetField(O("lastTaggedActorNr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetOnInstanceReady(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("onInstanceReady"));
            _field.Set(value);
        }
        static void SetOnReplicatedClientReady(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("onReplicatedClientReady"));
            _field.Set(value);
        }
        static void SetOnTouch(::GlobalNamespace::GorillaGameManager_OnTouchDelegate* value) {
            static BNM::Field<::GlobalNamespace::GorillaGameManager_OnTouchDelegate*> _field = GetClass().GetField(O("OnTouch"));
            _field.Set(value);
        }
        void SetOutInt(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("outInt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOutPlayer(::GlobalNamespace::NetPlayer* value) {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("outPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerSpeed(::BNM::Structures::Mono::Array<float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("playerSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetReplicatedClientReady(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("replicatedClientReady"));
            _field.Set(value);
        }
        void SetSerializer(::GlobalNamespace::GameModeSerializer* value) {
            static BNM::Field<::GlobalNamespace::GameModeSerializer*> _field = GetClass().GetField(O("serializer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlowJumpLimit(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("slowJumpLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlowJumpMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("slowJumpMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTagDistanceThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("tagDistanceThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTempRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("tempRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void add_OnTouch_1(::GlobalNamespace::GorillaGameManager_OnTouchDelegate* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnTouch"), {"value"});
            _m.Call(value);
        }
        void AddFusionDataBehaviour(::BNM::IL2CPP::Il2CppObject* behaviour) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddFusionDataBehaviour"), {"behaviour"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(behaviour);
        }
        void AddLastTagged(::GlobalNamespace::NetPlayer* taggedPlayer, ::GlobalNamespace::NetPlayer* taggingPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddLastTagged"), {"taggedPlayer", "taggingPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(taggedPlayer, taggingPlayer);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool CanAffectPlayer(::GlobalNamespace::NetPlayer* player, bool thisFrame) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanAffectPlayer"), {"player", "thisFrame"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player, thisFrame);
        }
        bool CanJoinFrienship(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanJoinFrienship"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player);
        }
        bool CanPlayerParticipate(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanPlayerParticipate"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player);
        }
        ::GlobalNamespace::VRRig* FindPlayerVRRig(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<::GlobalNamespace::VRRig*> _m = GetClass().GetMethod(O("FindPlayerVRRig"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player);
        }
        static void ForceStopGame_DisconnectAndDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ForceStopGame_DisconnectAndDestroy"));
            _m.Call();
        }
        static ::BNM::Structures::Mono::String* GameModeEnumToName(::GorillaGameModes::GameModeType gameMode) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GameModeEnumToName"), {"gameMode"});
            return _m.Call(gameMode);
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
        ::BNM::Structures::Mono::String* GameTypeName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GameTypeName"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static ::GlobalNamespace::GorillaGameManager* get_instance() {
            static BNM::Method<::GlobalNamespace::GorillaGameManager*> _m = GetClass().GetMethod(O("get_instance"));
            return _m.Call();
        }
        ::GlobalNamespace::GameModeSerializer* get_Serializer() {
            static BNM::Method<::GlobalNamespace::GameModeSerializer*> _m = GetClass().GetMethod(O("get_Serializer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void HandleHandTap(::GlobalNamespace::NetPlayer* tappingPlayer, ::GlobalNamespace::Tappable* hitTappable, bool leftHand, ::BNM::Structures::Unity::Vector3 handVelocity, ::BNM::Structures::Unity::Vector3 tapSurfaceNormal) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleHandTap"), {"tappingPlayer", "hitTappable", "leftHand", "handVelocity", "tapSurfaceNormal"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(tappingPlayer, hitTappable, leftHand, handVelocity, tapSurfaceNormal);
        }
        void HandleRoundComplete() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleRoundComplete"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void HandleTagBroadcast(::GlobalNamespace::NetPlayer* taggedPlayer, ::GlobalNamespace::NetPlayer* taggingPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleTagBroadcast"), {"taggedPlayer", "taggingPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(taggedPlayer, taggingPlayer);
        }
        void HandleTagBroadcast(::GlobalNamespace::NetPlayer* taggedPlayer, ::GlobalNamespace::NetPlayer* taggingPlayer, double tagTime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleTagBroadcast"), {"taggedPlayer", "taggingPlayer", "tagTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(taggedPlayer, taggingPlayer, tagTime);
        }
        void HitPlayer(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HitPlayer"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player);
        }
        void InfrequentUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InfrequentUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static bool IsPlayerBanned(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsPlayerBanned"), {"player"});
            return _m.Call(player);
        }
        static bool IsPlayerBanned(::Photon_Realtime::Player* player) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsPlayerBanned"), {"player"});
            return _m.Call(player);
        }
        static bool IsPlayerInitialized(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsPlayerInitialized"), {"player"});
            return _m.Call(player);
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
        ::BNM::Structures::Mono::Array<float>* LocalPlayerSpeed() {
            static BNM::Method<::BNM::Structures::Mono::Array<float>*> _m = GetClass().GetMethod(O("LocalPlayerSpeed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void LocalTag(::GlobalNamespace::NetPlayer* taggedPlayer, ::GlobalNamespace::NetPlayer* taggingPlayer, bool bodyHit, bool leftHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LocalTag"), {"taggedPlayer", "taggingPlayer", "bodyHit", "leftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(taggedPlayer, taggingPlayer, bodyHit, leftHand);
        }
        int MyMatIndex(::GlobalNamespace::NetPlayer* forPlayer) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("MyMatIndex"), {"forPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(forPlayer);
        }
        void NetworkLinkDestroyed(::GlobalNamespace::GameModeSerializer* netSerializer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NetworkLinkDestroyed"), {"netSerializer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(netSerializer);
        }
        void NetworkLinkSetup(::GlobalNamespace::GameModeSerializer* netSerializer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NetworkLinkSetup"), {"netSerializer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(netSerializer);
        }
        void NewVRRig(::GlobalNamespace::NetPlayer* player, int vrrigPhotonViewID, bool didTutorial) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NewVRRig"), {"player", "vrrigPhotonViewID", "didTutorial"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player, vrrigPhotonViewID, didTutorial);
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
        static void OnInstanceReady(::BNM::Structures::Mono::Action<>* action) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnInstanceReady"), {"action"});
            _m.Call(action);
        }
        void OnMasterClientSwitched(::Photon_Realtime::Player* newMaster) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnMasterClientSwitched"), {"newMaster"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newMaster);
        }
        void OnMasterClientSwitched(::GlobalNamespace::NetPlayer* newMaster) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnMasterClientSwitched"), {"newMaster"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newMaster);
        }
        void OnPlayerEnteredRoom(::GlobalNamespace::NetPlayer* newPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerEnteredRoom"), {"newPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newPlayer);
        }
        void OnPlayerLeftRoom(::GlobalNamespace::NetPlayer* otherPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerLeftRoom"), {"otherPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(otherPlayer);
        }
        void OnPlayerPropertiesUpdate(::Photon_Realtime::Player* targetPlayer, ::ExitGames_Client_Photon::Hashtable* changedProps) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerPropertiesUpdate"), {"targetPlayer", "changedProps"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(targetPlayer, changedProps);
        }
        static void OnReplicatedClientReady(::BNM::Structures::Mono::Action<>* action) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnReplicatedClientReady"), {"action"});
            _m.Call(action);
        }
        void OnRoomPropertiesUpdate(::ExitGames_Client_Photon::Hashtable* propertiesThatChanged) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnRoomPropertiesUpdate"), {"propertiesThatChanged"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(propertiesThatChanged);
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
        void ReadLastTagged(::Photon_Pun::PhotonStream* stream) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReadLastTagged"), {"stream"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream);
        }
        static void remove_OnTouch_1(::GlobalNamespace::GorillaGameManager_OnTouchDelegate* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnTouch"), {"value"});
            _m.Call(value);
        }
        static void ReplicatedClientReady() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReplicatedClientReady"));
            _m.Call();
        }
        void ReportTag(::GlobalNamespace::NetPlayer* taggedPlayer, ::GlobalNamespace::NetPlayer* taggingPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReportTag"), {"taggedPlayer", "taggingPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(taggedPlayer, taggingPlayer);
        }
        void ResetGame() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetGame"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int SpecialHandFX(::GlobalNamespace::NetPlayer* player, ::GlobalNamespace::RigContainer* rigContainer) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("SpecialHandFX"), {"player", "rigContainer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player, rigContainer);
        }
        void StartPlaying() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartPlaying"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static ::GlobalNamespace::VRRig* StaticFindRigForPlayer(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<::GlobalNamespace::VRRig*> _m = GetClass().GetMethod(O("StaticFindRigForPlayer"), {"player"});
            return _m.Call(player);
        }
        void StopPlaying() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StopPlaying"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdatePlayerAppearance(::GlobalNamespace::VRRig* rig) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdatePlayerAppearance"), {"rig"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rig);
        }
        bool ValidGameMode() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ValidGameMode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void WriteLastTagged(::Photon_Pun::PhotonStream* stream) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteLastTagged"), {"stream"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream);
        }
    };
}
