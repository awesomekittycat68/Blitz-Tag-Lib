#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GRUIScoreboard_ScoreboardScreen.hpp"
#include "GTZone.hpp"
#include "MonoBehaviourTick.hpp"
#include "SRand.hpp"

namespace GlobalNamespace {
    struct GhostReactor : ::GlobalNamespace::MonoBehaviourTick {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GhostReactor");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::GhostReactor* GetInstance() {
            static BNM::Field<::GlobalNamespace::GhostReactor*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static constexpr int handPrintMaxCount = 1000;
        int GetNumActivePlayers() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_NumActivePlayers"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GRBay*>* GetBays() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRBay*>*> _field = GetClass().GetField(O("bays"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBroadcastHandTapDelay() {
            static BNM::Field<float> _field = GetClass().GetField(O("broadcastHandTapDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GRCollectibleDispenser*>* GetCollectibleDispensers() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRCollectibleDispenser*>*> _field = GetClass().GetField(O("collectibleDispensers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCollectibleDispenserUpdateFrequency() {
            static BNM::Field<float> _field = GetClass().GetField(O("collectibleDispenserUpdateFrequency"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRCurrencyDepositor* GetCurrencyDepositor() {
            static BNM::Field<::GlobalNamespace::GRCurrencyDepositor*> _field = GetClass().GetField(O("currencyDepositor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRDebugUpgradeKiosk* GetDebugUpgradeKiosk() {
            static BNM::Field<::GlobalNamespace::GRDebugUpgradeKiosk*> _field = GetClass().GetField(O("debugUpgradeKiosk"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDepthConfigIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("depthConfigIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDepthLevel() {
            static BNM::Field<int> _field = GetClass().GetField(O("depthLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDifficultyScalingForCurrentFloor() {
            static BNM::Field<float> _field = GetClass().GetField(O("difficultyScalingForCurrentFloor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<float>* GetDifficultyScalingPerPlayer() {
            static BNM::Field<::BNM::Structures::Mono::List<float>*> _field = GetClass().GetField(O("difficultyScalingPerPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRDistillery* GetDistillery() {
            static BNM::Field<::GlobalNamespace::GRDistillery*> _field = GetClass().GetField(O("distillery"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static float GetDROPZONEREPEL() {
            static BNM::Field<float> _field = GetClass().GetField(O("DROP_ZONE_REPEL"));
            return _field.Get();
        }
        ::GlobalNamespace::GRDropZone* GetDropZone() {
            static BNM::Field<::GlobalNamespace::GRDropZone*> _field = GetClass().GetField(O("dropZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRUIStationEmployeeBadges* GetEmployeeBadges() {
            static BNM::Field<::GlobalNamespace::GRUIStationEmployeeBadges*> _field = GetClass().GetField(O("employeeBadges"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRUIEmployeeTerminal* GetEmployeeTerminal() {
            static BNM::Field<::GlobalNamespace::GRUIEmployeeTerminal*> _field = GetClass().GetField(O("employeeTerminal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetEntryRoomAudio() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("entryRoomAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetEntryRoomDeathSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("entryRoomDeathSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetEnvLayerMask() {
            static BNM::Field<void*> _field = GetClass().GetField(O("envLayerMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GhostReactorManager* GetGrManager() {
            static BNM::Field<::GlobalNamespace::GhostReactorManager*> _field = GetClass().GetField(O("grManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetHandPrintCombineTestDelta() {
            static BNM::Field<int> _field = GetClass().GetField(O("handPrintCombineTestDelta"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<float>* GetHandPrintData() {
            static BNM::Field<::BNM::Structures::Mono::List<float>*> _field = GetClass().GetField(O("handPrintData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHandPrintFadeTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("handPrintFadeTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHandPrintInkTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("handPrintInkTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Unity::Matrix4x4>* GetHandPrintLocations() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Unity::Matrix4x4>*> _field = GetClass().GetField(O("handPrintLocations"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetHandPrintMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("handPrintMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetHandPrintMesh() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("handPrintMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetHandPrintMPB() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("handPrintMPB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHandPrintScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("handPrintScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHandPrintTimeLeft() {
            static BNM::Field<float> _field = GetClass().GetField(O("handPrintTimeLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHandPrintTimeRight() {
            static BNM::Field<float> _field = GetClass().GetField(O("handPrintTimeRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::GhostReactor* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::GhostReactor*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        bool GetIsRefreshing() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isRefreshing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GRUIBuyItem*>* GetItemPurchaseStands() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRUIBuyItem*>*> _field = GetClass().GetField(O("itemPurchaseStands"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastBroadcastHandTapTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastBroadcastHandTapTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetLastCollectibleDispenserUpdateTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("lastCollectibleDispenserUpdateTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GhostReactorLevelGenerator* GetLevelGenerator() {
            static BNM::Field<::GlobalNamespace::GhostReactorLevelGenerator*> _field = GetClass().GetField(O("levelGenerator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameEntity* GetOverrideEnemySpawn() {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("overrideEnemySpawn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Pun::PhotonView* GetPhotonView() {
            static BNM::Field<::Photon_Pun::PhotonView*> _field = GetClass().GetField(O("photonView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<int, double>* GetPlayerProgressionData() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, double>*> _field = GetClass().GetField(O("playerProgressionData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRUIPromotionBot* GetPromotionBot() {
            static BNM::Field<::GlobalNamespace::GRUIPromotionBot*> _field = GetClass().GetField(O("promotionBot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SRand GetRandomGenerator() {
            static BNM::Field<::GlobalNamespace::SRand> _field = GetClass().GetField(O("randomGenerator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRRecycler* GetRecycler() {
            static BNM::Field<::GlobalNamespace::GRRecycler*> _field = GetClass().GetField(O("recycler"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRespawnMinDistToPlayer() {
            static BNM::Field<float> _field = GetClass().GetField(O("respawnMinDistToPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactor_EntityTypeRespawnTracker*>* GetRespawnQueue() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactor_EntityTypeRespawnTracker*>*> _field = GetClass().GetField(O("respawnQueue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRespawnTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("respawnTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetRestartMarker() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("restartMarker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GRReviveStation*>* GetReviveStations() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRReviveStation*>*> _field = GetClass().GetField(O("reviveStations"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BoxCollider* GetSafeZoneLimit() {
            static BNM::Field<::BoxCollider*> _field = GetClass().GetField(O("safeZoneLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GRUIScoreboard*>* GetScoreboards() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRUIScoreboard*>*> _field = GetClass().GetField(O("scoreboards"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRSeedExtractor* GetSeedExtractor() {
            static BNM::Field<::GlobalNamespace::GRSeedExtractor*> _field = GetClass().GetField(O("seedExtractor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSentientCoreUpdateIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("sentientCoreUpdateIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GhostReactorShiftManager* GetShiftManager() {
            static BNM::Field<::GlobalNamespace::GhostReactorShiftManager*> _field = GetClass().GetField(O("shiftManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<void*>* GetSleepableEntities() {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("sleepableEntities"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GRUIStoreDisplay*>* GetStoreDisplays() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRUIStoreDisplay*>*> _field = GetClass().GetField(O("storeDisplays"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactor_TempEnemySpawnInfo*>* GetTempSpawnEnemies() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactor_TempEnemySpawnInfo*>*> _field = GetClass().GetField(O("tempSpawnEnemies"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>* GetTempSpawnItems() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>*> _field = GetClass().GetField(O("tempSpawnItems"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetTempSpawnItemsMarker() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("tempSpawnItemsMarker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRToolProgressionManager* GetToolProgression() {
            static BNM::Field<::GlobalNamespace::GRToolProgressionManager*> _field = GetClass().GetField(O("toolProgression"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GRToolPurchaseStation*>* GetToolPurchasingStations() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRToolPurchaseStation*>*> _field = GetClass().GetField(O("toolPurchasingStations"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>* GetToolUpgradePurchaseStationsFull() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>*> _field = GetClass().GetField(O("toolUpgradePurchaseStationsFull"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRToolUpgradeStation* GetUpgradeStation() {
            static BNM::Field<::GlobalNamespace::GRToolUpgradeStation*> _field = GetClass().GetField(O("upgradeStation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GRVendingMachine*>* GetVendingMachines() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRVendingMachine*>*> _field = GetClass().GetField(O("vendingMachines"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>* GetVrRigs() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("vrRigs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GTZone GetZone() {
            static BNM::Field<::GlobalNamespace::GTZone> _field = GetClass().GetField(O("zone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BoxCollider* GetZoneLimit() {
            static BNM::Field<::BoxCollider*> _field = GetClass().GetField(O("zoneLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Rendering::ZoneShaderSettings* GetZoneShaderSettings() {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings*> _field = GetClass().GetField(O("zoneShaderSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBays(::BNM::Structures::Mono::List<::GlobalNamespace::GRBay*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRBay*>*> _field = GetClass().GetField(O("bays"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBroadcastHandTapDelay(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("broadcastHandTapDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCollectibleDispensers(::BNM::Structures::Mono::List<::GlobalNamespace::GRCollectibleDispenser*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRCollectibleDispenser*>*> _field = GetClass().GetField(O("collectibleDispensers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCollectibleDispenserUpdateFrequency(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("collectibleDispenserUpdateFrequency"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrencyDepositor(::GlobalNamespace::GRCurrencyDepositor* value) {
            static BNM::Field<::GlobalNamespace::GRCurrencyDepositor*> _field = GetClass().GetField(O("currencyDepositor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugUpgradeKiosk(::GlobalNamespace::GRDebugUpgradeKiosk* value) {
            static BNM::Field<::GlobalNamespace::GRDebugUpgradeKiosk*> _field = GetClass().GetField(O("debugUpgradeKiosk"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDepthConfigIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("depthConfigIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDepthLevel(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("depthLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDifficultyScalingForCurrentFloor(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("difficultyScalingForCurrentFloor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDifficultyScalingPerPlayer(::BNM::Structures::Mono::List<float>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<float>*> _field = GetClass().GetField(O("difficultyScalingPerPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDistillery(::GlobalNamespace::GRDistillery* value) {
            static BNM::Field<::GlobalNamespace::GRDistillery*> _field = GetClass().GetField(O("distillery"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetDROPZONEREPEL(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("DROP_ZONE_REPEL"));
            _field.Set(value);
        }
        void SetDropZone(::GlobalNamespace::GRDropZone* value) {
            static BNM::Field<::GlobalNamespace::GRDropZone*> _field = GetClass().GetField(O("dropZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEmployeeBadges(::GlobalNamespace::GRUIStationEmployeeBadges* value) {
            static BNM::Field<::GlobalNamespace::GRUIStationEmployeeBadges*> _field = GetClass().GetField(O("employeeBadges"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEmployeeTerminal(::GlobalNamespace::GRUIEmployeeTerminal* value) {
            static BNM::Field<::GlobalNamespace::GRUIEmployeeTerminal*> _field = GetClass().GetField(O("employeeTerminal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEntryRoomAudio(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("entryRoomAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEntryRoomDeathSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("entryRoomDeathSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnvLayerMask(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("envLayerMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrManager(::GlobalNamespace::GhostReactorManager* value) {
            static BNM::Field<::GlobalNamespace::GhostReactorManager*> _field = GetClass().GetField(O("grManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandPrintCombineTestDelta(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("handPrintCombineTestDelta"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandPrintData(::BNM::Structures::Mono::List<float>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<float>*> _field = GetClass().GetField(O("handPrintData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandPrintFadeTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("handPrintFadeTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandPrintInkTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("handPrintInkTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandPrintLocations(::BNM::Structures::Mono::List<::BNM::Structures::Unity::Matrix4x4>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Unity::Matrix4x4>*> _field = GetClass().GetField(O("handPrintLocations"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandPrintMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("handPrintMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandPrintMesh(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("handPrintMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandPrintMPB(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("handPrintMPB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandPrintScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("handPrintScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandPrintTimeLeft(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("handPrintTimeLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandPrintTimeRight(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("handPrintTimeRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::GhostReactor* value) {
            static BNM::Field<::GlobalNamespace::GhostReactor*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void SetIsRefreshing(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isRefreshing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetItemPurchaseStands(::BNM::Structures::Mono::List<::GlobalNamespace::GRUIBuyItem*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRUIBuyItem*>*> _field = GetClass().GetField(O("itemPurchaseStands"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastBroadcastHandTapTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastBroadcastHandTapTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastCollectibleDispenserUpdateTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("lastCollectibleDispenserUpdateTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLevelGenerator(::GlobalNamespace::GhostReactorLevelGenerator* value) {
            static BNM::Field<::GlobalNamespace::GhostReactorLevelGenerator*> _field = GetClass().GetField(O("levelGenerator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverrideEnemySpawn(::GlobalNamespace::GameEntity* value) {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("overrideEnemySpawn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPhotonView(::Photon_Pun::PhotonView* value) {
            static BNM::Field<::Photon_Pun::PhotonView*> _field = GetClass().GetField(O("photonView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerProgressionData(::BNM::Structures::Mono::Dictionary<int, double>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, double>*> _field = GetClass().GetField(O("playerProgressionData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPromotionBot(::GlobalNamespace::GRUIPromotionBot* value) {
            static BNM::Field<::GlobalNamespace::GRUIPromotionBot*> _field = GetClass().GetField(O("promotionBot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRandomGenerator(::GlobalNamespace::SRand value) {
            static BNM::Field<::GlobalNamespace::SRand> _field = GetClass().GetField(O("randomGenerator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRecycler(::GlobalNamespace::GRRecycler* value) {
            static BNM::Field<::GlobalNamespace::GRRecycler*> _field = GetClass().GetField(O("recycler"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRespawnMinDistToPlayer(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("respawnMinDistToPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRespawnQueue(::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactor_EntityTypeRespawnTracker*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactor_EntityTypeRespawnTracker*>*> _field = GetClass().GetField(O("respawnQueue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRespawnTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("respawnTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRestartMarker(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("restartMarker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReviveStations(::BNM::Structures::Mono::List<::GlobalNamespace::GRReviveStation*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRReviveStation*>*> _field = GetClass().GetField(O("reviveStations"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSafeZoneLimit(::BoxCollider* value) {
            static BNM::Field<::BoxCollider*> _field = GetClass().GetField(O("safeZoneLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScoreboards(::BNM::Structures::Mono::List<::GlobalNamespace::GRUIScoreboard*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRUIScoreboard*>*> _field = GetClass().GetField(O("scoreboards"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSeedExtractor(::GlobalNamespace::GRSeedExtractor* value) {
            static BNM::Field<::GlobalNamespace::GRSeedExtractor*> _field = GetClass().GetField(O("seedExtractor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSentientCoreUpdateIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("sentientCoreUpdateIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShiftManager(::GlobalNamespace::GhostReactorShiftManager* value) {
            static BNM::Field<::GlobalNamespace::GhostReactorShiftManager*> _field = GetClass().GetField(O("shiftManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSleepableEntities(::BNM::Structures::Mono::List<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("sleepableEntities"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStoreDisplays(::BNM::Structures::Mono::List<::GlobalNamespace::GRUIStoreDisplay*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRUIStoreDisplay*>*> _field = GetClass().GetField(O("storeDisplays"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTempSpawnEnemies(::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactor_TempEnemySpawnInfo*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactor_TempEnemySpawnInfo*>*> _field = GetClass().GetField(O("tempSpawnEnemies"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTempSpawnItems(::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>*> _field = GetClass().GetField(O("tempSpawnItems"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTempSpawnItemsMarker(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("tempSpawnItemsMarker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetToolProgression(::GlobalNamespace::GRToolProgressionManager* value) {
            static BNM::Field<::GlobalNamespace::GRToolProgressionManager*> _field = GetClass().GetField(O("toolProgression"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetToolPurchasingStations(::BNM::Structures::Mono::List<::GlobalNamespace::GRToolPurchaseStation*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRToolPurchaseStation*>*> _field = GetClass().GetField(O("toolPurchasingStations"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetToolUpgradePurchaseStationsFull(::BNM::Structures::Mono::List<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>*> _field = GetClass().GetField(O("toolUpgradePurchaseStationsFull"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpgradeStation(::GlobalNamespace::GRToolUpgradeStation* value) {
            static BNM::Field<::GlobalNamespace::GRToolUpgradeStation*> _field = GetClass().GetField(O("upgradeStation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVendingMachines(::BNM::Structures::Mono::List<::GlobalNamespace::GRVendingMachine*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRVendingMachine*>*> _field = GetClass().GetField(O("vendingMachines"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVrRigs(::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("vrRigs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZone(::GlobalNamespace::GTZone value) {
            static BNM::Field<::GlobalNamespace::GTZone> _field = GetClass().GetField(O("zone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZoneLimit(::BoxCollider* value) {
            static BNM::Field<::BoxCollider*> _field = GetClass().GetField(O("zoneLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZoneShaderSettings(::GorillaTag_Rendering::ZoneShaderSettings* value) {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings*> _field = GetClass().GetField(O("zoneShaderSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddHandprint(::BNM::Structures::Unity::Vector3 pos, ::BNM::Structures::Unity::Quaternion orient) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddHandprint"), {"pos", "orient"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pos, orient);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ClearAllHandprints() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearAllHandprints"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ClearAllRespawns() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearAllRespawns"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DelveToNextDepth() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DelveToNextDepth"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void EnableGhostReactorForVirtualStump() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnableGhostReactorForVirtualStump"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static ::GlobalNamespace::GhostReactor* Get(::GlobalNamespace::GameEntity* gameEntity) {
            static BNM::Method<::GlobalNamespace::GhostReactor*> _m = GetClass().GetMethod(O("Get"), {"gameEntity"});
            return _m.Call(gameEntity);
        }
        int get_NumActivePlayers() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_NumActivePlayers"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::GhostReactorLevelGenConfig* GetCurrLevelGenConfig() {
            static BNM::Method<::GlobalNamespace::GhostReactorLevelGenConfig*> _m = GetClass().GetMethod(O("GetCurrLevelGenConfig"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetDepthConfigIndex_1() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetDepthConfigIndex"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetDepthLevel_1() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetDepthLevel"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::GhostReactorLevelDepthConfig* GetDepthLevelConfig(int level) {
            static BNM::Method<::GlobalNamespace::GhostReactorLevelDepthConfig*> _m = GetClass().GetMethod(O("GetDepthLevelConfig"), {"level"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(level);
        }
        int GetItemCost(int entityTypeId) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetItemCost"), {"entityTypeId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(entityTypeId);
        }
        static int GetJoinDepthSectionFromLevel(int depthLevel) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetJoinDepthSectionFromLevel"), {"depthLevel"});
            return _m.Call(depthLevel);
        }
        ::GlobalNamespace::GRPatrolPath* GetPatrolPath(int64_t createData) {
            static BNM::Method<::GlobalNamespace::GRPatrolPath*> _m = GetClass().GetMethod(O("GetPatrolPath"), {"createData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(createData);
        }
        void OnAbilityDie(::GlobalNamespace::GameEntity* entity, float forcedRespawn) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnAbilityDie"), {"entity", "forcedRespawn"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entity, forcedRespawn);
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
        void OnLocalPlayerConnectedToRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLocalPlayerConnectedToRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnProgressionUpdated() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnProgressionUpdated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnTapLocal(bool isLeftHand, ::BNM::Structures::Unity::Vector3 pos, ::BNM::Structures::Unity::Quaternion orient, ::GlobalNamespace::GorillaSurfaceOverride* surfaceOverride) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTapLocal"), {"isLeftHand", "pos", "orient", "surfaceOverride"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isLeftHand, pos, orient, surfaceOverride);
        }
        void OnVRRigsChanged(::GlobalNamespace::RigContainer* container) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnVRRigsChanged"), {"container"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(container);
        }
        int PickLevelConfigForDepth(int depthLevel) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("PickLevelConfigForDepth"), {"depthLevel"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(depthLevel);
        }
        void RefreshBays() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshBays"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RefreshDepth() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshDepth"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RefreshReviveStations(bool searchScene) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshReviveStations"), {"searchScene"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(searchScene);
        }
        void RefreshScoreboards() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshScoreboards"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RefreshStore() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshStore"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetNextDelveDepth(int newLevel, int newDepthConfigIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetNextDelveDepth"), {"newLevel", "newDepthConfigIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newLevel, newDepthConfigIndex);
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateHandprints(float deltaTime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateHandprints"), {"deltaTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(deltaTime);
        }
        void UpdateLocalPlayerFromProgression() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateLocalPlayerFromProgression"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateRemoteScoreboardScreen(::GlobalNamespace::GRUIScoreboard_ScoreboardScreen scoreboardPage) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateRemoteScoreboardScreen"), {"scoreboardPage"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(scoreboardPage);
        }
        void UpdateScoreboardScreen(::GlobalNamespace::GRUIScoreboard_ScoreboardScreen newScreen) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateScoreboardScreen"), {"newScreen"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newScreen);
        }
        void VRRigRefresh() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("VRRigRefresh"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
