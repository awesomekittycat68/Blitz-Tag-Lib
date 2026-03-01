#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GorillaGameModes/GameModeType.hpp"
#include "../GorillaNetworking/CosmeticsController_CosmeticItem.hpp"
#include "../GorillaNetworking/CosmeticsController_CosmeticSlots.hpp"
#include "CosmeticSwapper_CosmeticState.hpp"
#include "CosmeticSwapper_SwapMode.hpp"

namespace GorillaTag_Cosmetics {
    struct CosmeticSwapper : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Cosmetics", "CosmeticSwapper");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetCosmeticStepIndex() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_CosmeticStepIndex"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetTickRunning() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_TickRunning"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTickRunning(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_TickRunning"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GorillaNetworking::CosmeticsController* GetController() {
            static BNM::Field<::GorillaNetworking::CosmeticsController*> _field = GetClass().GetField(O("controller"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* GetCosmeticIDs() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("cosmeticIDs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaGameModes::GameModeType>* GetGameModeExclusion() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaGameModes::GameModeType>*> _field = GetClass().GetField(O("gameModeExclusion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHoldFinalStep() {
            static BNM::Field<bool> _field = GetClass().GetField(O("holdFinalStep"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsAtFinalCosmeticStep() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isAtFinalCosmeticStep"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastCosmeticSwapTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastCosmeticSwapTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetNewSwappedCosmetics() {
            static BNM::Field<void*> _field = GetClass().GetField(O("newSwappedCosmetics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOnSwappingSequenceCompleted() {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnSwappingSequenceCompleted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStepTimeout() {
            static BNM::Field<float> _field = GetClass().GetField(O("stepTimeout"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::CosmeticSwapper_SwapMode GetSwapMode() {
            static BNM::Field<::GorillaTag_Cosmetics::CosmeticSwapper_SwapMode> _field = GetClass().GetField(O("swapMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetController(::GorillaNetworking::CosmeticsController* value) {
            static BNM::Field<::GorillaNetworking::CosmeticsController*> _field = GetClass().GetField(O("controller"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCosmeticIDs(::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("cosmeticIDs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameModeExclusion(::BNM::Structures::Mono::List<::GorillaGameModes::GameModeType>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaGameModes::GameModeType>*> _field = GetClass().GetField(O("gameModeExclusion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoldFinalStep(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("holdFinalStep"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsAtFinalCosmeticStep(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isAtFinalCosmeticStep"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastCosmeticSwapTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastCosmeticSwapTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNewSwappedCosmetics(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("newSwappedCosmetics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnSwappingSequenceCompleted(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnSwappingSequenceCompleted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStepTimeout(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("stepTimeout"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSwapMode(::GorillaTag_Cosmetics::CosmeticSwapper_SwapMode value) {
            static BNM::Field<::GorillaTag_Cosmetics::CosmeticSwapper_SwapMode> _field = GetClass().GetField(O("swapMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddNewSwappedCosmetic(::GorillaTag_Cosmetics::CosmeticSwapper_CosmeticState state) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddNewSwappedCosmetic"), {"state"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(state);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GorillaNetworking::CosmeticsController_CosmeticItem FindItem(::BNM::Structures::Mono::String* nameOrId) {
            static BNM::Method<::GorillaNetworking::CosmeticsController_CosmeticItem> _m = GetClass().GetMethod(O("FindItem"), {"nameOrId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(nameOrId);
        }
        int get_CosmeticStepIndex() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_CosmeticStepIndex"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_TickRunning() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_TickRunning"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GorillaNetworking::CosmeticsController_CosmeticSlots GetCosmeticSlot(::GorillaNetworking::CosmeticsController_CosmeticItem item, bool& isLeftHand) {
            static BNM::Method<::GorillaNetworking::CosmeticsController_CosmeticSlots> _m = GetClass().GetMethod(O("GetCosmeticSlot"), {"item", "isLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(item, &isLeftHand);
        }
        ::GorillaTag_Cosmetics::CosmeticSwapper_SwapMode GetCurrentMode() {
            static BNM::Method<::GorillaTag_Cosmetics::CosmeticSwapper_SwapMode> _m = GetClass().GetMethod(O("GetCurrentMode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetCurrentStepIndex(::GlobalNamespace::VRRig* rig) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetCurrentStepIndex"), {"rig"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(rig);
        }
        int GetNumberOfSteps() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetNumberOfSteps"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void MarkFinalCosmeticStep() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MarkFinalCosmeticStep"));
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
        void RestorePreviousCosmetic(::GorillaTag_Cosmetics::CosmeticSwapper_CosmeticState state) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RestorePreviousCosmetic"), {"state"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(state);
        }
        void set_TickRunning(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TickRunning"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        bool ShouldHoldFinalStep() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ShouldHoldFinalStep"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void SwapInCosmetic(::GlobalNamespace::VRRig* vrRig) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SwapInCosmetic"), {"vrRig"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(vrRig);
        }
        void* SwapInCosmeticWithReturn(::BNM::Structures::Mono::String* nameOrId, ::GlobalNamespace::VRRig* rig) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("SwapInCosmeticWithReturn"), {"nameOrId", "rig"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(nameOrId, rig);
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TriggerSwap(::GlobalNamespace::VRRig* rig) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TriggerSwap"), {"rig"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rig);
        }
        void UnmarkFinalCosmeticStep() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnmarkFinalCosmeticStep"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
