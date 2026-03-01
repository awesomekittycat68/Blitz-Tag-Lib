#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GRToolProgressionManager_ToolParts.hpp"

namespace GlobalNamespace {
    struct GRUIStoreDisplay : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRUIStoreDisplay");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::GRToolProgressionManager_ToolParts>* GetCachedRequiredPartsList() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRToolProgressionManager_ToolParts>*> _field = GetClass().GetField(O("cachedRequiredPartsList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetColorCanBuyCredits() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("colorCanBuyCredits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetColorCanBuyJuice() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("colorCanBuyJuice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetColorCantBuy() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("colorCantBuy"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetColorPurchaseButtonCanAfford() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("colorPurchaseButtonCanAfford"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetColorSelectedItem() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("colorSelectedItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetColorUnresearchedItem() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("colorUnresearchedItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetColorUnselectedItem() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("colorUnselectedItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetColorUnselectedUnresearchedItem() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("colorUnselectedUnresearchedItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPlayerActorId() {
            static BNM::Field<int> _field = GetClass().GetField(O("playerActorId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GhostReactor* GetReactor() {
            static BNM::Field<::GlobalNamespace::GhostReactor*> _field = GetClass().GetField(O("reactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::IDCardScanner* GetScanner() {
            static BNM::Field<::GlobalNamespace::IDCardScanner*> _field = GetClass().GetField(O("scanner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRUIStoreDisplay_GRPurchaseSlot* GetSlot() {
            static BNM::Field<::GlobalNamespace::GRUIStoreDisplay_GRPurchaseSlot*> _field = GetClass().GetField(O("slot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRToolProgressionManager* GetToolProgressionManager() {
            static BNM::Field<::GlobalNamespace::GRToolProgressionManager*> _field = GetClass().GetField(O("toolProgressionManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCachedRequiredPartsList(::BNM::Structures::Mono::List<::GlobalNamespace::GRToolProgressionManager_ToolParts>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRToolProgressionManager_ToolParts>*> _field = GetClass().GetField(O("cachedRequiredPartsList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetColorCanBuyCredits(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("colorCanBuyCredits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetColorCanBuyJuice(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("colorCanBuyJuice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetColorCantBuy(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("colorCantBuy"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetColorPurchaseButtonCanAfford(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("colorPurchaseButtonCanAfford"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetColorSelectedItem(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("colorSelectedItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetColorUnresearchedItem(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("colorUnresearchedItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetColorUnselectedItem(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("colorUnselectedItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetColorUnselectedUnresearchedItem(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("colorUnselectedUnresearchedItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerActorId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("playerActorId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReactor(::GlobalNamespace::GhostReactor* value) {
            static BNM::Field<::GlobalNamespace::GhostReactor*> _field = GetClass().GetField(O("reactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScanner(::GlobalNamespace::IDCardScanner* value) {
            static BNM::Field<::GlobalNamespace::IDCardScanner*> _field = GetClass().GetField(O("scanner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlot(::GlobalNamespace::GRUIStoreDisplay_GRPurchaseSlot* value) {
            static BNM::Field<::GlobalNamespace::GRUIStoreDisplay_GRPurchaseSlot*> _field = GetClass().GetField(O("slot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetToolProgressionManager(::GlobalNamespace::GRToolProgressionManager* value) {
            static BNM::Field<::GlobalNamespace::GRToolProgressionManager*> _field = GetClass().GetField(O("toolProgressionManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool CanLocalPlayerPurchaseItem() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanLocalPlayerPurchaseItem"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnBuy(int playerActorNumber) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnBuy"), {"playerActorNumber"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playerActorNumber);
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
        void onProgressionUpdated() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("onProgressionUpdated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RefreshItemInfo() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshItemInfo"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RefreshUI() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshUI"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Setup(int playerActorId, ::GlobalNamespace::GhostReactor* reactor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Setup"), {"playerActorId", "reactor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playerActorId, reactor);
        }
    };
}
