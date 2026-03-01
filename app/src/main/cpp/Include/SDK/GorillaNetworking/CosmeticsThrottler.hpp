#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CosmeticsController_CosmeticSlots.hpp"
#include "CosmeticsThrottler_RigDrawState.hpp"
#include "GorillaRigHelper.hpp"

namespace GorillaNetworking {
    struct CosmeticsThrottler : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaNetworking", "CosmeticsThrottler");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetCosmeticSlots() {
            static BNM::Field<int> _field = GetClass().GetField(O("_cosmeticSlots"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GorillaNetworking::GorillaRigHelper>* GetRigHelpers() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaNetworking::GorillaRigHelper>*> _field = GetClass().GetField(O("_rigHelpers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetUpdate() {
            static BNM::Field<float> _field = GetClass().GetField(O("_update"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDrawAllCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("DrawAllCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDrawAllDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("DrawAllDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDrawMaxCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("DrawMaxCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDrawOnPlayerCount() {
            static BNM::Field<bool> _field = GetClass().GetField(O("DrawOnPlayerCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastPlayerCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastPlayerCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Camera* GetMainCamera() {
            static BNM::Field<::Camera*> _field = GetClass().GetField(O("mainCamera"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxDrawDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("MaxDrawDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetThrottlePlayerCountThreshold() {
            static BNM::Field<int> _field = GetClass().GetField(O("ThrottlePlayerCountThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GorillaNetworking::CosmeticsController_CosmeticSlots>* GetToggleSlots() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaNetworking::CosmeticsController_CosmeticSlots>*> _field = GetClass().GetField(O("ToggleSlots"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCosmeticSlots(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_cosmeticSlots"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRigHelpers(::BNM::Structures::Mono::Array<::GorillaNetworking::GorillaRigHelper>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaNetworking::GorillaRigHelper>*> _field = GetClass().GetField(O("_rigHelpers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpdate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_update"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDrawAllCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("DrawAllCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDrawAllDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("DrawAllDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDrawMaxCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("DrawMaxCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDrawOnPlayerCount(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("DrawOnPlayerCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastPlayerCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastPlayerCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMainCamera(::Camera* value) {
            static BNM::Field<::Camera*> _field = GetClass().GetField(O("mainCamera"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxDrawDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("MaxDrawDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetThrottlePlayerCountThreshold(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("ThrottlePlayerCountThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetToggleSlots(::BNM::Structures::Mono::Array<::GorillaNetworking::CosmeticsController_CosmeticSlots>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaNetworking::CosmeticsController_CosmeticSlots>*> _field = GetClass().GetField(O("ToggleSlots"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool ContainsSlot(::GorillaNetworking::CosmeticsController_CosmeticSlots slot) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ContainsSlot"), {"slot"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(slot);
        }
        void EnableAllRenderers() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnableAllRenderers"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDrawGizmosSelected() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDrawGizmosSelected"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SliceUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SliceUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ToggleRenderersOnRig(::GlobalNamespace::VRRig* rig, bool toggle) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ToggleRenderersOnRig"), {"rig", "toggle"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rig, toggle);
        }
        void ToggleRenderersOnRigForSlots(::GlobalNamespace::VRRig* rig, bool toggle, bool includesSlots) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ToggleRenderersOnRigForSlots"), {"rig", "toggle", "includesSlots"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rig, toggle, includesSlots);
        }
        void UpdatePlayerCount() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdatePlayerCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GorillaNetworking::GorillaRigHelper UpdateRigState(::GorillaNetworking::GorillaRigHelper helper, ::GorillaNetworking::CosmeticsThrottler_RigDrawState newState) {
            static BNM::Method<::GorillaNetworking::GorillaRigHelper> _m = GetClass().GetMethod(O("UpdateRigState"), {"helper", "newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(helper, newState);
        }
    };
}
