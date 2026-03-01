#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GameModeType.hpp"

namespace GorillaGameModes {
    struct GameMode : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaGameModes", "GameMode");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GorillaGameModes::GameMode* GetInstance() {
            static BNM::Field<::GorillaGameModes::GameMode*> field = GetClass().GetField("instance");
            return field.Get();
        }
        ::GlobalNamespace::GorillaGameManager* GetActiveGameMode() {
            static BNM::Method<::GlobalNamespace::GorillaGameManager*> _method = GetClass().GetMethod(O("get_ActiveGameMode"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::GameModeSerializer* GetActiveNetworkHandler() {
            static BNM::Method<::GlobalNamespace::GameModeSerializer*> _method = GetClass().GetMethod(O("get_ActiveNetworkHandler"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetCurrentGameModeFlag() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_CurrentGameModeFlag"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GorillaGameModes::GameModeType GetCurrentGameModeType() {
            static BNM::Method<::GorillaGameModes::GameModeType> _method = GetClass().GetMethod(O("get_CurrentGameModeType"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCurrentGameModeType(::GorillaGameModes::GameModeType value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_CurrentGameModeType"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GorillaGameModes::GameModeZoneMapping* GetGameModeZoneMapping() {
            static BNM::Method<::GorillaGameModes::GameModeZoneMapping*> _method = GetClass().GetMethod(O("get_GameModeZoneMapping"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>* GetParticipatingPlayers() {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>*> _method = GetClass().GetMethod(O("get_ParticipatingPlayers"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void add_OnStartGameMode(::GorillaGameModes::GameMode_OnStartGameModeAction* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnStartGameMode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnStartGameMode(::GorillaGameModes::GameMode_OnStartGameModeAction* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnStartGameMode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_ParticipatingPlayersChanged(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>*, ::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_ParticipatingPlayersChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_ParticipatingPlayersChanged(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>*, ::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_ParticipatingPlayersChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        static ::BNM::Structures::Mono::Array<::GlobalNamespace::NetPlayer*>* GetOldPlayersBuffer() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::NetPlayer*>*> _field = GetClass().GetField(O("_oldPlayersBuffer"));
            return _field.Get();
        }
        static int GetOldPlayersCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("_oldPlayersCount"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>* GetParticipatingPlayers_f() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>*> _field = GetClass().GetField(O("_participatingPlayers"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>* GetTempAddedPlayers() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>*> _field = GetClass().GetField(O("_tempAddedPlayers"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>* GetTempRemovedPlayers() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>*> _field = GetClass().GetField(O("_tempRemovedPlayers"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::GorillaGameManager*>* GetActivatedGameModes() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GorillaGameManager*>*> _field = GetClass().GetField(O("activatedGameModes"));
            return _field.Get();
        }
        static ::GlobalNamespace::GorillaGameManager* GetActiveGameMode_f() {
            static BNM::Field<::GlobalNamespace::GorillaGameManager*> _field = GetClass().GetField(O("activeGameMode"));
            return _field.Get();
        }
        static ::GlobalNamespace::GameModeSerializer* GetActiveNetworkHandler_f() {
            static BNM::Field<::GlobalNamespace::GameModeSerializer*> _field = GetClass().GetField(O("activeNetworkHandler"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::FusionGameModeData*>* GetFusionTypeTable() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::FusionGameModeData*>*> _field = GetClass().GetField(O("fusionTypeTable"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, int>* GetGameModeKeyByName() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, int>*> _field = GetClass().GetField(O("gameModeKeyByName"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* GetGameModeNames() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("gameModeNames"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::GorillaGameManager*>* GetGameModes() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GorillaGameManager*>*> _field = GetClass().GetField(O("gameModes"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::GorillaGameManager*>* GetGameModeTable() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::GorillaGameManager*>*> _field = GetClass().GetField(O("gameModeTable"));
            return _field.Get();
        }
        ::GorillaGameModes::GameModeZoneMapping* GetGameModeZoneMapping_f() {
            static BNM::Field<::GorillaGameModes::GameModeZoneMapping*> _field = GetClass().GetField(O("gameModeZoneMapping"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GorillaGameModes::GameMode* GetInstance_f() {
            static BNM::Field<::GorillaGameModes::GameMode*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        static ::GorillaGameModes::GameMode_OnStartGameModeAction* GetOnStartGameMode() {
            static BNM::Field<::GorillaGameModes::GameMode_OnStartGameModeAction*> _field = GetClass().GetField(O("OnStartGameMode"));
            return _field.Get();
        }
        static void* GetOptOutPlayers() {
            static BNM::Field<void*> _field = GetClass().GetField(O("optOutPlayers"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>*, ::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>*>* GetParticipatingPlayersChanged() {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>*, ::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>*>*> _field = GetClass().GetField(O("ParticipatingPlayersChanged"));
            return _field.Get();
        }
        static void SetOldPlayersCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_oldPlayersCount"));
            _field.Set(value);
        }
        static void SetActiveGameMode(::GlobalNamespace::GorillaGameManager* value) {
            static BNM::Field<::GlobalNamespace::GorillaGameManager*> _field = GetClass().GetField(O("activeGameMode"));
            _field.Set(value);
        }
        static void SetActiveNetworkHandler(::GlobalNamespace::GameModeSerializer* value) {
            static BNM::Field<::GlobalNamespace::GameModeSerializer*> _field = GetClass().GetField(O("activeNetworkHandler"));
            _field.Set(value);
        }
        static void SetFusionTypeTable(::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::FusionGameModeData*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::FusionGameModeData*>*> _field = GetClass().GetField(O("fusionTypeTable"));
            _field.Set(value);
        }
        static void SetGameModeKeyByName(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, int>*> _field = GetClass().GetField(O("gameModeKeyByName"));
            _field.Set(value);
        }
        static void SetGameModes(::BNM::Structures::Mono::List<::GlobalNamespace::GorillaGameManager*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GorillaGameManager*>*> _field = GetClass().GetField(O("gameModes"));
            _field.Set(value);
        }
        static void SetGameModeTable(::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::GorillaGameManager*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::GorillaGameManager*>*> _field = GetClass().GetField(O("gameModeTable"));
            _field.Set(value);
        }
        void SetGameModeZoneMapping(::GorillaGameModes::GameModeZoneMapping* value) {
            static BNM::Field<::GorillaGameModes::GameModeZoneMapping*> _field = GetClass().GetField(O("gameModeZoneMapping"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GorillaGameModes::GameMode* value) {
            static BNM::Field<::GorillaGameModes::GameMode*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        static void SetOnStartGameMode(::GorillaGameModes::GameMode_OnStartGameModeAction* value) {
            static BNM::Field<::GorillaGameModes::GameMode_OnStartGameModeAction*> _field = GetClass().GetField(O("OnStartGameMode"));
            _field.Set(value);
        }
        static void SetParticipatingPlayersChanged(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>*, ::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>*, ::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>*>*> _field = GetClass().GetField(O("ParticipatingPlayersChanged"));
            _field.Set(value);
        }
        static void add_OnStartGameMode_1(::GorillaGameModes::GameMode_OnStartGameModeAction* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnStartGameMode"), {"value"});
            _m.Call(value);
        }
        static void add_ParticipatingPlayersChanged_1(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>*, ::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_ParticipatingPlayersChanged"), {"value"});
            _m.Call(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void BroadcastRoundComplete() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BroadcastRoundComplete"));
            _m.Call();
        }
        static void BroadcastTag(::GlobalNamespace::NetPlayer* taggedPlayer, ::GlobalNamespace::NetPlayer* taggingPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BroadcastTag"), {"taggedPlayer", "taggingPlayer"});
            _m.Call(taggedPlayer, taggingPlayer);
        }
        static bool CanParticipate(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanParticipate"), {"player"});
            return _m.Call(player);
        }
        static bool ChangeGameFromProperty() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ChangeGameFromProperty"));
            return _m.Call();
        }
        static bool ChangeGameFromProperty(::BNM::Structures::Mono::String* prop) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ChangeGameFromProperty"), {"prop"});
            return _m.Call(prop);
        }
        static bool ChangeGameMode(::BNM::Structures::Mono::String* gameMode) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ChangeGameMode"), {"gameMode"});
            return _m.Call(gameMode);
        }
        static bool ChangeGameMode(int key) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ChangeGameMode"), {"key"});
            return _m.Call(key);
        }
        static bool ContainsNetPlayer(::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>* list, ::GlobalNamespace::NetPlayer* candidate) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ContainsNetPlayer"), {"list", "candidate"});
            return _m.Call(list, candidate);
        }
        static bool ContainsNetPlayer(::BNM::Structures::Mono::Array<::GlobalNamespace::NetPlayer*>* array, ::GlobalNamespace::NetPlayer* candidate, int length) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ContainsNetPlayer"), {"array", "candidate", "length"});
            return _m.Call(array, candidate, length);
        }
        static ::BNM::Structures::Mono::String* FindGameModeFromRoomProperty() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("FindGameModeFromRoomProperty"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* FindGameModeInString(::BNM::Structures::Mono::String* gmString) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("FindGameModeInString"), {"gmString"});
            return _m.Call(gmString);
        }
        static ::GlobalNamespace::GorillaGameManager* get_ActiveGameMode() {
            static BNM::Method<::GlobalNamespace::GorillaGameManager*> _m = GetClass().GetMethod(O("get_ActiveGameMode"));
            return _m.Call();
        }
        static ::GlobalNamespace::GameModeSerializer* get_ActiveNetworkHandler() {
            static BNM::Method<::GlobalNamespace::GameModeSerializer*> _m = GetClass().GetMethod(O("get_ActiveNetworkHandler"));
            return _m.Call();
        }
        static int get_CurrentGameModeFlag() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_CurrentGameModeFlag"));
            return _m.Call();
        }
        static ::GorillaGameModes::GameModeType get_CurrentGameModeType() {
            static BNM::Method<::GorillaGameModes::GameModeType> _m = GetClass().GetMethod(O("get_CurrentGameModeType"));
            return _m.Call();
        }
        static ::GorillaGameModes::GameModeZoneMapping* get_GameModeZoneMapping() {
            static BNM::Method<::GorillaGameModes::GameModeZoneMapping*> _m = GetClass().GetMethod(O("get_GameModeZoneMapping"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>* get_ParticipatingPlayers() {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>*> _m = GetClass().GetMethod(O("get_ParticipatingPlayers"));
            return _m.Call();
        }
        static ::GlobalNamespace::GorillaGameManager* GetGameModeInstance(::GorillaGameModes::GameModeType type) {
            static BNM::Method<::GlobalNamespace::GorillaGameManager*> _m = GetClass().GetMethod(O("GetGameModeInstance"), {"type"});
            return _m.Call(type);
        }
        static ::GlobalNamespace::GorillaGameManager* GetGameModeInstance(int type) {
            static BNM::Method<::GlobalNamespace::GorillaGameManager*> _m = GetClass().GetMethod(O("GetGameModeInstance"), {"type"});
            return _m.Call(type);
        }
        template <typename T>
        static T GetGameModeInstance_1(::GorillaGameModes::GameModeType type) {
            static BNM::Method<T> _m = GetClass().GetMethod(O("GetGameModeInstance"), {"type"});
            return _m.Call(type);
        }
        template <typename T>
        static T GetGameModeInstance_1(int type) {
            static BNM::Method<T> _m = GetClass().GetMethod(O("GetGameModeInstance"), {"type"});
            return _m.Call(type);
        }
        static int GetGameModeKeyFromRoomProp() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetGameModeKeyFromRoomProp"));
            return _m.Call();
        }
        static bool IsPlaying(::GorillaGameModes::GameModeType type) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsPlaying"), {"type"});
            return _m.Call(type);
        }
        static bool IsValidGameMode(::BNM::Structures::Mono::String* gameMode) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsValidGameMode"), {"gameMode"});
            return _m.Call(gameMode);
        }
        static bool LoadGameMode(::BNM::Structures::Mono::String* gameMode) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("LoadGameMode"), {"gameMode"});
            return _m.Call(gameMode);
        }
        static bool LoadGameMode(int key) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("LoadGameMode"), {"key"});
            return _m.Call(key);
        }
        static bool LoadGameModeFromProperty() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("LoadGameModeFromProperty"));
            return _m.Call();
        }
        static bool LoadGameModeFromProperty(::BNM::Structures::Mono::String* prop) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("LoadGameModeFromProperty"), {"prop"});
            return _m.Call(prop);
        }
        static bool LocalIsTagged(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("LocalIsTagged"), {"player"});
            return _m.Call(player);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void OptIn(::GlobalNamespace::VRRig* rig) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OptIn"), {"rig"});
            _m.Call(rig);
        }
        static void OptIn(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OptIn"), {"player"});
            _m.Call(player);
        }
        static void OptIn(int playerActorNumber) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OptIn"), {"playerActorNumber"});
            _m.Call(playerActorNumber);
        }
        static void OptOut(::GlobalNamespace::VRRig* rig) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OptOut"), {"rig"});
            _m.Call(rig);
        }
        static void OptOut(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OptOut"), {"player"});
            _m.Call(player);
        }
        static void OptOut(int playerActorNumber) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OptOut"), {"playerActorNumber"});
            _m.Call(playerActorNumber);
        }
        static void RefreshPlayers() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshPlayers"));
            _m.Call();
        }
        static void remove_OnStartGameMode_1(::GorillaGameModes::GameMode_OnStartGameModeAction* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnStartGameMode"), {"value"});
            _m.Call(value);
        }
        static void remove_ParticipatingPlayersChanged_1(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>*, ::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_ParticipatingPlayersChanged"), {"value"});
            _m.Call(value);
        }
        static void RemoveNetworkLink(::GlobalNamespace::GameModeSerializer* networkSerializer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveNetworkLink"), {"networkSerializer"});
            _m.Call(networkSerializer);
        }
        static void ReportHit() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReportHit"));
            _m.Call();
        }
        static void ReportTag(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReportTag"), {"player"});
            _m.Call(player);
        }
        static void ResetGameModes() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetGameModes"));
            _m.Call();
        }
        static void ResetGameModeSafe(::GlobalNamespace::GorillaGameManager* gameMode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetGameModeSafe"), {"gameMode"});
            _m.Call(gameMode);
        }
        static void set_CurrentGameModeType(::GorillaGameModes::GameModeType value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_CurrentGameModeType"), {"value"});
            _m.Call(value);
        }
        static void SetupGameModeRemote(::GlobalNamespace::GameModeSerializer* networkSerializer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetupGameModeRemote"), {"networkSerializer"});
            _m.Call(networkSerializer);
        }
        static void StartGameModeSafe(::GlobalNamespace::GorillaGameManager* gameMode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartGameModeSafe"), {"gameMode"});
            _m.Call(gameMode);
        }
        static void StaticLoad() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StaticLoad"));
            _m.Call();
        }
        static void StopGameModeSafe(::GlobalNamespace::GorillaGameManager* gameMode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StopGameModeSafe"), {"gameMode"});
            _m.Call(gameMode);
        }
    };
}
