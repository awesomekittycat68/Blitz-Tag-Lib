#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GameEntityId.hpp"
#include "GRTool_GRToolType.hpp"
#include "GRToolProgressionManager_ToolParts.hpp"

namespace GlobalNamespace {
    struct GRTool : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRTool");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void add_OnEnergyChange(::GlobalNamespace::GRTool_EnergyChangeEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnEnergyChange"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnEnergyChange(::GlobalNamespace::GRTool_EnergyChangeEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnEnergyChange"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_onToolUpgraded(::GlobalNamespace::GRTool_ToolUpgradedEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_onToolUpgraded"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_onToolUpgraded(::GlobalNamespace::GRTool_ToolUpgradedEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_onToolUpgraded"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        ::GlobalNamespace::GRAttributes* GetAttributes() {
            static BNM::Field<::GlobalNamespace::GRAttributes*> _field = GetClass().GetField(O("attributes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetEnergy() {
            static BNM::Field<int> _field = GetClass().GetField(O("energy"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GRMeterEnergy*>* GetEnergyMeters() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRMeterEnergy*>*> _field = GetClass().GetField(O("energyMeters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameEntity* GetGameEntity() {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("gameEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRTool_EnergyChangeEvent* GetOnEnergyChange() {
            static BNM::Field<::GlobalNamespace::GRTool_EnergyChangeEvent*> _field = GetClass().GetField(O("OnEnergyChange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRTool_ToolUpgradedEvent* GetOnToolUpgraded() {
            static BNM::Field<::GlobalNamespace::GRTool_ToolUpgradedEvent*> _field = GetClass().GetField(O("onToolUpgraded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* GetReservedMeshFilterSearchList() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("reservedMeshFilterSearchList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::SkinnedMeshRenderer*>* GetReservedMeshFilterSearchListSkinned() {
            static BNM::Field<::BNM::Structures::Mono::List<::SkinnedMeshRenderer*>*> _field = GetClass().GetField(O("reservedMeshFilterSearchListSkinned"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRTool_GRToolType GetToolType() {
            static BNM::Field<::GlobalNamespace::GRTool_GRToolType> _field = GetClass().GetField(O("toolType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetUpgradeFXNode() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("UpgradeFXNode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRTool_Upgrade* GetUpgradeListsAreValidFor() {
            static BNM::Field<::GlobalNamespace::GRTool_Upgrade*> _field = GetClass().GetField(O("upgradeListsAreValidFor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GRTool_Upgrade*>* GetUpgrades() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRTool_Upgrade*>*> _field = GetClass().GetField(O("upgrades"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GRTool_UpgradeSlot*>* GetUpgradeSlots() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRTool_UpgradeSlot*>*> _field = GetClass().GetField(O("upgradeSlots"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAttributes(::GlobalNamespace::GRAttributes* value) {
            static BNM::Field<::GlobalNamespace::GRAttributes*> _field = GetClass().GetField(O("attributes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnergy(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("energy"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnergyMeters(::BNM::Structures::Mono::List<::GlobalNamespace::GRMeterEnergy*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRMeterEnergy*>*> _field = GetClass().GetField(O("energyMeters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameEntity(::GlobalNamespace::GameEntity* value) {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("gameEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnEnergyChange(::GlobalNamespace::GRTool_EnergyChangeEvent* value) {
            static BNM::Field<::GlobalNamespace::GRTool_EnergyChangeEvent*> _field = GetClass().GetField(O("OnEnergyChange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnToolUpgraded(::GlobalNamespace::GRTool_ToolUpgradedEvent* value) {
            static BNM::Field<::GlobalNamespace::GRTool_ToolUpgradedEvent*> _field = GetClass().GetField(O("onToolUpgraded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReservedMeshFilterSearchList(::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("reservedMeshFilterSearchList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReservedMeshFilterSearchListSkinned(::BNM::Structures::Mono::List<::SkinnedMeshRenderer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::SkinnedMeshRenderer*>*> _field = GetClass().GetField(O("reservedMeshFilterSearchListSkinned"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetToolType(::GlobalNamespace::GRTool_GRToolType value) {
            static BNM::Field<::GlobalNamespace::GRTool_GRToolType> _field = GetClass().GetField(O("toolType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpgradeFXNode(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("UpgradeFXNode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpgradeListsAreValidFor(::GlobalNamespace::GRTool_Upgrade* value) {
            static BNM::Field<::GlobalNamespace::GRTool_Upgrade*> _field = GetClass().GetField(O("upgradeListsAreValidFor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpgrades(::BNM::Structures::Mono::List<::GlobalNamespace::GRTool_Upgrade*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRTool_Upgrade*>*> _field = GetClass().GetField(O("upgrades"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpgradeSlots(::BNM::Structures::Mono::List<::GlobalNamespace::GRTool_UpgradeSlot*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRTool_UpgradeSlot*>*> _field = GetClass().GetField(O("upgradeSlots"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void add_OnEnergyChange_1(::GlobalNamespace::GRTool_EnergyChangeEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnEnergyChange"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_onToolUpgraded_1(::GlobalNamespace::GRTool_ToolUpgradedEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_onToolUpgraded"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ClearUpgradeSlot(int slot) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearUpgradeSlot"), {"slot"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(slot);
        }
        ::GlobalNamespace::GRTool_Upgrade* FindMatchingUpgrade(::GlobalNamespace::GRToolProgressionManager_ToolParts upgradeID) {
            static BNM::Method<::GlobalNamespace::GRTool_Upgrade*> _m = GetClass().GetMethod(O("FindMatchingUpgrade"), {"upgradeID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(upgradeID);
        }
        void GetDebugTextLines(::BNM::IL2CPP::Il2CppObject*& strings) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetDebugTextLines"), {"strings"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&strings);
        }
        int GetEnergyMax() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetEnergyMax"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetEnergyStart() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetEnergyStart"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetEnergyUseCost() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetEnergyUseCost"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float GetPointDistanceToUpgrade(::BNM::Structures::Unity::Vector3 point, ::GlobalNamespace::GRTool_Upgrade* upgrade) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetPointDistanceToUpgrade"), {"point", "upgrade"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(point, upgrade);
        }
        ::Transform* GetUpgradeAttachTransform(::GlobalNamespace::GRTool_Upgrade* upgrade) {
            static BNM::Method<::Transform*> _m = GetClass().GetMethod(O("GetUpgradeAttachTransform"), {"upgrade"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(upgrade);
        }
        void GrabbedByPlayer() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GrabbedByPlayer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool HasEnoughEnergy() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasEnoughEnergy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool HasUpgradeInstalled(::GlobalNamespace::GRToolProgressionManager_ToolParts upgradeID) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasUpgradeInstalled"), {"upgradeID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(upgradeID);
        }
        bool IsEnergyFull() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsEnergyFull"));
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
        void OnEntityDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEntityDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEntityInit() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEntityInit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEntityStateChange(int64_t prevState, int64_t nextState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEntityStateChange"), {"prevState", "nextState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(prevState, nextState);
        }
        void OnGameEntityDeserialize(::BNM::IL2CPP::Il2CppObject* reader) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGameEntityDeserialize"), {"reader"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(reader);
        }
        void OnGameEntitySerialize(::BNM::IL2CPP::Il2CppObject* writer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGameEntitySerialize"), {"writer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(writer);
        }
        void RefillEnergy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefillEnergy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RefillEnergy(int count, ::GlobalNamespace::GameEntityId chargingEntityId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefillEnergy"), {"count", "chargingEntityId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(count, chargingEntityId);
        }
        void RefreshMeters() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshMeters"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void remove_OnEnergyChange_1(::GlobalNamespace::GRTool_EnergyChangeEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnEnergyChange"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_onToolUpgraded_1(::GlobalNamespace::GRTool_ToolUpgradedEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_onToolUpgraded"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetEnergy_1(int newEnergy) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetEnergy"), {"newEnergy"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newEnergy);
        }
        void SetEnergyInternal(int value, ::GlobalNamespace::GameEntityId chargingEntityId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetEnergyInternal"), {"value", "chargingEntityId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value, chargingEntityId);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpgradeTool(::GlobalNamespace::GRToolProgressionManager_ToolParts upgradeID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpgradeTool"), {"upgradeID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(upgradeID);
        }
        void UseEnergy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UseEnergy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
