#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CosmeticsController_CosmeticSlots.hpp"
#include "../GorillaTag_CosmeticSystem/CosmeticAnchorAntiIntersectOffsets.hpp"

namespace GorillaNetworking {
    struct CosmeticItemInstance : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaNetworking", "CosmeticItemInstance");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaNetworking::CosmeticsController_CosmeticSlots GetActiveSlot() {
            static BNM::Method<::GorillaNetworking::CosmeticsController_CosmeticSlots> _method = GetClass().GetMethod(O("get_ActiveSlot"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GorillaNetworking::CosmeticsController_CosmeticSlots GetActiveSlot_f() {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticSlots> _field = GetClass().GetField(O("_activeSlot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRigAnchorOverrides* GetAnchorOverrides() {
            static BNM::Field<::GlobalNamespace::VRRigAnchorOverrides*> _field = GetClass().GetField(O("_anchorOverrides"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BodyDockPositions* GetBodyDockPositions() {
            static BNM::Field<::GlobalNamespace::BodyDockPositions*> _field = GetClass().GetField(O("_bodyDockPositions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::ParticleSystem*>* GetAllParticles() {
            static BNM::Field<::BNM::Structures::Mono::List<::ParticleSystem*>*> _field = GetClass().GetField(O("allParticles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Renderer*>* GetAllRenderers() {
            static BNM::Field<::BNM::Structures::Mono::List<::Renderer*>*> _field = GetClass().GetField(O("allRenderers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_CosmeticSystem::CosmeticAnchorAntiIntersectOffsets GetClippingOffsets() {
            static BNM::Field<::GorillaTag_CosmeticSystem::CosmeticAnchorAntiIntersectOffsets> _field = GetClass().GetField(O("clippingOffsets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetDbgname() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("dbgname"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GameObject*>* GetHoldableObjects() {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("holdableObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsHoldableItem() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isHoldableItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GameObject*>* GetLeftObjects() {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("leftObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GameObject*>* GetObjects() {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("objects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GameObject*>* GetRightObjects() {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("rightObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActiveSlot(::GorillaNetworking::CosmeticsController_CosmeticSlots value) {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticSlots> _field = GetClass().GetField(O("_activeSlot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAnchorOverrides(::GlobalNamespace::VRRigAnchorOverrides* value) {
            static BNM::Field<::GlobalNamespace::VRRigAnchorOverrides*> _field = GetClass().GetField(O("_anchorOverrides"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBodyDockPositions(::GlobalNamespace::BodyDockPositions* value) {
            static BNM::Field<::GlobalNamespace::BodyDockPositions*> _field = GetClass().GetField(O("_bodyDockPositions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAllParticles(::BNM::Structures::Mono::List<::ParticleSystem*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::ParticleSystem*>*> _field = GetClass().GetField(O("allParticles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAllRenderers(::BNM::Structures::Mono::List<::Renderer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Renderer*>*> _field = GetClass().GetField(O("allRenderers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetClippingOffsets(::GorillaTag_CosmeticSystem::CosmeticAnchorAntiIntersectOffsets value) {
            static BNM::Field<::GorillaTag_CosmeticSystem::CosmeticAnchorAntiIntersectOffsets> _field = GetClass().GetField(O("clippingOffsets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDbgname(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("dbgname"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoldableObjects(::BNM::Structures::Mono::List<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("holdableObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsHoldableItem(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isHoldableItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftObjects(::BNM::Structures::Mono::List<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("leftObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetObjects(::BNM::Structures::Mono::List<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("objects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightObjects(::BNM::Structures::Mono::List<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("rightObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ApplyClippingOffsets(bool itemEnabled) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyClippingOffsets"), {"itemEnabled"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(itemEnabled);
        }
        void DisableItem(::GorillaNetworking::CosmeticsController_CosmeticSlots cosmeticSlot) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DisableItem"), {"cosmeticSlot"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(cosmeticSlot);
        }
        void EnableItem(::GameObject* obj, bool enable) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnableItem"), {"obj", "enable"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(obj, enable);
        }
        void EnableItem(::GorillaNetworking::CosmeticsController_CosmeticSlots cosmeticSlot, ::GlobalNamespace::VRRig* rig) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnableItem"), {"cosmeticSlot", "rig"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(cosmeticSlot, rig);
        }
        ::GorillaNetworking::CosmeticsController_CosmeticSlots get_ActiveSlot() {
            static BNM::Method<::GorillaNetworking::CosmeticsController_CosmeticSlots> _m = GetClass().GetMethod(O("get_ActiveSlot"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void ToggleParticles(bool enabled) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ToggleParticles"), {"enabled"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(enabled);
        }
        void ToggleRenderers(bool enabled) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ToggleRenderers"), {"enabled"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(enabled);
        }
    };
}
