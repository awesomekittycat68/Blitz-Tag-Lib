#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BuilderSetManager_BuilderSetStoreItem.hpp"
#include "GTGameModeEventType.hpp"
#include "GTKidEventType.hpp"
#include "GTShopEventType.hpp"
#include "GTZoneEventType.hpp"
#include "SIResource_ResourceType.hpp"
#include "SITechTreePageId.hpp"
#include "ZoneClearReason.hpp"
#include "../GorillaGameModes/GameModeType.hpp"
#include "../GorillaNetworking/CosmeticsController_CosmeticItem.hpp"

namespace GlobalNamespace {
    struct GorillaTelemetry : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaTelemetry");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Structures::Mono::String* GetEVENTNAMESPACE() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("EVENT_NAMESPACE"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>* GetGCustomMapDownloadMetrics() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>*> _field = GetClass().GetField(O("gCustomMapDownloadMetrics"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>* GetGCustomMapPerfArgs() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>*> _field = GetClass().GetField(O("gCustomMapPerfArgs"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>* GetGCustomMapTrackingMetrics() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>*> _field = GetClass().GetField(O("gCustomMapTrackingMetrics"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>* GetGGameModeStartEventArgs() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>*> _field = GetClass().GetField(O("gGameModeStartEventArgs"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>* GetGGhostReactorChaosJuiceCollectedArgs() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>*> _field = GetClass().GetField(O("gGhostReactorChaosJuiceCollectedArgs"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>* GetGGhostReactorChaosSeedStartArgs() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>*> _field = GetClass().GetField(O("gGhostReactorChaosSeedStartArgs"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>* GetGGhostReactorCreditsRefillPurchasedArgs() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>*> _field = GetClass().GetField(O("gGhostReactorCreditsRefillPurchasedArgs"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>* GetGGhostReactorFloorEndArgs() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>*> _field = GetClass().GetField(O("gGhostReactorFloorEndArgs"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>* GetGGhostReactorFloorStartArgs() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>*> _field = GetClass().GetField(O("gGhostReactorFloorStartArgs"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>* GetGGhostReactorOverdrivePurchasedArgs() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>*> _field = GetClass().GetField(O("gGhostReactorOverdrivePurchasedArgs"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>* GetGGhostReactorPodUpgradePurchasedArgs() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>*> _field = GetClass().GetField(O("gGhostReactorPodUpgradePurchasedArgs"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>* GetGGhostReactorRankUpArgs() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>*> _field = GetClass().GetField(O("gGhostReactorRankUpArgs"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>* GetGGhostReactorShiftEndArgs() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>*> _field = GetClass().GetField(O("gGhostReactorShiftEndArgs"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>* GetGGhostReactorShiftStartArgs() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>*> _field = GetClass().GetField(O("gGhostReactorShiftStartArgs"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>* GetGGhostReactorToolPurchasedArgs() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>*> _field = GetClass().GetField(O("gGhostReactorToolPurchasedArgs"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>* GetGGhostReactorToolUnlockArgs() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>*> _field = GetClass().GetField(O("gGhostReactorToolUnlockArgs"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>* GetGGhostReactorToolUpgradeArgs() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>*> _field = GetClass().GetField(O("gGhostReactorToolUpgradeArgs"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>* GetGKidEventArgs() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>*> _field = GetClass().GetField(O("gKidEventArgs"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::List<::GlobalNamespace::MothershipAnalyticsEvent*>*>* GetGListPoolMothership() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::List<::GlobalNamespace::MothershipAnalyticsEvent*>*>*> _field = GetClass().GetField(O("gListPoolMothership"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::List<::PlayFab_EventsModels::EventContents*>*>* GetGListPoolPlayFab() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::List<::PlayFab_EventsModels::EventContents*>*>*> _field = GetClass().GetField(O("gListPoolPlayFab"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>* GetGNotifEventArgs() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>*> _field = GetClass().GetField(O("gNotifEventArgs"));
            return _field.Get();
        }
        static ::GorillaNetworking::PlayFabAuthenticator* GetGPlayFabAuth() {
            static BNM::Field<::GorillaNetworking::PlayFabAuthenticator*> _field = GetClass().GetField(O("gPlayFabAuth"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>* GetGShopEventArgs() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>*> _field = GetClass().GetField(O("gShopEventArgs"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem>* GetGSingleItemBuilderParam() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem>*> _field = GetClass().GetField(O("gSingleItemBuilderParam"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::GorillaNetworking::CosmeticsController_CosmeticItem>* GetGSingleItemParam() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaNetworking::CosmeticsController_CosmeticItem>*> _field = GetClass().GetField(O("gSingleItemParam"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>* GetGSuperInfectionArgs() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>*> _field = GetClass().GetField(O("gSuperInfectionArgs"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>* GetGWamGameStartArgs() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>*> _field = GetClass().GetField(O("gWamGameStartArgs"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>* GetGWamLevelEndArgs() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>*> _field = GetClass().GetField(O("gWamLevelEndArgs"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>* GetGZoneEventArgs() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>*> _field = GetClass().GetField(O("gZoneEventArgs"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetNamespacePrefix() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("namespacePrefix"));
            return _field.Get();
        }
        static float GetNextStayTimestamp() {
            static BNM::Field<float> _field = GetClass().GetField(O("nextStayTimestamp"));
            return _field.Get();
        }
        static float GetTELEMETRYFLUSHSEC() {
            static BNM::Field<float> _field = GetClass().GetField(O("TELEMETRY_FLUSH_SEC"));
            return _field.Get();
        }
        static void* GetTelemetryEventsQueueMothership() {
            static BNM::Field<void*> _field = GetClass().GetField(O("telemetryEventsQueueMothership"));
            return _field.Get();
        }
        static void* GetTelemetryEventsQueuePlayFab() {
            static BNM::Field<void*> _field = GetClass().GetField(O("telemetryEventsQueuePlayFab"));
            return _field.Get();
        }
        static void SetGCustomMapDownloadMetrics(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>*> _field = GetClass().GetField(O("gCustomMapDownloadMetrics"));
            _field.Set(value);
        }
        static void SetGCustomMapPerfArgs(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>*> _field = GetClass().GetField(O("gCustomMapPerfArgs"));
            _field.Set(value);
        }
        static void SetGCustomMapTrackingMetrics(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>*> _field = GetClass().GetField(O("gCustomMapTrackingMetrics"));
            _field.Set(value);
        }
        static void SetGKidEventArgs(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>*> _field = GetClass().GetField(O("gKidEventArgs"));
            _field.Set(value);
        }
        static void SetGPlayFabAuth(::GorillaNetworking::PlayFabAuthenticator* value) {
            static BNM::Field<::GorillaNetworking::PlayFabAuthenticator*> _field = GetClass().GetField(O("gPlayFabAuth"));
            _field.Set(value);
        }
        static void SetGSingleItemBuilderParam(::BNM::Structures::Mono::Array<::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem>*> _field = GetClass().GetField(O("gSingleItemBuilderParam"));
            _field.Set(value);
        }
        static void SetGSingleItemParam(::BNM::Structures::Mono::Array<::GorillaNetworking::CosmeticsController_CosmeticItem>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaNetworking::CosmeticsController_CosmeticItem>*> _field = GetClass().GetField(O("gSingleItemParam"));
            _field.Set(value);
        }
        static void SetNextStayTimestamp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("nextStayTimestamp"));
            _field.Set(value);
        }
        template <typename TP0 = void*>
        static ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* BuilderItemsToStrings(TP0 items) {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _m = GetClass().GetMethod(O("BuilderItemsToStrings"), {"items"});
            return _m.Call(items);
        }
        template <typename TP1 = void*>
        static void EnqueueTelemetryEvent(::BNM::Structures::Mono::String* eventName, TP1 content, ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* customTags) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnqueueTelemetryEvent"), {"eventName", "content", "customTags"});
            _m.Call(eventName, content, customTags);
        }
        static void EnqueueTelemetryEventPlayFab(::PlayFab_EventsModels::EventContents* eventContent) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnqueueTelemetryEventPlayFab"), {"eventContent"});
            _m.Call(eventContent);
        }
        static void EnqueueZoneEvent(::GlobalNamespace::ZoneDef* zone, ::GlobalNamespace::GTZoneEventType zoneEventType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnqueueZoneEvent"), {"zone", "zoneEventType"});
            _m.Call(zone, zoneEventType);
        }
        template <typename TP0 = void*>
        static ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* FetchItemArgs(TP0 items) {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _m = GetClass().GetMethod(O("FetchItemArgs"), {"items"});
            return _m.Call(items);
        }
        static void FlushMothershipTelemetry() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FlushMothershipTelemetry"));
            _m.Call();
        }
        static void FlushPlayFabTelemetry() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FlushPlayFabTelemetry"));
            _m.Call();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::MothershipAnalyticsEvent*>* GetEventListForArrayMothership(::BNM::Structures::Mono::Array<::GlobalNamespace::MothershipAnalyticsEvent*>* array, int count) {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::MothershipAnalyticsEvent*>*> _m = GetClass().GetMethod(O("GetEventListForArrayMothership"), {"array", "count"});
            return _m.Call(array, count);
        }
        static ::BNM::Structures::Mono::List<::PlayFab_EventsModels::EventContents*>* GetEventListForArrayPlayFab(::BNM::Structures::Mono::Array<::PlayFab_EventsModels::EventContents*>* array, int count) {
            static BNM::Method<::BNM::Structures::Mono::List<::PlayFab_EventsModels::EventContents*>*> _m = GetClass().GetMethod(O("GetEventListForArrayPlayFab"), {"array", "count"});
            return _m.Call(array, count);
        }
        static void GhostReactorChaosJuiceCollected(::BNM::Structures::Mono::String* gameId, int juiceCollected, int coresProcessedByOverdrive) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GhostReactorChaosJuiceCollected"), {"gameId", "juiceCollected", "coresProcessedByOverdrive"});
            _m.Call(gameId, juiceCollected, coresProcessedByOverdrive);
        }
        static void GhostReactorChaosSeedStart(::BNM::Structures::Mono::String* gameId, ::BNM::Structures::Mono::String* unlockTime, int chaosSeedsInQueue, int floor, ::BNM::Structures::Mono::String* preset) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GhostReactorChaosSeedStart"), {"gameId", "unlockTime", "chaosSeedsInQueue", "floor", "preset"});
            _m.Call(gameId, unlockTime, chaosSeedsInQueue, floor, preset);
        }
        static void GhostReactorCreditsRefillPurchased(::BNM::Structures::Mono::String* gameId, int shinyRocksSpent, int finalCredits, int floor, ::BNM::Structures::Mono::String* preset) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GhostReactorCreditsRefillPurchased"), {"gameId", "shinyRocksSpent", "finalCredits", "floor", "preset"});
            _m.Call(gameId, shinyRocksSpent, finalCredits, floor, preset);
        }
        static void GhostReactorFloorComplete(::BNM::Structures::Mono::String* gameId, int finalCores, int totalCoresCollectedByPlayer, int totalCoresCollectedByGroup, int totalCoresSpentByPlayer, int totalCoresSpentByGroup, int gatesUnlocked, int deaths, ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* itemsPurchased, int shiftCut, bool isShiftActuallyEnding, float timeIntoShiftAtJoin, float playDuration, bool wasPlayerInAtStart, ::GlobalNamespace::ZoneClearReason zoneClearReason, int maxNumberOfPlayersInShift, int endNumberOfPlayers, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, int>* itemTypesHeldThisShift, int revives, int floor, ::BNM::Structures::Mono::String* preset, ::BNM::Structures::Mono::String* modifier, int chaosSeedsCollected, bool objectivesCompleted, ::BNM::Structures::Mono::String* section, int xpGained) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GhostReactorFloorComplete"), {"gameId", "finalCores", "totalCoresCollectedByPlayer", "totalCoresCollectedByGroup", "totalCoresSpentByPlayer", "totalCoresSpentByGroup", "gatesUnlocked", "deaths", "itemsPurchased", "shiftCut", "isShiftActuallyEnding", "timeIntoShiftAtJoin", "playDuration", "wasPlayerInAtStart", "zoneClearReason", "maxNumberOfPlayersInShift", "endNumberOfPlayers", "itemTypesHeldThisShift", "revives", "floor", "preset", "modifier", "chaosSeedsCollected", "objectivesCompleted", "section", "xpGained"});
            _m.Call(gameId, finalCores, totalCoresCollectedByPlayer, totalCoresCollectedByGroup, totalCoresSpentByPlayer, totalCoresSpentByGroup, gatesUnlocked, deaths, itemsPurchased, shiftCut, isShiftActuallyEnding, timeIntoShiftAtJoin, playDuration, wasPlayerInAtStart, zoneClearReason, maxNumberOfPlayersInShift, endNumberOfPlayers, itemTypesHeldThisShift, revives, floor, preset, modifier, chaosSeedsCollected, objectivesCompleted, section, xpGained);
        }
        static void GhostReactorFloorStart(::BNM::Structures::Mono::String* gameId, int initialCores, float timeIntoShift, bool wasPlayerInAtStart, int numPlayers, ::BNM::Structures::Mono::String* playerRank, int floor, ::BNM::Structures::Mono::String* preset, ::BNM::Structures::Mono::String* modifier) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GhostReactorFloorStart"), {"gameId", "initialCores", "timeIntoShift", "wasPlayerInAtStart", "numPlayers", "playerRank", "floor", "preset", "modifier"});
            _m.Call(gameId, initialCores, timeIntoShift, wasPlayerInAtStart, numPlayers, playerRank, floor, preset, modifier);
        }
        static void GhostReactorGameEnd(::BNM::Structures::Mono::String* gameId, int finalCores, int totalCoresCollectedByPlayer, int totalCoresCollectedByGroup, int totalCoresSpentByPlayer, int totalCoresSpentByGroup, int gatesUnlocked, int deaths, ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* itemsPurchased, int shiftCut, bool isShiftActuallyEnding, float timeIntoShiftAtJoin, float playDuration, bool wasPlayerInAtStart, ::GlobalNamespace::ZoneClearReason zoneClearReason, int maxNumberOfPlayersInShift, int endNumberOfPlayers, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, int>* itemTypesHeldThisShift, int revives, int numShiftsPlayed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GhostReactorGameEnd"), {"gameId", "finalCores", "totalCoresCollectedByPlayer", "totalCoresCollectedByGroup", "totalCoresSpentByPlayer", "totalCoresSpentByGroup", "gatesUnlocked", "deaths", "itemsPurchased", "shiftCut", "isShiftActuallyEnding", "timeIntoShiftAtJoin", "playDuration", "wasPlayerInAtStart", "zoneClearReason", "maxNumberOfPlayersInShift", "endNumberOfPlayers", "itemTypesHeldThisShift", "revives", "numShiftsPlayed"});
            _m.Call(gameId, finalCores, totalCoresCollectedByPlayer, totalCoresCollectedByGroup, totalCoresSpentByPlayer, totalCoresSpentByGroup, gatesUnlocked, deaths, itemsPurchased, shiftCut, isShiftActuallyEnding, timeIntoShiftAtJoin, playDuration, wasPlayerInAtStart, zoneClearReason, maxNumberOfPlayersInShift, endNumberOfPlayers, itemTypesHeldThisShift, revives, numShiftsPlayed);
        }
        static void GhostReactorOverdrivePurchased(::BNM::Structures::Mono::String* gameId, int shinyRocksUsed, int chaosSeedsInQueue, int floor, ::BNM::Structures::Mono::String* preset) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GhostReactorOverdrivePurchased"), {"gameId", "shinyRocksUsed", "chaosSeedsInQueue", "floor", "preset"});
            _m.Call(gameId, shinyRocksUsed, chaosSeedsInQueue, floor, preset);
        }
        static void GhostReactorPodUpgradePurchased(::BNM::Structures::Mono::String* gameId, ::BNM::Structures::Mono::String* toolName, int level, int shinyRocksSpent, int juiceSpent) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GhostReactorPodUpgradePurchased"), {"gameId", "toolName", "level", "shinyRocksSpent", "juiceSpent"});
            _m.Call(gameId, toolName, level, shinyRocksSpent, juiceSpent);
        }
        static void GhostReactorRankUp(::BNM::Structures::Mono::String* gameId, ::BNM::Structures::Mono::String* newRank, int floor, ::BNM::Structures::Mono::String* preset) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GhostReactorRankUp"), {"gameId", "newRank", "floor", "preset"});
            _m.Call(gameId, newRank, floor, preset);
        }
        static void GhostReactorShiftStart(::BNM::Structures::Mono::String* gameId, int initialCores, float timeIntoShift, bool wasPlayerInAtStart, int numPlayers, int floorJoined, ::BNM::Structures::Mono::String* playerRank) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GhostReactorShiftStart"), {"gameId", "initialCores", "timeIntoShift", "wasPlayerInAtStart", "numPlayers", "floorJoined", "playerRank"});
            _m.Call(gameId, initialCores, timeIntoShift, wasPlayerInAtStart, numPlayers, floorJoined, playerRank);
        }
        static void GhostReactorToolPurchased(::BNM::Structures::Mono::String* gameId, ::BNM::Structures::Mono::String* toolName, int toolLevel, int coresSpent, int shinyRocksSpent, int floor, ::BNM::Structures::Mono::String* preset) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GhostReactorToolPurchased"), {"gameId", "toolName", "toolLevel", "coresSpent", "shinyRocksSpent", "floor", "preset"});
            _m.Call(gameId, toolName, toolLevel, coresSpent, shinyRocksSpent, floor, preset);
        }
        static void GhostReactorToolUnlock(::BNM::Structures::Mono::String* gameId, ::BNM::Structures::Mono::String* toolName) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GhostReactorToolUnlock"), {"gameId", "toolName"});
            _m.Call(gameId, toolName);
        }
        static void GhostReactorToolUpgrade(::BNM::Structures::Mono::String* gameId, ::BNM::Structures::Mono::String* upgradeType, ::BNM::Structures::Mono::String* toolName, int newLevel, int juiceSpent, int griftSpent, int coresSpent, int floor, ::BNM::Structures::Mono::String* preset) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GhostReactorToolUpgrade"), {"gameId", "upgradeType", "toolName", "newLevel", "juiceSpent", "griftSpent", "coresSpent", "floor", "preset"});
            _m.Call(gameId, upgradeType, toolName, newLevel, juiceSpent, griftSpent, coresSpent, floor, preset);
        }
        static bool IsConnected() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsConnected"));
            return _m.Call();
        }
        static bool IsConnectedIgnoreRoom() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsConnectedIgnoreRoom"));
            return _m.Call();
        }
        static bool IsConnectedToPlayfab() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsConnectedToPlayfab"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* PlayFabUserId() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("PlayFabUserId"));
            return _m.Call();
        }
        static void PostBuilderKioskEvent(::GlobalNamespace::VRRig* playerRig, ::GlobalNamespace::GTShopEventType shopEvent, ::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem item) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PostBuilderKioskEvent"), {"playerRig", "shopEvent", "item"});
            _m.Call(playerRig, shopEvent, item);
        }
        template <typename TP2 = void*>
        static void PostBuilderKioskEvent(::GlobalNamespace::VRRig* playerRig, ::GlobalNamespace::GTShopEventType shopEvent, TP2 items) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PostBuilderKioskEvent"), {"playerRig", "shopEvent", "items"});
            _m.Call(playerRig, shopEvent, items);
        }
        static void PostCustomMapDownloadEvent(::BNM::Structures::Mono::String* mapName, int64_t mapModId, ::BNM::Structures::Mono::String* mapCreatorUsername) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PostCustomMapDownloadEvent"), {"mapName", "mapModId", "mapCreatorUsername"});
            _m.Call(mapName, mapModId, mapCreatorUsername);
        }
        static void PostCustomMapPerformance(::BNM::Structures::Mono::String* mapName, int64_t mapModId, int lowestFPS, int lowestDC, int lowestPC, int avgFPS, int avgDC, int avgPC, int highestFPS, int highestDC, int highestPC, int playtime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PostCustomMapPerformance"), {"mapName", "mapModId", "lowestFPS", "lowestDC", "lowestPC", "avgFPS", "avgDC", "avgPC", "highestFPS", "highestDC", "highestPC", "playtime"});
            _m.Call(mapName, mapModId, lowestFPS, lowestDC, lowestPC, avgFPS, avgDC, avgPC, highestFPS, highestDC, highestPC, playtime);
        }
        static void PostCustomMapTracking(::BNM::Structures::Mono::String* mapName, int64_t mapModId, ::BNM::Structures::Mono::String* mapCreatorUsername, int minPlayers, int maxPlayers, int playtime, bool privateRoom) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PostCustomMapTracking"), {"mapName", "mapModId", "mapCreatorUsername", "minPlayers", "maxPlayers", "playtime", "privateRoom"});
            _m.Call(mapName, mapModId, mapCreatorUsername, minPlayers, maxPlayers, playtime, privateRoom);
        }
        static void PostGameModeEvent(::GlobalNamespace::GTGameModeEventType gameModeEvent, ::GorillaGameModes::GameModeType gameMode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PostGameModeEvent"), {"gameModeEvent", "gameMode"});
            _m.Call(gameModeEvent, gameMode);
        }
        template <typename TP3 = void*>
        static void PostKidEvent(bool joinGroupsEnabled, bool voiceChatEnabled, bool customUsernamesEnabled, TP3 ageCategory, ::GlobalNamespace::GTKidEventType kidEvent) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PostKidEvent"), {"joinGroupsEnabled", "voiceChatEnabled", "customUsernamesEnabled", "ageCategory", "kidEvent"});
            _m.Call(joinGroupsEnabled, voiceChatEnabled, customUsernamesEnabled, ageCategory, kidEvent);
        }
        static void PostNotificationEvent(::BNM::Structures::Mono::String* notificationType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PostNotificationEvent"), {"notificationType"});
            _m.Call(notificationType);
        }
        static void PostShopEvent(::GlobalNamespace::VRRig* playerRig, ::GlobalNamespace::GTShopEventType shopEvent, ::GorillaNetworking::CosmeticsController_CosmeticItem item) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PostShopEvent"), {"playerRig", "shopEvent", "item"});
            _m.Call(playerRig, shopEvent, item);
        }
        template <typename TP2 = void*>
        static void PostShopEvent(::GlobalNamespace::VRRig* playerRig, ::GlobalNamespace::GTShopEventType shopEvent, TP2 items) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PostShopEvent"), {"playerRig", "shopEvent", "items"});
            _m.Call(playerRig, shopEvent, items);
        }
        static void PostShopEvent_OnError(::PlayFab::PlayFabError* error) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PostShopEvent_OnError"), {"error"});
            _m.Call(error);
        }
        static void PostShopEvent_OnResult(::PlayFab_ClientModels::WriteEventResponse* result) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PostShopEvent_OnResult"), {"result"});
            _m.Call(result);
        }
        static ::BNM::Structures::Mono::String* SerializeCustomTags(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* customTags) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("SerializeCustomTags"), {"customTags"});
            return _m.Call(customTags);
        }
        static void SuperInfectionEvent(::BNM::Structures::Mono::String* purchaseType, int shinyRockCost, int techPointsPurchased, float totalPlayTime, float roomPlayTime, float sessionPlayTime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SuperInfectionEvent"), {"purchaseType", "shinyRockCost", "techPointsPurchased", "totalPlayTime", "roomPlayTime", "sessionPlayTime"});
            _m.Call(purchaseType, shinyRockCost, techPointsPurchased, totalPlayTime, roomPlayTime, sessionPlayTime);
        }
        static void SuperInfectionEvent(bool roomDisconnect, float totalPlayTime, float roomPlayTime, float sessionPlayTime, float intervalPlayTime, float terminalTotalTime, float terminalIntervalTime, ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SITechTreePageId, float>* timeUsingGadgetsTotal, ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SITechTreePageId, float>* timeUsingGadgetsInterval, float timeUsingOwnGadgetsTotal, float timeUsingOwnGadgetsInterval, float timeUsingOthersGadgetsTotal, float timeUsingOthersGadgetsInterval, ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SITechTreePageId, int>* tagsUsingGadgetsTotal, ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SITechTreePageId, int>* tagsUsingGadgetsInterval, int tagsHoldingOwnGadgetsTotal, int tagsHoldingOwnGadgetsInterval, int tagsHoldingOthersGadgetsTotal, int tagsHoldingOthersGadgetsInterval, ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SIResource_ResourceType, int>* resourcesGatheredTotal, ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SIResource_ResourceType, int>* resourcesGatheredInterval, int roundsPlayedTotal, int roundsPlayedInterval, ::BNM::Structures::Mono::Array<bool>* unlockedNodes, int numberOfPlayers) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SuperInfectionEvent"), {"roomDisconnect", "totalPlayTime", "roomPlayTime", "sessionPlayTime", "intervalPlayTime", "terminalTotalTime", "terminalIntervalTime", "timeUsingGadgetsTotal", "timeUsingGadgetsInterval", "timeUsingOwnGadgetsTotal", "timeUsingOwnGadgetsInterval", "timeUsingOthersGadgetsTotal", "timeUsingOthersGadgetsInterval", "tagsUsingGadgetsTotal", "tagsUsingGadgetsInterval", "tagsHoldingOwnGadgetsTotal", "tagsHoldingOwnGadgetsInterval", "tagsHoldingOthersGadgetsTotal", "tagsHoldingOthersGadgetsInterval", "resourcesGatheredTotal", "resourcesGatheredInterval", "roundsPlayedTotal", "roundsPlayedInterval", "unlockedNodes", "numberOfPlayers"});
            _m.Call(roomDisconnect, totalPlayTime, roomPlayTime, sessionPlayTime, intervalPlayTime, terminalTotalTime, terminalIntervalTime, timeUsingGadgetsTotal, timeUsingGadgetsInterval, timeUsingOwnGadgetsTotal, timeUsingOwnGadgetsInterval, timeUsingOthersGadgetsTotal, timeUsingOthersGadgetsInterval, tagsUsingGadgetsTotal, tagsUsingGadgetsInterval, tagsHoldingOwnGadgetsTotal, tagsHoldingOwnGadgetsInterval, tagsHoldingOthersGadgetsTotal, tagsHoldingOthersGadgetsInterval, resourcesGatheredTotal, resourcesGatheredInterval, roundsPlayedTotal, roundsPlayedInterval, unlockedNodes, numberOfPlayers);
        }
        static void WamGameStart(::BNM::Structures::Mono::String* playerId, ::BNM::Structures::Mono::String* gameId, ::BNM::Structures::Mono::String* machineId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WamGameStart"), {"playerId", "gameId", "machineId"});
            _m.Call(playerId, gameId, machineId);
        }
        static void WamLevelEnd(::BNM::Structures::Mono::String* playerId, int gameId, ::BNM::Structures::Mono::String* machineId, int currentLevelNumber, int levelGoodMolesShown, int levelHazardMolesShown, int levelMinScore, int currentScore, int levelHazardMolesHit, ::BNM::Structures::Mono::String* currentGameResult) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WamLevelEnd"), {"playerId", "gameId", "machineId", "currentLevelNumber", "levelGoodMolesShown", "levelHazardMolesShown", "levelMinScore", "currentScore", "levelHazardMolesHit", "currentGameResult"});
            _m.Call(playerId, gameId, machineId, currentLevelNumber, levelGoodMolesShown, levelHazardMolesShown, levelMinScore, currentScore, levelHazardMolesHit, currentGameResult);
        }
    };
}
