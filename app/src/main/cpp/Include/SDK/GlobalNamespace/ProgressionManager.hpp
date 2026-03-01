#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GRTool_GRToolType.hpp"
#include "ProgressionManager_CoreType.hpp"
#include "ProgressionManager_DrillUpgradeLevel.hpp"
#include "ProgressionManager_MothershipItemSummary.hpp"
#include "ProgressionManager_RequestType.hpp"
#include "ProgressionManager_WristDockUpgradeType.hpp"

namespace GlobalNamespace {
    struct ProgressionManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ProgressionManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::ProgressionManager* get_Instance() {
            static BNM::Method<::GlobalNamespace::ProgressionManager*> method = GetClass().GetMethod(O("get_Instance"));
            return method.Call();
        }
        ::GlobalNamespace::ProgressionManager* GetInstance() {
            static BNM::Method<::GlobalNamespace::ProgressionManager*> _method = GetClass().GetMethod(O("get_Instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetInstance(::GlobalNamespace::ProgressionManager* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        void add_OnChaosDepositSuccess(::BNM::Structures::Mono::Action<bool>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnChaosDepositSuccess"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnChaosDepositSuccess(::BNM::Structures::Mono::Action<bool>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnChaosDepositSuccess"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnDockWristStatusUpdated(::BNM::Structures::Mono::Action<::GlobalNamespace::ProgressionManager_DockWristStatusResponse*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnDockWristStatusUpdated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnDockWristStatusUpdated(::BNM::Structures::Mono::Action<::GlobalNamespace::ProgressionManager_DockWristStatusResponse*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnDockWristStatusUpdated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnGetShiftCredit(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, int>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnGetShiftCredit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnGetShiftCredit(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, int>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnGetShiftCredit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnGetShiftCreditCapData(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, int, int>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnGetShiftCreditCapData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnGetShiftCreditCapData(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, int, int>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnGetShiftCreditCapData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnGhostReactorInventoryUpdated(::BNM::Structures::Mono::Action<::GlobalNamespace::ProgressionManager_GhostReactorInventoryResponse*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnGhostReactorInventoryUpdated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnGhostReactorInventoryUpdated(::BNM::Structures::Mono::Action<::GlobalNamespace::ProgressionManager_GhostReactorInventoryResponse*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnGhostReactorInventoryUpdated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnGhostReactorStatsUpdated(::BNM::Structures::Mono::Action<::GlobalNamespace::ProgressionManager_GhostReactorStatsResponse*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnGhostReactorStatsUpdated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnGhostReactorStatsUpdated(::BNM::Structures::Mono::Action<::GlobalNamespace::ProgressionManager_GhostReactorStatsResponse*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnGhostReactorStatsUpdated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnInventoryUpdated(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnInventoryUpdated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnInventoryUpdated(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnInventoryUpdated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnJucierStatusUpdated(::BNM::Structures::Mono::Action<::GlobalNamespace::ProgressionManager_JuicerStatusResponse*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnJucierStatusUpdated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnJucierStatusUpdated(::BNM::Structures::Mono::Action<::GlobalNamespace::ProgressionManager_JuicerStatusResponse*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnJucierStatusUpdated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnNodeUnlocked(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnNodeUnlocked"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnNodeUnlocked(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnNodeUnlocked"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnPurchaseOverdrive(::BNM::Structures::Mono::Action<bool>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnPurchaseOverdrive"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnPurchaseOverdrive(::BNM::Structures::Mono::Action<bool>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnPurchaseOverdrive"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnPurchaseShiftCredit(::BNM::Structures::Mono::Action<bool>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnPurchaseShiftCredit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnPurchaseShiftCredit(::BNM::Structures::Mono::Action<bool>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnPurchaseShiftCredit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnPurchaseShiftCreditCapIncrease(::BNM::Structures::Mono::Action<bool>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnPurchaseShiftCreditCapIncrease"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnPurchaseShiftCreditCapIncrease(::BNM::Structures::Mono::Action<bool>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnPurchaseShiftCreditCapIncrease"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnTrackRead(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, int>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnTrackRead"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnTrackRead(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, int>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnTrackRead"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnTrackSet(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, int>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnTrackSet"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnTrackSet(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, int>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnTrackSet"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnTreeUpdated(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnTreeUpdated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnTreeUpdated(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnTreeUpdated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GlobalNamespace::ProgressionManager_MothershipItemSummary>* GetInventory() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GlobalNamespace::ProgressionManager_MothershipItemSummary>*> _field = GetClass().GetField(O("_inventory"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, int>* GetTracks() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, int>*> _field = GetClass().GetField(O("_tracks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GlobalNamespace::UserHydratedProgressionTreeResponse*>* GetTrees() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GlobalNamespace::UserHydratedProgressionTreeResponse*>*> _field = GetClass().GetField(O("_trees"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaxRetriesOnFail() {
            static BNM::Field<int> _field = GetClass().GetField(O("maxRetriesOnFail"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<bool>* GetOnChaosDepositSuccess() {
            static BNM::Field<::BNM::Structures::Mono::Action<bool>*> _field = GetClass().GetField(O("OnChaosDepositSuccess"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::GlobalNamespace::ProgressionManager_DockWristStatusResponse*>* GetOnDockWristStatusUpdated() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::ProgressionManager_DockWristStatusResponse*>*> _field = GetClass().GetField(O("OnDockWristStatusUpdated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, int>* GetOnGetShiftCredit() {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, int>*> _field = GetClass().GetField(O("OnGetShiftCredit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, int, int>* GetOnGetShiftCreditCapData() {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, int, int>*> _field = GetClass().GetField(O("OnGetShiftCreditCapData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::GlobalNamespace::ProgressionManager_GhostReactorInventoryResponse*>* GetOnGhostReactorInventoryUpdated() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::ProgressionManager_GhostReactorInventoryResponse*>*> _field = GetClass().GetField(O("OnGhostReactorInventoryUpdated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::GlobalNamespace::ProgressionManager_GhostReactorStatsResponse*>* GetOnGhostReactorStatsUpdated() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::ProgressionManager_GhostReactorStatsResponse*>*> _field = GetClass().GetField(O("OnGhostReactorStatsUpdated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<>* GetOnInventoryUpdated() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnInventoryUpdated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::GlobalNamespace::ProgressionManager_JuicerStatusResponse*>* GetOnJucierStatusUpdated() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::ProgressionManager_JuicerStatusResponse*>*> _field = GetClass().GetField(O("OnJucierStatusUpdated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* GetOnNodeUnlocked() {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("OnNodeUnlocked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<bool>* GetOnPurchaseOverdrive() {
            static BNM::Field<::BNM::Structures::Mono::Action<bool>*> _field = GetClass().GetField(O("OnPurchaseOverdrive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<bool>* GetOnPurchaseShiftCredit() {
            static BNM::Field<::BNM::Structures::Mono::Action<bool>*> _field = GetClass().GetField(O("OnPurchaseShiftCredit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<bool>* GetOnPurchaseShiftCreditCapIncrease() {
            static BNM::Field<::BNM::Structures::Mono::Action<bool>*> _field = GetClass().GetField(O("OnPurchaseShiftCreditCapIncrease"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, int>* GetOnTrackRead() {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, int>*> _field = GetClass().GetField(O("OnTrackRead"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, int>* GetOnTrackSet() {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, int>*> _field = GetClass().GetField(O("OnTrackSet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<>* GetOnTreeUpdated() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnTreeUpdated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::ProgressionManager_RequestType, int>* GetRetryCounters() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::ProgressionManager_RequestType, int>*> _field = GetClass().GetField(O("retryCounters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMaxRetriesOnFail(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("maxRetriesOnFail"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnChaosDepositSuccess(::BNM::Structures::Mono::Action<bool>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<bool>*> _field = GetClass().GetField(O("OnChaosDepositSuccess"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnDockWristStatusUpdated(::BNM::Structures::Mono::Action<::GlobalNamespace::ProgressionManager_DockWristStatusResponse*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::ProgressionManager_DockWristStatusResponse*>*> _field = GetClass().GetField(O("OnDockWristStatusUpdated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnGetShiftCredit(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, int>*> _field = GetClass().GetField(O("OnGetShiftCredit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnGetShiftCreditCapData(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, int, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, int, int>*> _field = GetClass().GetField(O("OnGetShiftCreditCapData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnGhostReactorInventoryUpdated(::BNM::Structures::Mono::Action<::GlobalNamespace::ProgressionManager_GhostReactorInventoryResponse*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::ProgressionManager_GhostReactorInventoryResponse*>*> _field = GetClass().GetField(O("OnGhostReactorInventoryUpdated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnGhostReactorStatsUpdated(::BNM::Structures::Mono::Action<::GlobalNamespace::ProgressionManager_GhostReactorStatsResponse*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::ProgressionManager_GhostReactorStatsResponse*>*> _field = GetClass().GetField(O("OnGhostReactorStatsUpdated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnInventoryUpdated(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnInventoryUpdated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnJucierStatusUpdated(::BNM::Structures::Mono::Action<::GlobalNamespace::ProgressionManager_JuicerStatusResponse*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::ProgressionManager_JuicerStatusResponse*>*> _field = GetClass().GetField(O("OnJucierStatusUpdated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnNodeUnlocked(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("OnNodeUnlocked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnPurchaseOverdrive(::BNM::Structures::Mono::Action<bool>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<bool>*> _field = GetClass().GetField(O("OnPurchaseOverdrive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnPurchaseShiftCredit(::BNM::Structures::Mono::Action<bool>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<bool>*> _field = GetClass().GetField(O("OnPurchaseShiftCredit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnPurchaseShiftCreditCapIncrease(::BNM::Structures::Mono::Action<bool>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<bool>*> _field = GetClass().GetField(O("OnPurchaseShiftCreditCapIncrease"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnTrackRead(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, int>*> _field = GetClass().GetField(O("OnTrackRead"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnTrackSet(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, int>*> _field = GetClass().GetField(O("OnTrackSet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnTreeUpdated(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnTreeUpdated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRetryCounters(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::ProgressionManager_RequestType, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::ProgressionManager_RequestType, int>*> _field = GetClass().GetField(O("retryCounters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void add_OnChaosDepositSuccess_1(::BNM::Structures::Mono::Action<bool>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnChaosDepositSuccess"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_OnDockWristStatusUpdated_1(::BNM::Structures::Mono::Action<::GlobalNamespace::ProgressionManager_DockWristStatusResponse*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnDockWristStatusUpdated"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_OnGetShiftCredit_1(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, int>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnGetShiftCredit"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_OnGetShiftCreditCapData_1(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, int, int>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnGetShiftCreditCapData"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_OnGhostReactorInventoryUpdated_1(::BNM::Structures::Mono::Action<::GlobalNamespace::ProgressionManager_GhostReactorInventoryResponse*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnGhostReactorInventoryUpdated"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_OnGhostReactorStatsUpdated_1(::BNM::Structures::Mono::Action<::GlobalNamespace::ProgressionManager_GhostReactorStatsResponse*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnGhostReactorStatsUpdated"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_OnInventoryUpdated_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnInventoryUpdated"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_OnJucierStatusUpdated_1(::BNM::Structures::Mono::Action<::GlobalNamespace::ProgressionManager_JuicerStatusResponse*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnJucierStatusUpdated"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_OnNodeUnlocked_1(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnNodeUnlocked"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_OnPurchaseOverdrive_1(::BNM::Structures::Mono::Action<bool>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnPurchaseOverdrive"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_OnPurchaseShiftCredit_1(::BNM::Structures::Mono::Action<bool>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnPurchaseShiftCredit"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_OnPurchaseShiftCreditCapIncrease_1(::BNM::Structures::Mono::Action<bool>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnPurchaseShiftCreditCapIncrease"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_OnTrackRead_1(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, int>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnTrackRead"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_OnTrackSet_1(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, int>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnTrackSet"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_OnTreeUpdated_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnTreeUpdated"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void AdvanceDockWristUpgradeLevel(::GlobalNamespace::ProgressionManager_WristDockUpgradeType upgrade) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AdvanceDockWristUpgradeLevel"), {"upgrade"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(upgrade);
        }
        void AdvanceDockWristUpgradeLevelInternal(::GlobalNamespace::ProgressionManager_WristDockUpgradeType upgrade, bool skipUserDataCache) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AdvanceDockWristUpgradeLevelInternal"), {"upgrade", "skipUserDataCache"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(upgrade, skipUserDataCache);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CollectSIIdol(::BNM::Structures::Mono::Action<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>* OnSuccess, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* OnFailure) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CollectSIIdol"), {"OnSuccess", "OnFailure"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(OnSuccess, OnFailure);
        }
        void CompleteSIBonus(::BNM::Structures::Mono::Action<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>* OnSuccess, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* OnFailure) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CompleteSIBonus"), {"OnSuccess", "OnFailure"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(OnSuccess, OnFailure);
        }
        void CompleteSIQuest(int questID, ::BNM::Structures::Mono::Action<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>* OnSuccess, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* OnFailure) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CompleteSIQuest"), {"questID", "OnSuccess", "OnFailure"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(questID, OnSuccess, OnFailure);
        }
        void DepositCore(::GlobalNamespace::ProgressionManager_CoreType coreType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DepositCore"), {"coreType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(coreType);
        }
        void DepositCoreInternal(::GlobalNamespace::ProgressionManager_CoreType coreType, bool skipUserDataCache) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DepositCoreInternal"), {"coreType", "skipUserDataCache"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(coreType, skipUserDataCache);
        }
        ::BNM::Coroutine::IEnumerator* DoAdvanceDockWristUpgradeLevel(::GlobalNamespace::ProgressionManager_AdvanceDockWristUpgradeRequest* data) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("DoAdvanceDockWristUpgradeLevel"), {"data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data);
        }
        ::BNM::Coroutine::IEnumerator* DoBonusCompleteReward(::GlobalNamespace::ProgressionManager_SetSIBonusCompleteRequest* data, ::BNM::Structures::Mono::Action<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>* OnSuccess, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* OnFailure) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("DoBonusCompleteReward"), {"data", "OnSuccess", "OnFailure"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data, OnSuccess, OnFailure);
        }
        ::BNM::Coroutine::IEnumerator* DoDepositCore(::GlobalNamespace::ProgressionManager_DepositCoreRequest* data) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("DoDepositCore"), {"data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data);
        }
        ::BNM::Coroutine::IEnumerator* DoEndOfShiftReward(::GlobalNamespace::ProgressionManager_EndOfShiftRewardRequest* data) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("DoEndOfShiftReward"), {"data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data);
        }
        ::BNM::Coroutine::IEnumerator* DoGetActiveSIQuests(::GlobalNamespace::ProgressionManager_GetActiveSIQuestsRequest* data, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::List<::GlobalNamespace::RotatingQuest*>*>* OnSuccess, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* OnFailure) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("DoGetActiveSIQuests"), {"data", "OnSuccess", "OnFailure"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data, OnSuccess, OnFailure);
        }
        ::BNM::Coroutine::IEnumerator* DoGetDockWristUpgradeStatus(::GlobalNamespace::ProgressionManager_DockWristUpgradeStatusRequest* data) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("DoGetDockWristUpgradeStatus"), {"data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data);
        }
        ::BNM::Coroutine::IEnumerator* DoGetGhostReactorInventory(::GlobalNamespace::ProgressionManager_GhostReactorInventoryRequest* data) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("DoGetGhostReactorInventory"), {"data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data);
        }
        ::BNM::Coroutine::IEnumerator* DoGetGhostReactorStats(::GlobalNamespace::ProgressionManager_GhostReactorStatsRequest* data) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("DoGetGhostReactorStats"), {"data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data);
        }
        ::BNM::Coroutine::IEnumerator* DoGetJuicerStatus(::GlobalNamespace::ProgressionManager_GetJuicerStatusRequest* data) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("DoGetJuicerStatus"), {"data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data);
        }
        ::BNM::Coroutine::IEnumerator* DoGetProgression(::GlobalNamespace::ProgressionManager_GetProgressionRequest* data) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("DoGetProgression"), {"data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data);
        }
        ::BNM::Coroutine::IEnumerator* DoGetShiftCredit(::GlobalNamespace::ProgressionManager_GetShiftCreditRequest* data) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("DoGetShiftCredit"), {"data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data);
        }
        ::BNM::Coroutine::IEnumerator* DoGetSIQuestsStatus(::GlobalNamespace::ProgressionManager_GetSIQuestsStatusRequest* data, ::BNM::Structures::Mono::Action<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>* OnSuccess, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* OnFailure) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("DoGetSIQuestsStatus"), {"data", "OnSuccess", "OnFailure"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data, OnSuccess, OnFailure);
        }
        ::BNM::Coroutine::IEnumerator* DoIdolCollectReward(::GlobalNamespace::ProgressionManager_SetSIIdolCollectRequest* data, ::BNM::Structures::Mono::Action<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>* OnSuccess, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* OnFailure) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("DoIdolCollectReward"), {"data", "OnSuccess", "OnFailure"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data, OnSuccess, OnFailure);
        }
        ::BNM::Coroutine::IEnumerator* DoIncrementSIResource(::GlobalNamespace::ProgressionManager_IncrementSIResourceRequest* data, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* OnSuccess, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* OnFailure) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("DoIncrementSIResource"), {"data", "OnSuccess", "OnFailure"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data, OnSuccess, OnFailure);
        }
        ::BNM::Coroutine::IEnumerator* DoPurchaseDrillUpgrade(::GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeRequest* data) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("DoPurchaseDrillUpgrade"), {"data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data);
        }
        ::BNM::Coroutine::IEnumerator* DoPurchaseOverdrive(::GlobalNamespace::ProgressionManager_PurchaseOverdriveRequest* data) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("DoPurchaseOverdrive"), {"data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data);
        }
        ::BNM::Coroutine::IEnumerator* DoPurchaseResources(::GlobalNamespace::ProgressionManager_PurchaseResourcesRequest* data, ::BNM::Structures::Mono::Action<::GlobalNamespace::ProgressionManager_UserInventory*>* OnSuccess, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* OnFailure) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("DoPurchaseResources"), {"data", "OnSuccess", "OnFailure"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data, OnSuccess, OnFailure);
        }
        ::BNM::Coroutine::IEnumerator* DoPurchaseShiftCredit(::GlobalNamespace::ProgressionManager_PurchaseShiftCreditRequest* data) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("DoPurchaseShiftCredit"), {"data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data);
        }
        ::BNM::Coroutine::IEnumerator* DoPurchaseShiftCreditCapIncrease(::GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseRequest* data) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("DoPurchaseShiftCreditCapIncrease"), {"data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data);
        }
        ::BNM::Coroutine::IEnumerator* DoPurchaseTechPoints(::GlobalNamespace::ProgressionManager_PurchaseTechPointsRequest* data, ::BNM::Structures::Mono::Action<>* OnSuccess, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* OnFailure) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("DoPurchaseTechPoints"), {"data", "OnSuccess", "OnFailure"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data, OnSuccess, OnFailure);
        }
        ::BNM::Coroutine::IEnumerator* DoQuestCompleteReward(::GlobalNamespace::ProgressionManager_SetSIQuestCompleteRequest* data, ::BNM::Structures::Mono::Action<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>* OnSuccess, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* OnFailure) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("DoQuestCompleteReward"), {"data", "OnSuccess", "OnFailure"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data, OnSuccess, OnFailure);
        }
        ::BNM::Coroutine::IEnumerator* DoRecycleTool(::GlobalNamespace::ProgressionManager_RecycleToolRequest* data) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("DoRecycleTool"), {"data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data);
        }
        ::BNM::Coroutine::IEnumerator* DoSetGhostReactorInventory(::GlobalNamespace::ProgressionManager_SetGhostReactorInventoryRequest* data) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("DoSetGhostReactorInventory"), {"data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data);
        }
        ::BNM::Coroutine::IEnumerator* DoSetProgression(::GlobalNamespace::ProgressionManager_SetProgressionRequest* data) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("DoSetProgression"), {"data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data);
        }
        ::BNM::Coroutine::IEnumerator* DoStartOfShift(::GlobalNamespace::ProgressionManager_StartOfShiftRequest* data) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("DoStartOfShift"), {"data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data);
        }
        ::BNM::Coroutine::IEnumerator* DoSubtractShiftCredit(::GlobalNamespace::ProgressionManager_SubtractShiftCreditRequest* data) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("DoSubtractShiftCredit"), {"data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data);
        }
        ::BNM::Coroutine::IEnumerator* DoUnlockNode(::GlobalNamespace::ProgressionManager_UnlockNodeRequest* data) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("DoUnlockNode"), {"data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data);
        }
        void EndOfShiftReward(::BNM::Structures::Mono::String* shiftId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EndOfShiftReward"), {"shiftId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(shiftId);
        }
        void EndOfShiftRewardInternal(::BNM::Structures::Mono::String* shiftId, bool skipUserDataCache) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EndOfShiftRewardInternal"), {"shiftId", "skipUserDataCache"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(shiftId, skipUserDataCache);
        }
        template <typename T>
        ::UnityWebRequest* FormatWebRequest(::BNM::Structures::Mono::String* url, T pendingRequest, ::GlobalNamespace::ProgressionManager_RequestType type) {
            static BNM::Method<::UnityWebRequest*> _m = GetClass().GetMethod(O("FormatWebRequest"), {"url", "pendingRequest", "type"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(url, pendingRequest, type);
        }
        static ::GlobalNamespace::ProgressionManager* get_Instance_1() {
            static BNM::Method<::GlobalNamespace::ProgressionManager*> _m = GetClass().GetMethod(O("get_Instance"));
            return _m.Call();
        }
        void GetActiveSIQuests(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::List<::GlobalNamespace::RotatingQuest*>*>* OnSuccess, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* OnFailure) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetActiveSIQuests"), {"OnSuccess", "OnFailure"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(OnSuccess, OnFailure);
        }
        void GetDockWristUpgradeStatus() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetDockWristUpgradeStatus"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void GetGhostReactorInventory() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetGhostReactorInventory"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void GetGhostReactorStats() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetGhostReactorStats"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool GetInventoryItem(::BNM::Structures::Mono::String* inventoryKey, ::GlobalNamespace::ProgressionManager_MothershipItemSummary& item) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetInventoryItem"), {"inventoryKey", "item"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(inventoryKey, &item);
        }
        void GetJuicerStatus() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetJuicerStatus"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void GetJuicerStatusInternal(bool skipUserDataCache) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetJuicerStatusInternal"), {"skipUserDataCache"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(skipUserDataCache);
        }
        static void GetMothershipFailure(::GlobalNamespace::MothershipError* callError, int errorCode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetMothershipFailure"), {"callError", "errorCode"});
            _m.Call(callError, errorCode);
        }
        int GetNodeCost(::BNM::Structures::Mono::String* treeName, ::BNM::Structures::Mono::String* nodeId, ::BNM::Structures::Mono::String* currencyKey) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetNodeCost"), {"treeName", "nodeId", "currencyKey"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(treeName, nodeId, currencyKey);
        }
        void GetProgression(::BNM::Structures::Mono::String* trackId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetProgression"), {"trackId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(trackId);
        }
        void GetShiftCredit(::BNM::Structures::Mono::String* mothershipId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetShiftCredit"), {"mothershipId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(mothershipId);
        }
        int GetShinyRocksTotal() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetShinyRocksTotal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void GetSIQuestStatus(::BNM::Structures::Mono::Action<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>* OnSuccess, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* OnFailure) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetSIQuestStatus"), {"OnSuccess", "OnFailure"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(OnSuccess, OnFailure);
        }
        ::GlobalNamespace::UserHydratedProgressionTreeResponse* GetTree(::BNM::Structures::Mono::String* treeName) {
            static BNM::Method<::GlobalNamespace::UserHydratedProgressionTreeResponse*> _m = GetClass().GetMethod(O("GetTree"), {"treeName"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(treeName);
        }
        bool HandleWebRequestFailures(::UnityWebRequest* request, bool retryOnConflict) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HandleWebRequestFailures"), {"request", "retryOnConflict"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(request, retryOnConflict);
        }
        template <typename T>
        ::BNM::Coroutine::IEnumerator* HandleWebRequestRetries(::GlobalNamespace::ProgressionManager_RequestType requestType, T data, ::BNM::Structures::Mono::Action<T>* actionToTake, ::BNM::Structures::Mono::Action<>* failureActionToTake) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("HandleWebRequestRetries"), {"requestType", "data", "actionToTake", "failureActionToTake"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(requestType, data, actionToTake, failureActionToTake);
        }
        void IncrementSIResource(::BNM::Structures::Mono::String* resourceName, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* OnSuccess, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* OnFailure) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("IncrementSIResource"), {"resourceName", "OnSuccess", "OnFailure"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(resourceName, OnSuccess, OnFailure);
        }
        bool IsSuccessResponse(int64_t code) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsSuccessResponse"), {"code"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(code);
        }
        void OnGetInventory(::GlobalNamespace::MothershipGetInventoryResponse* response) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGetInventory"), {"response"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(response);
        }
        void OnGetTrees(::GlobalNamespace::GetProgressionTreesForPlayerResponse* response) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGetTrees"), {"response"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(response);
        }
        void PurchaseDrillUpgrade(::GlobalNamespace::ProgressionManager_DrillUpgradeLevel upgrade) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PurchaseDrillUpgrade"), {"upgrade"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(upgrade);
        }
        void PurchaseOverdrive() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PurchaseOverdrive"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PurchaseOverdriveInternal(bool skipUserDataCache) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PurchaseOverdriveInternal"), {"skipUserDataCache"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(skipUserDataCache);
        }
        void PurchaseResources(::BNM::Structures::Mono::Action<::GlobalNamespace::ProgressionManager_UserInventory*>* OnSuccess, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* OnFailure) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PurchaseResources"), {"OnSuccess", "OnFailure"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(OnSuccess, OnFailure);
        }
        void PurchaseShiftCredit() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PurchaseShiftCredit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PurchaseShiftCreditCapIncrease() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PurchaseShiftCreditCapIncrease"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PurchaseShiftCreditCapIncreaseInternal(bool skipUserDataCache) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PurchaseShiftCreditCapIncreaseInternal"), {"skipUserDataCache"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(skipUserDataCache);
        }
        void PurchaseShiftCreditInternal(bool skipUserDataCache) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PurchaseShiftCreditInternal"), {"skipUserDataCache"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(skipUserDataCache);
        }
        void PurchaseTechPoints(int amount, ::BNM::Structures::Mono::Action<>* OnSuccess, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* OnFailure) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PurchaseTechPoints"), {"amount", "OnSuccess", "OnFailure"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(amount, OnSuccess, OnFailure);
        }
        void RecycleTool(::GlobalNamespace::GRTool_GRToolType toolBeingRecycled, int numberOfPlayers) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RecycleTool"), {"toolBeingRecycled", "numberOfPlayers"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(toolBeingRecycled, numberOfPlayers);
        }
        void RefreshProgressionTree() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshProgressionTree"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RefreshShinyRocksTotal() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshShinyRocksTotal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RefreshUserInventory() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshUserInventory"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void remove_OnChaosDepositSuccess_1(::BNM::Structures::Mono::Action<bool>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnChaosDepositSuccess"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_OnDockWristStatusUpdated_1(::BNM::Structures::Mono::Action<::GlobalNamespace::ProgressionManager_DockWristStatusResponse*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnDockWristStatusUpdated"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_OnGetShiftCredit_1(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, int>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnGetShiftCredit"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_OnGetShiftCreditCapData_1(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, int, int>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnGetShiftCreditCapData"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_OnGhostReactorInventoryUpdated_1(::BNM::Structures::Mono::Action<::GlobalNamespace::ProgressionManager_GhostReactorInventoryResponse*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnGhostReactorInventoryUpdated"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_OnGhostReactorStatsUpdated_1(::BNM::Structures::Mono::Action<::GlobalNamespace::ProgressionManager_GhostReactorStatsResponse*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnGhostReactorStatsUpdated"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_OnInventoryUpdated_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnInventoryUpdated"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_OnJucierStatusUpdated_1(::BNM::Structures::Mono::Action<::GlobalNamespace::ProgressionManager_JuicerStatusResponse*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnJucierStatusUpdated"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_OnNodeUnlocked_1(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnNodeUnlocked"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_OnPurchaseOverdrive_1(::BNM::Structures::Mono::Action<bool>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnPurchaseOverdrive"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_OnPurchaseShiftCredit_1(::BNM::Structures::Mono::Action<bool>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnPurchaseShiftCredit"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_OnPurchaseShiftCreditCapIncrease_1(::BNM::Structures::Mono::Action<bool>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnPurchaseShiftCreditCapIncrease"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_OnTrackRead_1(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, int>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnTrackRead"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_OnTrackSet_1(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, int>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnTrackSet"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_OnTreeUpdated_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnTreeUpdated"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        static void set_Instance(::GlobalNamespace::ProgressionManager* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Instance"), {"value"});
            _m.Call(value);
        }
        void SetGhostReactorInventory(::BNM::Structures::Mono::String* jsonInventory) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetGhostReactorInventory"), {"jsonInventory"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(jsonInventory);
        }
        void SetGhostReactorInventoryInternal(::BNM::Structures::Mono::String* jsonInventory, bool skipUserDataCache) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetGhostReactorInventoryInternal"), {"jsonInventory", "skipUserDataCache"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(jsonInventory, skipUserDataCache);
        }
        void SetProgression(::BNM::Structures::Mono::String* trackId, int progress) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetProgression"), {"trackId", "progress"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(trackId, progress);
        }
        void StartOfShift(::BNM::Structures::Mono::String* shiftId, int coresRequired, int numberOfPlayers, int depth) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartOfShift"), {"shiftId", "coresRequired", "numberOfPlayers", "depth"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(shiftId, coresRequired, numberOfPlayers, depth);
        }
        void SubtractShiftCredit(int creditsToSubtract) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SubtractShiftCredit"), {"creditsToSubtract"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(creditsToSubtract);
        }
        void SubtractShiftCreditInternal(int creditsToSubtract, bool skipUserDataCache) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SubtractShiftCreditInternal"), {"creditsToSubtract", "skipUserDataCache"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(creditsToSubtract, skipUserDataCache);
        }
        void UnlockNode(::BNM::Structures::Mono::String* treeId, ::BNM::Structures::Mono::String* nodeId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnlockNode"), {"treeId", "nodeId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(treeId, nodeId);
        }
    };
}
