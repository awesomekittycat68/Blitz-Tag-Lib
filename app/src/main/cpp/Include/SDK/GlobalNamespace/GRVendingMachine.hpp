#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GRVendingMachine_VendingEntry.hpp"

namespace GlobalNamespace {
    struct GRVendingMachine : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRVendingMachine");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::TMP_Text* GetCardDisplayText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("cardDisplayText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetCurrentlyVending() {
            static BNM::Field<bool> _field = GetClass().GetField(O("currentlyVending"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDebugUnlimitedPurchasing() {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugUnlimitedPurchasing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetDepositLocation() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("depositLocation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetHIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("hIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetHorizontalMax() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("horizontalMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetHorizontalMin() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("horizontalMin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHorizontalSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("horizontalSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetHorizontalSteps() {
            static BNM::Field<int> _field = GetClass().GetField(O("horizontalSteps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetHorizontalTransport() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("horizontalTransport"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetItemSpawnLocation() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("itemSpawnLocation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GhostReactor* GetReactor() {
            static BNM::Field<::GlobalNamespace::GhostReactor*> _field = GetClass().GetField(O("reactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetVendingCoroutine() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("vendingCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GRVendingMachine_VendingEntry>* GetVendingEntries() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRVendingMachine_VendingEntry>*> _field = GetClass().GetField(O("vendingEntries"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetVendingIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("vendingIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetVendingMachineId() {
            static BNM::Field<int> _field = GetClass().GetField(O("VendingMachineId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetVerticalMax() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("verticalMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetVerticalMin() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("verticalMin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetVerticalSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("verticalSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetVerticalSteps() {
            static BNM::Field<int> _field = GetClass().GetField(O("verticalSteps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetVerticalTransport() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("verticalTransport"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetVIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("vIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCardDisplayText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("cardDisplayText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentlyVending(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("currentlyVending"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugUnlimitedPurchasing(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugUnlimitedPurchasing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDepositLocation(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("depositLocation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("hIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHorizontalMax(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("horizontalMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHorizontalMin(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("horizontalMin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHorizontalSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("horizontalSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHorizontalSteps(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("horizontalSteps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHorizontalTransport(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("horizontalTransport"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetItemSpawnLocation(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("itemSpawnLocation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReactor(::GlobalNamespace::GhostReactor* value) {
            static BNM::Field<::GlobalNamespace::GhostReactor*> _field = GetClass().GetField(O("reactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVendingCoroutine(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("vendingCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVendingEntries(::BNM::Structures::Mono::List<::GlobalNamespace::GRVendingMachine_VendingEntry>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRVendingMachine_VendingEntry>*> _field = GetClass().GetField(O("vendingEntries"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVendingIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("vendingIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVendingMachineId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("VendingMachineId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVerticalMax(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("verticalMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVerticalMin(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("verticalMin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVerticalSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("verticalSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVerticalSteps(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("verticalSteps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVerticalTransport(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("verticalTransport"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("vIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::Transform* GetSpawnMarker() {
            static BNM::Method<::Transform*> _m = GetClass().GetMethod(O("GetSpawnMarker"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool MoveTransportToSlot(int x, int y, int rows, int cols, float xSpeed, float ySpeed, float dt) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("MoveTransportToSlot"), {"x", "y", "rows", "cols", "xSpeed", "ySpeed", "dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(x, y, rows, cols, xSpeed, ySpeed, dt);
        }
        void NavButtonPressedDown() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NavButtonPressedDown"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void NavButtonPressedLeft() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NavButtonPressedLeft"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void NavButtonPressedRight() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NavButtonPressedRight"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void NavButtonPressedUp() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NavButtonPressedUp"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RefreshCardReaderDisplay() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshCardReaderDisplay"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RequestPurchase() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestPurchase"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Setup(::GlobalNamespace::GhostReactor* reactor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Setup"), {"reactor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(reactor);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* VendingCoroutine() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("VendingCoroutine"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
