#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "QuestCategory.hpp"
#include "SIProgression_SINode.hpp"
#include "SIProgression_SIProgressionResourceCap.hpp"
#include "SIResource_LimitedDepositType.hpp"
#include "SIResource_ResourceType.hpp"
#include "SITechTreePageId.hpp"
#include "SIUpgradeType.hpp"

namespace GlobalNamespace {
    struct SIProgression : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SIProgression");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::SIProgression* get_Instance() {
            static BNM::Method<::GlobalNamespace::SIProgression*> method = GetClass().GetMethod(O("get_Instance"));
            return method.Call();
        }
        static constexpr const char* TREE_NAME = "SI_Gadgets";
        static constexpr int STARTING_STASHED_QUESTS = 0;
        static constexpr int STARTING_STASHED_BONUS_POINTS = 0;
        static constexpr int SHARED_QUEST_TURNINS_FOR_POINT = 4;
        static constexpr int NEW_QUESTS_PER_DAY = 3;
        static constexpr int NEW_BONUS_POINTS_PER_DAY = 1;
        static constexpr int MAX_STASHED_QUESTS = 6;
        static constexpr int MAX_STASHED_BONUS_POINTS = 2;
        static constexpr int MAX_RESOURCE_COUNT = 30;
        static constexpr int ACTIVE_QUEST_COUNT = 3;
        static constexpr const char* kLocalQuestPath = "TestingSuperInfectionQuests";
        static constexpr const char* kVersion = "v1_";
        static constexpr const char* kLastQuestGrantTime = "v1_SIProgression:lastSharedGrantTime";
        static constexpr const char* kBonusProgress = "v1_SIProgression:bonusProgress";
        static constexpr const char* kDailyQuestId = "v1_Rotating_Quest_Daily_ID_Key";
        static constexpr const char* kDailyQuestProgress = "v1_Rotating_Quest_Daily_Progress_Key";
        static constexpr const char* kStashedQuests = "v1_SIProgression:stashedQuests";
        static constexpr const char* kStashedBonusPoints = "v1_SIProgression:stashedBonusPoints";
        static constexpr const char* kTechTree = "v1_SITechTree:";
        static constexpr const char* kLimitedDeposit = "v1_SIResource:LimitedDeposit:";
        static constexpr const char* kTechPoints = "v1_SIResource:techPoints";
        static constexpr const char* kStrangeWood = "v1_SIResource:strangeWood";
        static constexpr const char* kWeirdGear = "v1_SIResource:weirdGear";
        static constexpr const char* kVibratingSpring = "v1_SIResource:vibratingSpring";
        static constexpr const char* kBouncySand = "v1_SIResource:bouncySand";
        static constexpr const char* kFloppyMetal = "v1_SIResource:floppyMetal";
        static constexpr const char* kStartingPackageGranted = "v1_SIProgression:startingPackageGranted";
        static constexpr int STARTING_PACKAGE_MAX_ATTEMPTS = 10;
        ::BNM::Structures::Mono::Array<int>* GetActiveQuestIds() {
            static BNM::Method<::BNM::Structures::Mono::Array<int>*> _method = GetClass().GetMethod(O("get_ActiveQuestIds"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::Array<int>* GetActiveQuestProgresses() {
            static BNM::Method<::BNM::Structures::Mono::Array<int>*> _method = GetClass().GetMethod(O("get_ActiveQuestProgresses"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetDailyLimitedTurnedIn() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_DailyLimitedTurnedIn"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::SIProgression* GetInstance() {
            static BNM::Method<::GlobalNamespace::SIProgression*> _method = GetClass().GetMethod(O("get_Instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetInstance(::GlobalNamespace::SIProgression* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        void add_OnClientReady(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnClientReady"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnClientReady(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnClientReady"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        bool GetInventoryReady() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_inventoryReady"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SIResource_ResourceType, ::BNM::Structures::Mono::String*>* GetResourceToString() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SIResource_ResourceType, ::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("_resourceToString"));
            return _field.Get();
        }
        bool GetStartingPackageGranted() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_startingPackageGranted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTreeReady() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_treeReady"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::QuestCategory>* GetActiveQuestCategories() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::QuestCategory>*> _field = GetClass().GetField(O("activeQuestCategories"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int>* GetActiveQuestIds_f() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("activeQuestIds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int>* GetActiveQuestIdsDiff() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("activeQuestIdsDiff"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int>* GetActiveQuestProgresses_f() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("activeQuestProgresses"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int>* GetActiveQuestProgressesDiff() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("activeQuestProgressesDiff"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetActiveTerminalTimeInterval() {
            static BNM::Field<float> _field = GetClass().GetField(O("activeTerminalTimeInterval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetActiveTerminalTimeTotal() {
            static BNM::Field<float> _field = GetClass().GetField(O("activeTerminalTimeTotal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetBonusProgress() {
            static BNM::Field<int> _field = GetClass().GetField(O("bonusProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetBonusProgressDiff() {
            static BNM::Field<int> _field = GetClass().GetField(O("bonusProgressDiff"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetClientReady() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ClientReady"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCompletedBonusPoints() {
            static BNM::Field<int> _field = GetClass().GetField(O("completedBonusPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCompletedQuests() {
            static BNM::Field<int> _field = GetClass().GetField(O("completedQuests"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetCROSSOVERTIMEOFDAY() {
            static BNM::Field<void*> _field = GetClass().GetField(O("CROSSOVER_TIME_OF_DAY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDailyLimitedTurnedIn_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("dailyLimitedTurnedIn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIProgression_SINode GetEmptyNode() {
            static BNM::Field<::GlobalNamespace::SIProgression_SINode> _field = GetClass().GetField(O("emptyNode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SITechTreePageId, int>* GetHeldOrSnappedByGadgetPageType() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SITechTreePageId, int>*> _field = GetClass().GetField(O("heldOrSnappedByGadgetPageType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetHeldOrSnappedOthersGadgets() {
            static BNM::Field<int> _field = GetClass().GetField(O("heldOrSnappedOthersGadgets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetHeldOrSnappedOwnGadgets() {
            static BNM::Field<int> _field = GetClass().GetField(O("heldOrSnappedOwnGadgets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetIntervalPlayTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("intervalPlayTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastDisconnectTelemetrySent() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastDisconnectTelemetrySent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetLastQuestGrantTime() {
            static BNM::Field<void*> _field = GetClass().GetField(O("lastQuestGrantTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetLastQuestGrantTimeDiff() {
            static BNM::Field<void*> _field = GetClass().GetField(O("lastQuestGrantTimeDiff"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastStartingPackageAttemptStarted() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastStartingPackageAttemptStarted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastTelemetrySent() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastTelemetrySent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int>* GetLimitedDepositTimeArray() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("limitedDepositTimeArray"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int>* GetLimitedDepositTimeDiff() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("limitedDepositTimeDiff"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinDisconnectTelemetryCooldown() {
            static BNM::Field<float> _field = GetClass().GetField(O("minDisconnectTelemetryCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<>* GetOnClientReady() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnClientReady"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<>* GetOnInventoryReady() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnInventoryReady"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::GlobalNamespace::SIUpgradeType>* GetOnNodeUnlocked() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::SIUpgradeType>*> _field = GetClass().GetField(O("OnNodeUnlocked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<>* GetOnTreeReady() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnTreeReady"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPerCategoryQuestLimit() {
            static BNM::Field<int> _field = GetClass().GetField(O("perCategoryQuestLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetQuestGrantRefreshCooldown() {
            static BNM::Field<int> _field = GetClass().GetField(O("questGrantRefreshCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetQuestsInitialized() {
            static BNM::Field<bool> _field = GetClass().GetField(O("questsInitialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIProgression_SIQuestsList* GetQuestSourceList() {
            static BNM::Field<::GlobalNamespace::SIProgression_SIQuestsList*> _field = GetClass().GetField(O("questSourceList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<bool>* GetRedeemingQuestInProgress() {
            static BNM::Field<::BNM::Structures::Mono::Array<bool>*> _field = GetClass().GetField(O("redeemingQuestInProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int>* GetResourceArrayDiff() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("resourceArrayDiff"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::SIProgression_SIProgressionResourceCap>* GetResourceCaps() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::SIProgression_SIProgressionResourceCap>*> _field = GetClass().GetField(O("resourceCaps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int>* GetResourceCapsArray() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("resourceCapsArray"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SIResource_ResourceType, int>* GetResourceDict() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SIResource_ResourceType, int>*> _field = GetClass().GetField(O("resourceDict"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SIResource_ResourceType, int>* GetResourcesCollectedInterval() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SIResource_ResourceType, int>*> _field = GetClass().GetField(O("resourcesCollectedInterval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SIResource_ResourceType, int>* GetResourcesCollectedTotal() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SIResource_ResourceType, int>*> _field = GetClass().GetField(O("resourcesCollectedTotal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRoomPlayTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("roomPlayTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRoundsPlayedInterval() {
            static BNM::Field<int> _field = GetClass().GetField(O("roundsPlayedInterval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRoundsPlayedTotal() {
            static BNM::Field<int> _field = GetClass().GetField(O("roundsPlayedTotal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SIUpgradeType, ::GlobalNamespace::SIProgression_SINode>* GetSiNodes() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SIUpgradeType, ::GlobalNamespace::SIProgression_SINode>*> _field = GetClass().GetField(O("siNodes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetStartingPackageBackupAttempts() {
            static BNM::Field<int> _field = GetClass().GetField(O("startingPackageBackupAttempts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetStashedBonusPoints() {
            static BNM::Field<int> _field = GetClass().GetField(O("stashedBonusPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetStashedBonusPointsDiff() {
            static BNM::Field<int> _field = GetClass().GetField(O("stashedBonusPointsDiff"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetStashedQuests() {
            static BNM::Field<int> _field = GetClass().GetField(O("stashedQuests"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetStashedQuestsDiff() {
            static BNM::Field<int> _field = GetClass().GetField(O("stashedQuestsDiff"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTagsHoldingOthersGadgetInterval() {
            static BNM::Field<int> _field = GetClass().GetField(O("tagsHoldingOthersGadgetInterval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTagsHoldingOthersGadgetTotal() {
            static BNM::Field<int> _field = GetClass().GetField(O("tagsHoldingOthersGadgetTotal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTagsHoldingOwnGadgetInterval() {
            static BNM::Field<int> _field = GetClass().GetField(O("tagsHoldingOwnGadgetInterval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTagsHoldingOwnGadgetTotal() {
            static BNM::Field<int> _field = GetClass().GetField(O("tagsHoldingOwnGadgetTotal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SITechTreePageId, int>* GetTagsUsingGadgetTypeInterval() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SITechTreePageId, int>*> _field = GetClass().GetField(O("tagsUsingGadgetTypeInterval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SITechTreePageId, int>* GetTagsUsingGadgetTypeTotal() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SITechTreePageId, int>*> _field = GetClass().GetField(O("tagsUsingGadgetTypeTotal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SITechTreeSO* GetTechTreeSO() {
            static BNM::Field<::GlobalNamespace::SITechTreeSO*> _field = GetClass().GetField(O("techTreeSO"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTelemetryCooldown() {
            static BNM::Field<float> _field = GetClass().GetField(O("telemetryCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeTelemetryLastChecked() {
            static BNM::Field<float> _field = GetClass().GetField(O("timeTelemetryLastChecked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SITechTreePageId, float>* GetTimeUsingGadgetTypeInterval() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SITechTreePageId, float>*> _field = GetClass().GetField(O("timeUsingGadgetTypeInterval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SITechTreePageId, float>* GetTimeUsingGadgetTypeTotal() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SITechTreePageId, float>*> _field = GetClass().GetField(O("timeUsingGadgetTypeTotal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeUsingOthersGadgetsInterval() {
            static BNM::Field<float> _field = GetClass().GetField(O("timeUsingOthersGadgetsInterval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeUsingOthersGadgetsTotal() {
            static BNM::Field<float> _field = GetClass().GetField(O("timeUsingOthersGadgetsTotal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeUsingOwnGadgetsInterval() {
            static BNM::Field<float> _field = GetClass().GetField(O("timeUsingOwnGadgetsInterval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeUsingOwnGadgetsTotal() {
            static BNM::Field<float> _field = GetClass().GetField(O("timeUsingOwnGadgetsTotal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTotalPlayTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("totalPlayTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<bool>* GetUnlockedTechTreeData() {
            static BNM::Field<::BNM::Structures::Mono::Array<bool>*> _field = GetClass().GetField(O("unlockedTechTreeData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<bool>* GetUnlockedTechTreeDataDiff() {
            static BNM::Field<::BNM::Structures::Mono::Array<bool>*> _field = GetClass().GetField(O("unlockedTechTreeDataDiff"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetInventoryReady(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_inventoryReady"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetResourceToString(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SIResource_ResourceType, ::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SIResource_ResourceType, ::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("_resourceToString"));
            _field.Set(value);
        }
        void SetStartingPackageGranted(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_startingPackageGranted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTreeReady(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_treeReady"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActiveQuestCategories(::BNM::Structures::Mono::Array<::GlobalNamespace::QuestCategory>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::QuestCategory>*> _field = GetClass().GetField(O("activeQuestCategories"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActiveQuestIds(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("activeQuestIds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActiveQuestIdsDiff(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("activeQuestIdsDiff"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActiveQuestProgresses(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("activeQuestProgresses"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActiveQuestProgressesDiff(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("activeQuestProgressesDiff"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActiveTerminalTimeInterval(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("activeTerminalTimeInterval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActiveTerminalTimeTotal(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("activeTerminalTimeTotal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBonusProgress(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("bonusProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBonusProgressDiff(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("bonusProgressDiff"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetClientReady(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ClientReady"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCompletedBonusPoints(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("completedBonusPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCompletedQuests(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("completedQuests"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCROSSOVERTIMEOFDAY(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("CROSSOVER_TIME_OF_DAY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDailyLimitedTurnedIn(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("dailyLimitedTurnedIn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEmptyNode(::GlobalNamespace::SIProgression_SINode value) {
            static BNM::Field<::GlobalNamespace::SIProgression_SINode> _field = GetClass().GetField(O("emptyNode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeldOrSnappedByGadgetPageType(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SITechTreePageId, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SITechTreePageId, int>*> _field = GetClass().GetField(O("heldOrSnappedByGadgetPageType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeldOrSnappedOthersGadgets(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("heldOrSnappedOthersGadgets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeldOrSnappedOwnGadgets(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("heldOrSnappedOwnGadgets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIntervalPlayTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("intervalPlayTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastDisconnectTelemetrySent(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastDisconnectTelemetrySent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastQuestGrantTime(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("lastQuestGrantTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastQuestGrantTimeDiff(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("lastQuestGrantTimeDiff"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastStartingPackageAttemptStarted(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastStartingPackageAttemptStarted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastTelemetrySent(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastTelemetrySent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLimitedDepositTimeArray(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("limitedDepositTimeArray"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLimitedDepositTimeDiff(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("limitedDepositTimeDiff"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinDisconnectTelemetryCooldown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minDisconnectTelemetryCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnClientReady(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnClientReady"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnInventoryReady(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnInventoryReady"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnNodeUnlocked(::BNM::Structures::Mono::Action<::GlobalNamespace::SIUpgradeType>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::SIUpgradeType>*> _field = GetClass().GetField(O("OnNodeUnlocked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnTreeReady(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnTreeReady"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPerCategoryQuestLimit(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("perCategoryQuestLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetQuestGrantRefreshCooldown(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("questGrantRefreshCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetQuestsInitialized(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("questsInitialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetQuestSourceList(::GlobalNamespace::SIProgression_SIQuestsList* value) {
            static BNM::Field<::GlobalNamespace::SIProgression_SIQuestsList*> _field = GetClass().GetField(O("questSourceList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRedeemingQuestInProgress(::BNM::Structures::Mono::Array<bool>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<bool>*> _field = GetClass().GetField(O("redeemingQuestInProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResourceArrayDiff(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("resourceArrayDiff"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResourceCaps(::BNM::Structures::Mono::Array<::GlobalNamespace::SIProgression_SIProgressionResourceCap>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::SIProgression_SIProgressionResourceCap>*> _field = GetClass().GetField(O("resourceCaps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResourceCapsArray(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("resourceCapsArray"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResourceDict(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SIResource_ResourceType, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SIResource_ResourceType, int>*> _field = GetClass().GetField(O("resourceDict"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResourcesCollectedInterval(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SIResource_ResourceType, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SIResource_ResourceType, int>*> _field = GetClass().GetField(O("resourcesCollectedInterval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResourcesCollectedTotal(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SIResource_ResourceType, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SIResource_ResourceType, int>*> _field = GetClass().GetField(O("resourcesCollectedTotal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRoomPlayTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("roomPlayTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRoundsPlayedInterval(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("roundsPlayedInterval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRoundsPlayedTotal(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("roundsPlayedTotal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSiNodes(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SIUpgradeType, ::GlobalNamespace::SIProgression_SINode>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SIUpgradeType, ::GlobalNamespace::SIProgression_SINode>*> _field = GetClass().GetField(O("siNodes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartingPackageBackupAttempts(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("startingPackageBackupAttempts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStashedBonusPoints(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("stashedBonusPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStashedBonusPointsDiff(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("stashedBonusPointsDiff"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStashedQuests(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("stashedQuests"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStashedQuestsDiff(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("stashedQuestsDiff"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTagsHoldingOthersGadgetInterval(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("tagsHoldingOthersGadgetInterval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTagsHoldingOthersGadgetTotal(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("tagsHoldingOthersGadgetTotal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTagsHoldingOwnGadgetInterval(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("tagsHoldingOwnGadgetInterval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTagsHoldingOwnGadgetTotal(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("tagsHoldingOwnGadgetTotal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTagsUsingGadgetTypeInterval(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SITechTreePageId, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SITechTreePageId, int>*> _field = GetClass().GetField(O("tagsUsingGadgetTypeInterval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTagsUsingGadgetTypeTotal(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SITechTreePageId, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SITechTreePageId, int>*> _field = GetClass().GetField(O("tagsUsingGadgetTypeTotal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTechTreeSO(::GlobalNamespace::SITechTreeSO* value) {
            static BNM::Field<::GlobalNamespace::SITechTreeSO*> _field = GetClass().GetField(O("techTreeSO"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTelemetryCooldown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("telemetryCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeTelemetryLastChecked(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timeTelemetryLastChecked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeUsingGadgetTypeInterval(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SITechTreePageId, float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SITechTreePageId, float>*> _field = GetClass().GetField(O("timeUsingGadgetTypeInterval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeUsingGadgetTypeTotal(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SITechTreePageId, float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SITechTreePageId, float>*> _field = GetClass().GetField(O("timeUsingGadgetTypeTotal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeUsingOthersGadgetsInterval(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timeUsingOthersGadgetsInterval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeUsingOthersGadgetsTotal(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timeUsingOthersGadgetsTotal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeUsingOwnGadgetsInterval(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timeUsingOwnGadgetsInterval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeUsingOwnGadgetsTotal(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timeUsingOwnGadgetsTotal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTotalPlayTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("totalPlayTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnlockedTechTreeData(::BNM::Structures::Mono::Array<bool>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<bool>*> _field = GetClass().GetField(O("unlockedTechTreeData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnlockedTechTreeDataDiff(::BNM::Structures::Mono::Array<bool>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<bool>*> _field = GetClass().GetField(O("unlockedTechTreeDataDiff"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void _InitializeQuests() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_InitializeQuests"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool _ResourcesMaxed() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("_ResourcesMaxed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename T>
        static void _SafeShallowCopyArray(::BNM::Structures::Mono::Array<T>* sourceArray, T& ref_destinationArray) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_SafeShallowCopyArray"), {"sourceArray", "ref_destinationArray"});
            _m.Call(sourceArray, &ref_destinationArray);
        }
        void add_OnClientReady_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnClientReady"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void AddRoundTelemetry() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddRoundTelemetry"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ApplyLimitedDepositTime(::GlobalNamespace::SIResource_LimitedDepositType limitedDepositType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyLimitedDepositTime"), {"limitedDepositType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(limitedDepositType);
        }
        void ApplyServerQuestsStatus(::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse* userQuestsStatus) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyServerQuestsStatus"), {"userQuestsStatus"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(userQuestsStatus);
        }
        void AttemptCollectMonkeIdol() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AttemptCollectMonkeIdol"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void AttemptIncrementResource(::GlobalNamespace::SIResource_ResourceType resource) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AttemptIncrementResource"), {"resource"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(resource);
        }
        void AttemptRedeemBonusPoint() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AttemptRedeemBonusPoint"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void AttemptRedeemCompletedQuest(int questIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AttemptRedeemCompletedQuest"), {"questIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(questIndex);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CheckTelemetry() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckTelemetry"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CheckTimeCrossover() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckTimeCrossover"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CheckTimeCrossoverServer() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckTimeCrossoverServer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ClearAllQuestEventListeners() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearAllQuestEventListeners"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CollectResourceTelemetry(::GlobalNamespace::SIResource_ResourceType type, int count) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CollectResourceTelemetry"), {"type", "count"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(type, count);
        }
        void CopySaveDataToDiff() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopySaveDataToDiff"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void EnsureInitialized() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnsureInitialized"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Mono::Array<int>* get_ActiveQuestIds() {
            static BNM::Method<::BNM::Structures::Mono::Array<int>*> _m = GetClass().GetMethod(O("get_ActiveQuestIds"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::Array<int>* get_ActiveQuestProgresses() {
            static BNM::Method<::BNM::Structures::Mono::Array<int>*> _m = GetClass().GetMethod(O("get_ActiveQuestProgresses"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_DailyLimitedTurnedIn() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_DailyLimitedTurnedIn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static ::GlobalNamespace::SIProgression* get_Instance_1() {
            static BNM::Method<::GlobalNamespace::SIProgression*> _m = GetClass().GetMethod(O("get_Instance"));
            return _m.Call();
        }
        void GetBonusProgress_1() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetBonusProgress"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int GetCurrencyAmount(::GlobalNamespace::SIResource_ResourceType currencyType) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetCurrencyAmount"), {"currencyType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(currencyType);
        }
        ::GlobalNamespace::SIProgression_SINode GetNodeFromID(::BNM::Structures::Mono::String* id) {
            static BNM::Method<::GlobalNamespace::SIProgression_SINode> _m = GetClass().GetMethod(O("GetNodeFromID"), {"id"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(id);
        }
        bool GetOnlineNode(::GlobalNamespace::SIUpgradeType type, ::GlobalNamespace::SIProgression_SINode& node) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetOnlineNode"), {"type", "node"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(type, &node);
        }
        ::BNM::Structures::Mono::Array<int>* GetResourceArray() {
            static BNM::Method<::BNM::Structures::Mono::Array<int>*> _m = GetClass().GetMethod(O("GetResourceArray"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetResourceMaxCap(::GlobalNamespace::SIResource_ResourceType type) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetResourceMaxCap"), {"type"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(type);
        }
        static ::BNM::Structures::Mono::String* GetResourceString(::GlobalNamespace::SIResource_ResourceType resourceType) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetResourceString"), {"resourceType"});
            return _m.Call(resourceType);
        }
        void HandleInventoryUpdated() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleInventoryUpdated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void HandleNodeUnlocked(::BNM::Structures::Mono::String* treeId, ::BNM::Structures::Mono::String* nodeId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleNodeUnlocked"), {"treeId", "nodeId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(treeId, nodeId);
        }
        void HandleQuestCompleted(int questID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleQuestCompleted"), {"questID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(questID);
        }
        void HandleQuestProgressChanged(bool initialLoad) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleQuestProgressChanged"), {"initialLoad"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(initialLoad);
        }
        void HandleTagTelemetry(::GlobalNamespace::NetPlayer* taggedPlayer, ::GlobalNamespace::NetPlayer* taggingPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleTagTelemetry"), {"taggedPlayer", "taggingPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(taggedPlayer, taggingPlayer);
        }
        void HandleTreeUpdated() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleTreeUpdated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Init() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Init"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void InitializeQuests() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeQuests"));
            _m.Call();
        }
        static void InitResourceToStringDictionary() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitResourceToStringDictionary"));
            _m.Call();
        }
        bool IsLimitedDepositAvailable(::GlobalNamespace::SIResource_LimitedDepositType limitedDepositType) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsLimitedDepositAvailable"), {"limitedDepositType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(limitedDepositType);
        }
        bool IsNodeUnlocked(::GlobalNamespace::SIUpgradeType upgradeType) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsNodeUnlocked"), {"upgradeType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(upgradeType);
        }
        void LoadQuestProgress() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoadQuestProgress"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LoadQuestProgressServer() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoadQuestProgressServer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LoadQuestsFromJson(::BNM::Structures::Mono::String* jsonString) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoadQuestsFromJson"), {"jsonString"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(jsonString);
        }
        void LoadQuestsFromLocalJson() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoadQuestsFromLocalJson"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LoadQuestsFromServer(::BNM::Structures::Mono::List<::GlobalNamespace::RotatingQuest*>* serverQuests) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoadQuestsFromServer"), {"serverQuests"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(serverQuests);
        }
        void LoadSavedTelemetryData() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoadSavedTelemetryData"));
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
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnInvalidQuestRedeemAttempt(int questIndex, ::GlobalNamespace::RotatingQuest* quest) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnInvalidQuestRedeemAttempt"), {"questIndex", "quest"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(questIndex, quest);
        }
        void OnSuccessfulBonusRedeem(::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse* userQuestsStatus) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSuccessfulBonusRedeem"), {"userQuestsStatus"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(userQuestsStatus);
        }
        void OnSuccessfulIncrementResource(::BNM::Structures::Mono::String* resourceStr) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSuccessfulIncrementResource"), {"resourceStr"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(resourceStr);
        }
        void OnSuccessfulMonkeIdolRedeem(::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse* userQuestsStatus) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSuccessfulMonkeIdolRedeem"), {"userQuestsStatus"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(userQuestsStatus);
        }
        void OnSuccessfulQuestRedeem(int questIndex, ::GlobalNamespace::RotatingQuest* quest, ::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse* userQuestsStatus) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSuccessfulQuestRedeem"), {"questIndex", "quest", "userQuestsStatus"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(questIndex, quest, userQuestsStatus);
        }
        void ProcessAllQuests(::BNM::Structures::Mono::Action<::GlobalNamespace::RotatingQuest*>* action) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessAllQuests"), {"action"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(action);
        }
        void QuestLoadPostProcess(::GlobalNamespace::RotatingQuest* quest) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("QuestLoadPostProcess"), {"quest"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(quest);
        }
        void QuestSavePreProcess(::GlobalNamespace::RotatingQuest* quest) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("QuestSavePreProcess"), {"quest"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(quest);
        }
        void RefreshActiveQuests() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshActiveQuests"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void remove_OnClientReady_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnClientReady"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void ResetTelemetryIntervalData() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetTelemetryIntervalData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static bool ResourcesMaxed() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ResourcesMaxed"));
            return _m.Call();
        }
        void SaveQuestProgress() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SaveQuestProgress"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SaveQuestProgressServer() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SaveQuestProgressServer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SaveTelemetryData() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SaveTelemetryData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SelectActiveQuests() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SelectActiveQuests"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SelectCurrentTurnInDate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SelectCurrentTurnInDate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SendPurchaseResourcesData() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendPurchaseResourcesData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SendPurchaseTechPointsData(int techPointsPurchased) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendPurchaseTechPointsData"), {"techPointsPurchased"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(techPointsPurchased);
        }
        void SendTelemetryData() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendTelemetryData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void set_Instance(::GlobalNamespace::SIProgression* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Instance"), {"value"});
            _m.Call(value);
        }
        void SetResourceArray(::BNM::Structures::Mono::Array<int>* resourceArray) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetResourceArray"), {"resourceArray"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(resourceArray);
        }
        void SetupAllQuestEventListeners() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetupAllQuestEventListeners"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SliceUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SliceUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void StaticClearAllQuestEventListeners() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StaticClearAllQuestEventListeners"));
            _m.Call();
        }
        static void StaticSaveQuestProgress() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StaticSaveQuestProgress"));
            _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* TryClaimNewPlayerPackage() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("TryClaimNewPlayerPackage"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool TryDepositResources(::GlobalNamespace::SIResource_ResourceType type, int count) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryDepositResources"), {"type", "count"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(type, count);
        }
        bool TryUnlock(::GlobalNamespace::SIUpgradeType upgrade) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryUnlock"), {"upgrade"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(upgrade);
        }
        void UnlockNode(::GlobalNamespace::SIUpgradeType upgradeType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnlockNode"), {"upgradeType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(upgradeType);
        }
        void UpdateCurrencyOnPlayer() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateCurrencyOnPlayer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateHeldGadgetsTelemetry(::GlobalNamespace::SITechTreePageId id, bool isMine, int changeAmount) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateHeldGadgetsTelemetry"), {"id", "isMine", "changeAmount"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(id, isMine, changeAmount);
        }
        bool UpdateQuestProgresses() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("UpdateQuestProgresses"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void UpdateTree() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateTree"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateUnlockOnPlayer() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateUnlockOnPlayer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
