#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaGameManager.hpp"
#include "GorillaPaintbrawlManager_PaintbrawlState.hpp"
#include "GorillaPaintbrawlManager_PaintbrawlStatus.hpp"
#include "PhotonMessageInfoWrapped.hpp"
#include "../GorillaGameModes/GameModeType.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct GorillaPaintbrawlManager : ::GlobalNamespace::GorillaGameManager {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaPaintbrawlManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetBcount() {
            static BNM::Field<int> _field = GetClass().GetField(O("bcount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetCoroutineRunning() {
            static BNM::Field<bool> _field = GetClass().GetField(O("coroutineRunning"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCountDownTime() {
            static BNM::Field<int> _field = GetClass().GetField(O("countDownTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState GetCurrentState() {
            static BNM::Field<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHitCooldown() {
            static BNM::Field<float> _field = GetClass().GetField(O("hitCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<void*>* GetKeyValuePairs() {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("keyValuePairs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<void*>* GetKeyValuePairsStatus() {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("keyValuePairsStatus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLives() {
            static BNM::Field<int> _field = GetClass().GetField(O("lives"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetObjRef() {
            static BNM::Field<void*> _field = GetClass().GetField(O("objRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetOutHitTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("outHitTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetOutLives() {
            static BNM::Field<int> _field = GetClass().GetField(O("outLives"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int>* GetPlayerActorNumberArray() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("playerActorNumberArray"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<int, float>* GetPlayerHitTimes() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, float>*> _field = GetClass().GetField(O("playerHitTimes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPlayerInList() {
            static BNM::Field<bool> _field = GetClass().GetField(O("playerInList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<int, int>* GetPlayerLives() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, int>*> _field = GetClass().GetField(O("playerLives"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int>* GetPlayerLivesArray() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("playerLivesArray"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPlayerMin() {
            static BNM::Field<float> _field = GetClass().GetField(O("playerMin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>* GetPlayerStatusArray() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>*> _field = GetClass().GetField(O("playerStatusArray"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>* GetPlayerStatusDict() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>*> _field = GetClass().GetField(O("playerStatusDict"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<int, float>* GetPlayerStunTimes() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, float>*> _field = GetClass().GetField(O("playerStunTimes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRandInt() {
            static BNM::Field<int> _field = GetClass().GetField(O("randInt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRcount() {
            static BNM::Field<int> _field = GetClass().GetField(O("rcount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetSsString() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ssString"));
            return _field.Get();
        }
        float GetStunGracePeriod() {
            static BNM::Field<float> _field = GetClass().GetField(O("stunGracePeriod"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTagCoolDown() {
            static BNM::Field<float> _field = GetClass().GetField(O("tagCoolDown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTeamBattle() {
            static BNM::Field<bool> _field = GetClass().GetField(O("teamBattle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus GetTempStatus() {
            static BNM::Field<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus> _field = GetClass().GetField(O("tempStatus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::NetworkView* GetTempView() {
            static BNM::Field<::GlobalNamespace::NetworkView*> _field = GetClass().GetField(O("tempView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeBattleEnded() {
            static BNM::Field<float> _field = GetClass().GetField(O("timeBattleEnded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBcount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("bcount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCoroutineRunning(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("coroutineRunning"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCountDownTime(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("countDownTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentState(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState value) {
            static BNM::Field<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHitCooldown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hitCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetKeyValuePairs(::BNM::Structures::Mono::Array<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("keyValuePairs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetKeyValuePairsStatus(::BNM::Structures::Mono::Array<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("keyValuePairsStatus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLives(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lives"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetObjRef(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("objRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOutHitTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("outHitTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOutLives(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("outLives"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerActorNumberArray(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("playerActorNumberArray"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerHitTimes(::BNM::Structures::Mono::Dictionary<int, float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, float>*> _field = GetClass().GetField(O("playerHitTimes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerInList(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("playerInList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerLives(::BNM::Structures::Mono::Dictionary<int, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, int>*> _field = GetClass().GetField(O("playerLives"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerLivesArray(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("playerLivesArray"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerMin(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("playerMin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerStatusArray(::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>*> _field = GetClass().GetField(O("playerStatusArray"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerStatusDict(::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>*> _field = GetClass().GetField(O("playerStatusDict"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerStunTimes(::BNM::Structures::Mono::Dictionary<int, float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, float>*> _field = GetClass().GetField(O("playerStunTimes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRandInt(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("randInt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRcount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("rcount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetSsString(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ssString"));
            _field.Set(value);
        }
        void SetStunGracePeriod(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("stunGracePeriod"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTagCoolDown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("tagCoolDown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTeamBattle(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("teamBattle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTempStatus(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus value) {
            static BNM::Field<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus> _field = GetClass().GetField(O("tempStatus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTempView(::GlobalNamespace::NetworkView* value) {
            static BNM::Field<::GlobalNamespace::NetworkView*> _field = GetClass().GetField(O("tempView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeBattleEnded(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timeBattleEnded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ActivateDefaultSlingShot() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ActivateDefaultSlingShot"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ActivatePaintbrawlBalloons(bool enable) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ActivatePaintbrawlBalloons"), {"enable"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(enable);
        }
        void AddFusionDataBehaviour(::BNM::IL2CPP::Il2CppObject* behaviour) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddFusionDataBehaviour"), {"behaviour"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(behaviour);
        }
        void AddPlayerToCorrectTeam(::GlobalNamespace::NetPlayer* newPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddPlayerToCorrectTeam"), {"newPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newPlayer);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool BattleEnd() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("BattleEnd"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool CanAffectPlayer(::GlobalNamespace::NetPlayer* player, bool thisFrame) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanAffectPlayer"), {"player", "thisFrame"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player, thisFrame);
        }
        bool CheckForGameEnd() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckForGameEnd"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus ClearFlag(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus currState, ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus flag) {
            static BNM::Method<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus> _m = GetClass().GetMethod(O("ClearFlag"), {"currState", "flag"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(currState, flag);
        }
        void CopyArrayToBattleDict() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopyArrayToBattleDict"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CopyBattleDictToArray() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopyBattleDictToArray"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool EndBattleGame() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("EndBattleGame"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool FlagIsSet(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus currState, ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus flag) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("FlagIsSet"), {"currState", "flag"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(currState, flag);
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
        int GetPlayerLives_1(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetPlayerLives"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player);
        }
        ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus GetPlayerStatus(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus> _m = GetClass().GetMethod(O("GetPlayerStatus"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player);
        }
        ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus GetPlayerTeam(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus status) {
            static BNM::Method<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus> _m = GetClass().GetMethod(O("GetPlayerTeam"), {"status"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(status);
        }
        ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus GetPlayerTeam(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus> _m = GetClass().GetMethod(O("GetPlayerTeam"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player);
        }
        bool HasFlag(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus state, ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus statusFlag) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasFlag"), {"state", "statusFlag"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(state, statusFlag);
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
        void InitializePlayerStatus() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializePlayerStatus"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool LocalCanHit(::GlobalNamespace::NetPlayer* myPlayer, ::GlobalNamespace::NetPlayer* otherPlayer) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("LocalCanHit"), {"myPlayer", "otherPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(myPlayer, otherPlayer);
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
        int MyMatIndex(::GlobalNamespace::NetPlayer* forPlayer) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("MyMatIndex"), {"forPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(forPlayer);
        }
        void NetworkLinkSetup(::GlobalNamespace::GameModeSerializer* netSerializer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NetworkLinkSetup"), {"netSerializer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(netSerializer);
        }
        bool OnBlueTeam(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus status) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OnBlueTeam"), {"status"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(status);
        }
        bool OnBlueTeam(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OnBlueTeam"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player);
        }
        bool OnNoTeam(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus status) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OnNoTeam"), {"status"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(status);
        }
        bool OnNoTeam(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OnNoTeam"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player);
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
        bool OnRedTeam(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus status) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OnRedTeam"), {"status"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(status);
        }
        bool OnRedTeam(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OnRedTeam"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player);
        }
        bool OnSameTeam(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus playerA, ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus playerB) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OnSameTeam"), {"playerA", "playerB"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(playerA, playerB);
        }
        bool OnSameTeam(::GlobalNamespace::NetPlayer* myPlayer, ::GlobalNamespace::NetPlayer* otherPlayer) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OnSameTeam"), {"myPlayer", "otherPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(myPlayer, otherPlayer);
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
        bool PlayerInHitCooldown(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("PlayerInHitCooldown"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player);
        }
        bool PlayerInStunCooldown(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("PlayerInStunCooldown"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player);
        }
        void RandomizeTeams() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RandomizeTeams"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ReportSlingshotHit(::GlobalNamespace::NetPlayer* taggedPlayer, ::BNM::Structures::Unity::Vector3 hitLocation, int projectileCount, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReportSlingshotHit"), {"taggedPlayer", "hitLocation", "projectileCount", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(taggedPlayer, hitLocation, projectileCount, info);
        }
        void ResetGame() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetGame"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus SetFlag(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus currState, ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus flag) {
            static BNM::Method<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus> _m = GetClass().GetMethod(O("SetFlag"), {"currState", "flag"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(currState, flag);
        }
        ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus SetFlagExclusive(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus currState, ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus flag) {
            static BNM::Method<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus> _m = GetClass().GetMethod(O("SetFlagExclusive"), {"currState", "flag"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(currState, flag);
        }
        bool SlingshotHit(::GlobalNamespace::NetPlayer* myPlayer, ::Photon_Realtime::Player* otherPlayer) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SlingshotHit"), {"myPlayer", "otherPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(myPlayer, otherPlayer);
        }
        void StartBattle() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartBattle"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* StartBattleCountdown() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("StartBattleCountdown"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
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
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Transition(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Transition"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
        }
        void UpdateBattleState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateBattleState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdatePlayerStatus() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdatePlayerStatus"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename T>
        void VerifyPlayersInDict(::BNM::Structures::Mono::Dictionary<int, T>* dict) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("VerifyPlayersInDict"), {"dict"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dict);
        }
    };
}
