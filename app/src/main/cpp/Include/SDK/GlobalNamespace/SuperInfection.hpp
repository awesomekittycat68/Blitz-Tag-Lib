#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GTZone.hpp"
#include "ZoneClearReason.hpp"

namespace GlobalNamespace {
    struct SuperInfection : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SuperInfection");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* preLog = "[GT/SuperInfection]  ";
        static constexpr const char* preErr = "[GT/SuperInfection]  ERROR!!!  ";
        bool GetIsAuthorityAndActive() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsAuthorityAndActive"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::SIResource*>* GetResourcePrefabs() {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::SIResource*>*> _method = GetClass().GetMethod(O("get_ResourcePrefabs"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetResourceSpawnInterval() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_ResourceSpawnInterval"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetTimeSinceLastSpawn() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_TimeSinceLastSpawn"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetTimeToNextSpawn() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_TimeToNextSpawn"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetLastResourceSpawnTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("_lastResourceSpawnTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetNextResourceUpdateTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("_nextResourceUpdateTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::SIResource*>* GetResourcePrefabs_f() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::SIResource*>*> _field = GetClass().GetField(O("_resourcePrefabs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::SIGadget*>* GetActiveGadgets() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::SIGadget*>*> _field = GetClass().GetField(O("activeGadgets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetAuthorityActorNumber() {
            static BNM::Field<int> _field = GetClass().GetField(O("authorityActorNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetAuthorityName() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("authorityName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMinRoomPopulation() {
            static BNM::Field<int> _field = GetClass().GetField(O("minRoomPopulation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPerPlayerHourlyResourceRate() {
            static BNM::Field<int> _field = GetClass().GetField(O("perPlayerHourlyResourceRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetPerRoundResourceNodeParent() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("perRoundResourceNodeParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::SIResourceRegion*>* GetPerRoundResourceRegions() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::SIResourceRegion*>*> _field = GetClass().GetField(O("perRoundResourceRegions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIPurchaseTerminal* GetPurchaseTerminal() {
            static BNM::Field<::GlobalNamespace::SIPurchaseTerminal*> _field = GetClass().GetField(O("purchaseTerminal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIQuestBoard* GetQuestBoard() {
            static BNM::Field<::GlobalNamespace::SIQuestBoard*> _field = GetClass().GetField(O("questBoard"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetResourceNodeParent() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("resourceNodeParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::SIResourceRegion*>* GetResourceRegions() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::SIResourceRegion*>*> _field = GetClass().GetField(O("resourceRegions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetResourceResetHeight() {
            static BNM::Field<float> _field = GetClass().GetField(O("resourceResetHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetResourceResetLoc() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("resourceResetLoc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRetryCreatePerRoundResources() {
            static BNM::Field<bool> _field = GetClass().GetField(O("retryCreatePerRoundResources"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::SIResourceDeposit*>* GetSiDeposits() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::SIResourceDeposit*>*> _field = GetClass().GetField(O("siDeposits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SuperInfectionManager* GetSiManager() {
            static BNM::Field<::GlobalNamespace::SuperInfectionManager*> _field = GetClass().GetField(O("siManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::SICombinedTerminal*>* GetSiTerminals() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::SICombinedTerminal*>*> _field = GetClass().GetField(O("siTerminals"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SITechTreeSO* GetTechTreeSO() {
            static BNM::Field<::GlobalNamespace::SITechTreeSO*> _field = GetClass().GetField(O("techTreeSO"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GTZone GetZone() {
            static BNM::Field<::GlobalNamespace::GTZone> _field = GetClass().GetField(O("zone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GameObject*>* GetZoneObjects() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("zoneObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetLastResourceSpawnTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_lastResourceSpawnTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextResourceUpdateTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_nextResourceUpdateTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResourcePrefabs(::BNM::Structures::Mono::List<::GlobalNamespace::SIResource*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::SIResource*>*> _field = GetClass().GetField(O("_resourcePrefabs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActiveGadgets(::BNM::Structures::Mono::List<::GlobalNamespace::SIGadget*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::SIGadget*>*> _field = GetClass().GetField(O("activeGadgets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAuthorityActorNumber(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("authorityActorNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAuthorityName(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("authorityName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinRoomPopulation(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("minRoomPopulation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPerPlayerHourlyResourceRate(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("perPlayerHourlyResourceRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPerRoundResourceNodeParent(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("perRoundResourceNodeParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPerRoundResourceRegions(::BNM::Structures::Mono::Array<::GlobalNamespace::SIResourceRegion*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::SIResourceRegion*>*> _field = GetClass().GetField(O("perRoundResourceRegions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPurchaseTerminal(::GlobalNamespace::SIPurchaseTerminal* value) {
            static BNM::Field<::GlobalNamespace::SIPurchaseTerminal*> _field = GetClass().GetField(O("purchaseTerminal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetQuestBoard(::GlobalNamespace::SIQuestBoard* value) {
            static BNM::Field<::GlobalNamespace::SIQuestBoard*> _field = GetClass().GetField(O("questBoard"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResourceNodeParent(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("resourceNodeParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResourceRegions(::BNM::Structures::Mono::Array<::GlobalNamespace::SIResourceRegion*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::SIResourceRegion*>*> _field = GetClass().GetField(O("resourceRegions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResourceResetHeight(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("resourceResetHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResourceResetLoc(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("resourceResetLoc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRetryCreatePerRoundResources(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("retryCreatePerRoundResources"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSiDeposits(::BNM::Structures::Mono::Array<::GlobalNamespace::SIResourceDeposit*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::SIResourceDeposit*>*> _field = GetClass().GetField(O("siDeposits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSiManager(::GlobalNamespace::SuperInfectionManager* value) {
            static BNM::Field<::GlobalNamespace::SuperInfectionManager*> _field = GetClass().GetField(O("siManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSiTerminals(::BNM::Structures::Mono::Array<::GlobalNamespace::SICombinedTerminal*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::SICombinedTerminal*>*> _field = GetClass().GetField(O("siTerminals"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTechTreeSO(::GlobalNamespace::SITechTreeSO* value) {
            static BNM::Field<::GlobalNamespace::SITechTreeSO*> _field = GetClass().GetField(O("techTreeSO"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZone(::GlobalNamespace::GTZone value) {
            static BNM::Field<::GlobalNamespace::GTZone> _field = GetClass().GetField(O("zone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZoneObjects(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("zoneObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddGadget(::GlobalNamespace::SIGadget* gadget) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddGadget"), {"gadget"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gadget);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CheckResourceSpawn() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckResourceSpawn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ClearPerRoundResources() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearPerRoundResources"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CreatePerRoundResources() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreatePerRoundResources"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DisableStations() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DisableStations"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void EnableStations() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnableStations"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool get_IsAuthorityAndActive() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsAuthorityAndActive"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::SIResource*>* get_ResourcePrefabs() {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::SIResource*>*> _m = GetClass().GetMethod(O("get_ResourcePrefabs"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_ResourceSpawnInterval() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_ResourceSpawnInterval"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_TimeSinceLastSpawn() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_TimeSinceLastSpawn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_TimeToNextSpawn() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_TimeToNextSpawn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float GetNextResourceSpawnTime() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetNextResourceSpawnTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float GetResourceSpawnInterval_1() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetResourceSpawnInterval"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
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
        void OnZoneClear(::GlobalNamespace::ZoneClearReason reason) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnZoneClear"), {"reason"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(reason);
        }
        void OnZoneInit() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnZoneInit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RefreshStations(int actorNr) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshStations"), {"actorNr"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(actorNr);
        }
        void RemoveGadget(::GlobalNamespace::SIGadget* gadget) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveGadget"), {"gadget"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gadget);
        }
        void RemovePlayerGadgetsOnLeave(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemovePlayerGadgetsOnLeave"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player);
        }
        void ResetPerRoundResources() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetPerRoundResources"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SliceUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SliceUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
