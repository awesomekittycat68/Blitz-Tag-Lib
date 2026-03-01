#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "RankedProgressionManager_ERankedMatchmakingTier.hpp"
#include "../GorillaGameModes/GameModeType.hpp"

namespace GlobalNamespace {
    struct RankedProgressionManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "RankedProgressionManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr float DEFAULT_ELO = 100.0f;
        static constexpr float MIN_ELO = 100.0f;
        static constexpr float MAX_ELO = 4000.0f;
        static constexpr float MAJOR_TIER_MIN_RANGE = 200.0f;
        static constexpr float SUB_TIER_MIN_RANGE = 20.0f;
        float GetCompetitiveQueueEloFloor() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_CompetitiveQueueEloFloor"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetHighTierThreshold() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_HighTierThreshold"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetHighTierThreshold(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_HighTierThreshold"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetLowTierThreshold() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_LowTierThreshold"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetLowTierThreshold(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_LowTierThreshold"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::RankedProgressionManager_RankedProgressionTier*>* GetMajorTiers() {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::RankedProgressionManager_RankedProgressionTier*>*> _method = GetClass().GetMethod(O("get_MajorTiers"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetMajorTiers(::BNM::Structures::Mono::List<::GlobalNamespace::RankedProgressionManager_RankedProgressionTier*>* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_MajorTiers"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetMaxRank() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_MaxRank"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetMaxRank(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_MaxRank"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetDebugEloPoints() {
            static BNM::Field<int> _field = GetClass().GetField(O("debugEloPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::RankedMultiplayerStatisticFloat* GetEloScorePC() {
            static BNM::Field<::GlobalNamespace::RankedMultiplayerStatisticFloat*> _field = GetClass().GetField(O("EloScorePC"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::RankedMultiplayerStatisticFloat* GetEloScoreQuest() {
            static BNM::Field<::GlobalNamespace::RankedMultiplayerStatisticFloat*> _field = GetClass().GetField(O("EloScoreQuest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::RankedProgressionManager* GetInstance() {
            static BNM::Field<::GlobalNamespace::RankedProgressionManager*> _field = GetClass().GetField(O("Instance"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::RankedProgressionManager_RankedProgressionTier*>* GetMajorTiers_f() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::RankedProgressionManager_RankedProgressionTier*>*> _field = GetClass().GetField(O("majorTiers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxEloConstant() {
            static BNM::Field<float> _field = GetClass().GetField(O("MaxEloConstant"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNewTierGracePeriod() {
            static BNM::Field<int> _field = GetClass().GetField(O("newTierGracePeriod"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::RankedMultiplayerStatisticInt* GetNewTierGracePeriodIdxPC() {
            static BNM::Field<::GlobalNamespace::RankedMultiplayerStatisticInt*> _field = GetClass().GetField(O("NewTierGracePeriodIdxPC"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::RankedMultiplayerStatisticInt* GetNewTierGracePeriodIdxQuest() {
            static BNM::Field<::GlobalNamespace::RankedMultiplayerStatisticInt*> _field = GetClass().GetField(O("NewTierGracePeriodIdxQuest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<int, float, int>* GetOnPlayerEloAcquired() {
            static BNM::Field<::BNM::Structures::Mono::Action<int, float, int>*> _field = GetClass().GetField(O("OnPlayerEloAcquired"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData* GetProgressionData() {
            static BNM::Field<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData*> _field = GetClass().GetField(O("ProgressionData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::RankedProgressionManager_RankedProgressionEvent* GetProgressionEvent() {
            static BNM::Field<::GlobalNamespace::RankedProgressionManager_RankedProgressionEvent*> _field = GetClass().GetField(O("ProgressionEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetRANKEDELOKEY() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("RANKED_ELO_KEY"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetRANKEDELOPCKEY() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("RANKED_ELO_PC_KEY"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetRANKEDPROGRESSIONGRACEPERIODKEY() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("RANKED_PROGRESSION_GRACE_PERIOD_KEY"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetRANKEDPROGRESSIONGRACEPERIODPCKEY() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("RANKED_PROGRESSION_GRACE_PERIOD_PC_KEY"));
            return _field.Get();
        }
        void SetDebugEloPoints(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("debugEloPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEloScorePC(::GlobalNamespace::RankedMultiplayerStatisticFloat* value) {
            static BNM::Field<::GlobalNamespace::RankedMultiplayerStatisticFloat*> _field = GetClass().GetField(O("EloScorePC"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEloScoreQuest(::GlobalNamespace::RankedMultiplayerStatisticFloat* value) {
            static BNM::Field<::GlobalNamespace::RankedMultiplayerStatisticFloat*> _field = GetClass().GetField(O("EloScoreQuest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::RankedProgressionManager* value) {
            static BNM::Field<::GlobalNamespace::RankedProgressionManager*> _field = GetClass().GetField(O("Instance"));
            _field.Set(value);
        }
        void SetMajorTiers_fs(::BNM::Structures::Mono::List<::GlobalNamespace::RankedProgressionManager_RankedProgressionTier*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::RankedProgressionManager_RankedProgressionTier*>*> _field = GetClass().GetField(O("majorTiers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxEloConstant(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("MaxEloConstant"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNewTierGracePeriod(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("newTierGracePeriod"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNewTierGracePeriodIdxPC(::GlobalNamespace::RankedMultiplayerStatisticInt* value) {
            static BNM::Field<::GlobalNamespace::RankedMultiplayerStatisticInt*> _field = GetClass().GetField(O("NewTierGracePeriodIdxPC"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNewTierGracePeriodIdxQuest(::GlobalNamespace::RankedMultiplayerStatisticInt* value) {
            static BNM::Field<::GlobalNamespace::RankedMultiplayerStatisticInt*> _field = GetClass().GetField(O("NewTierGracePeriodIdxQuest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnPlayerEloAcquired(::BNM::Structures::Mono::Action<int, float, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<int, float, int>*> _field = GetClass().GetField(O("OnPlayerEloAcquired"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProgressionData(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData* value) {
            static BNM::Field<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData*> _field = GetClass().GetField(O("ProgressionData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProgressionEvent(::GlobalNamespace::RankedProgressionManager_RankedProgressionEvent* value) {
            static BNM::Field<::GlobalNamespace::RankedProgressionManager_RankedProgressionEvent*> _field = GetClass().GetField(O("ProgressionEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetRANKEDELOKEY(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("RANKED_ELO_KEY"));
            _field.Set(value);
        }
        static void SetRANKEDELOPCKEY(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("RANKED_ELO_PC_KEY"));
            _field.Set(value);
        }
        static void SetRANKEDPROGRESSIONGRACEPERIODKEY(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("RANKED_PROGRESSION_GRACE_PERIOD_KEY"));
            _field.Set(value);
        }
        static void SetRANKEDPROGRESSIONGRACEPERIODPCKEY(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("RANKED_PROGRESSION_GRACE_PERIOD_PC_KEY"));
            _field.Set(value);
        }
        void AcquireLocalPlayerRankInformation() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AcquireLocalPlayerRankInformation"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void AcquireRoomRankInformation(bool includeLocalPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AcquireRoomRankInformation"), {"includeLocalPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(includeLocalPlayer);
        }
        void AcquireSinglePlayerRankInformation(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AcquireSinglePlayerRankInformation"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player);
        }
        bool AreValuesValid(float elo, int questTier, int pcTier) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("AreValuesValid"), {"elo", "questTier", "pcTier"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(elo, questTier, pcTier);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int ClampProgressionRankIndex(int subTierIdx) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ClampProgressionRankIndex"), {"subTierIdx"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(subTierIdx);
        }
        void DebugResetELO() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DebugResetELO"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DebugSetELO() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DebugSetELO"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        float get_CompetitiveQueueEloFloor() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_CompetitiveQueueEloFloor"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_HighTierThreshold() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_HighTierThreshold"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_LowTierThreshold() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_LowTierThreshold"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::RankedProgressionManager_RankedProgressionTier*>* get_MajorTiers() {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::RankedProgressionManager_RankedProgressionTier*>*> _m = GetClass().GetMethod(O("get_MajorTiers"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_MaxRank() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_MaxRank"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float GetCurrentELO() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetCurrentELO"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float GetEloScore() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetEloScore"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float GetEloScorePC_1() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetEloScorePC"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float GetEloScoreQuest_1() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetEloScoreQuest"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static float GetEloWinProbability(float ratingPlayer1, float ratingPlayer2) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetEloWinProbability"), {"ratingPlayer1", "ratingPlayer2"});
            return _m.Call(ratingPlayer1, ratingPlayer2);
        }
        int GetNewTierGracePeriodIdx() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetNewTierGracePeriodIdx"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Sprite* GetNextProgressionRankIcon(int subTierIdx) {
            static BNM::Method<::Sprite*> _m = GetClass().GetMethod(O("GetNextProgressionRankIcon"), {"subTierIdx"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(subTierIdx);
        }
        ::BNM::Structures::Mono::String* GetNextProgressionRankName(int subTierIdx) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetNextProgressionRankName"), {"subTierIdx"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(subTierIdx);
        }
        ::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier* GetNextProgressionSubTierByIndex(int idx) {
            static BNM::Method<::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier*> _m = GetClass().GetMethod(O("GetNextProgressionSubTierByIndex"), {"idx"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(idx);
        }
        ::Sprite* GetPrevProgressionRankIcon(int subTierIdx) {
            static BNM::Method<::Sprite*> _m = GetClass().GetMethod(O("GetPrevProgressionRankIcon"), {"subTierIdx"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(subTierIdx);
        }
        ::BNM::Structures::Mono::String* GetPrevProgressionRankName(int subTierIdx) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetPrevProgressionRankName"), {"subTierIdx"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(subTierIdx);
        }
        ::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier* GetPrevProgressionSubTierByIndex(int idx) {
            static BNM::Method<::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier*> _m = GetClass().GetMethod(O("GetPrevProgressionSubTierByIndex"), {"idx"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(idx);
        }
        ::GlobalNamespace::RankedProgressionManager_RankedProgressionTier* GetProgressionMajorTierBySubTierIndex(int idx) {
            static BNM::Method<::GlobalNamespace::RankedProgressionManager_RankedProgressionTier*> _m = GetClass().GetMethod(O("GetProgressionMajorTierBySubTierIndex"), {"idx"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(idx);
        }
        ::Sprite* GetProgressionRankIcon() {
            static BNM::Method<::Sprite*> _m = GetClass().GetMethod(O("GetProgressionRankIcon"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Sprite* GetProgressionRankIcon(float elo) {
            static BNM::Method<::Sprite*> _m = GetClass().GetMethod(O("GetProgressionRankIcon"), {"elo"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(elo);
        }
        ::Sprite* GetProgressionRankIcon(int subTierIdx) {
            static BNM::Method<::Sprite*> _m = GetClass().GetMethod(O("GetProgressionRankIcon"), {"subTierIdx"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(subTierIdx);
        }
        int GetProgressionRankIndex() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetProgressionRankIndex"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetProgressionRankIndex(float elo) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetProgressionRankIndex"), {"elo"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(elo);
        }
        int GetProgressionRankIndexPC() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetProgressionRankIndexPC"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetProgressionRankIndexQuest() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetProgressionRankIndexQuest"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* GetProgressionRankName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetProgressionRankName"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* GetProgressionRankName(float elo) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetProgressionRankName"), {"elo"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(elo);
        }
        float GetProgressionRankProgress() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetProgressionRankProgress"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float GetProgressionRankProgressPC() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetProgressionRankProgressPC"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float GetProgressionRankProgressQuest() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetProgressionRankProgressQuest"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier* GetProgressionSubTier() {
            static BNM::Method<::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier*> _m = GetClass().GetMethod(O("GetProgressionSubTier"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier* GetProgressionSubTierByIndex(int idx) {
            static BNM::Method<::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier*> _m = GetClass().GetMethod(O("GetProgressionSubTierByIndex"), {"idx"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(idx);
        }
        ::GlobalNamespace::RankedProgressionManager_ERankedMatchmakingTier GetRankedMatchmakingTier() {
            static BNM::Method<::GlobalNamespace::RankedProgressionManager_ERankedMatchmakingTier> _m = GetClass().GetMethod(O("GetRankedMatchmakingTier"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* GetRankedProgressionTierName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetRankedProgressionTierName"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetRankFromTiers(int majorTier, int minorTier) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetRankFromTiers"), {"majorTier", "minorTier"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(majorTier, minorTier);
        }
        void GetSubtierRankThresholds(int subTierIdx, float& minThreshold, float& maxThreshold) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetSubtierRankThresholds"), {"subTierIdx", "minThreshold", "maxThreshold"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(subTierIdx, &minThreshold, &maxThreshold);
        }
        void HandlePlayerRankedInfoReceived(int actorNum, float elo, int tier) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandlePlayerRankedInfoReceived"), {"actorNum", "elo", "tier"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(actorNum, elo, tier);
        }
        bool HasUnlockedCompetitiveQueue() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasUnlockedCompetitiveQueue"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void IncrementNewTierGracePeriodIdx() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("IncrementNewTierGracePeriodIdx"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LoadStats() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoadStats"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* LoadStatsWhenReady() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("LoadStatsWhenReady"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnJoinedRoom(::GorillaGameModes::GameModeType newGameModeType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnJoinedRoom"), {"newGameModeType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newGameModeType);
        }
        void OnLocalPlayerRankedInformationAcquired(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData* rankedModeProgressionData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLocalPlayerRankedInformationAcquired"), {"rankedModeProgressionData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rankedModeProgressionData);
        }
        void OnPlayerJoined(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerJoined"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player);
        }
        void OnPlayersRankedInformationAcquired(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData* rankedModeProgressionData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayersRankedInformationAcquired"), {"rankedModeProgressionData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rankedModeProgressionData);
        }
        void RequestUnlockCompetitiveQueue(bool unlock) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestUnlockCompetitiveQueue"), {"unlock"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(unlock);
        }
        void set_HighTierThreshold(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_HighTierThreshold"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_LowTierThreshold(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_LowTierThreshold"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_MajorTiers(::BNM::Structures::Mono::List<::GlobalNamespace::RankedProgressionManager_RankedProgressionTier*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_MajorTiers"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_MaxRank(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_MaxRank"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetEloScore(float val) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetEloScore"), {"val"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(val);
        }
        void SetLocalProgressionData(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetLocalProgressionData"), {"data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(data);
        }
        void SetNewTierGracePeriodIdx(int val) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetNewTierGracePeriodIdx"), {"val"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(val);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool TryGetProgressionSubTier(::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier*& subTier, int& index) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetProgressionSubTier"), {"subTier", "index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(&subTier, &index);
        }
        bool TryGetProgressionSubTier(float elo, ::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier*& subTier, int& index) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetProgressionSubTier"), {"elo", "subTier", "index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(elo, &subTier, &index);
        }
        static float UpdateEloScore(float eloScore, float expectedResult, float actualResult, float k) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("UpdateEloScore"), {"eloScore", "expectedResult", "actualResult", "k"});
            return _m.Call(eloScore, expectedResult, actualResult, k);
        }
    };
}
