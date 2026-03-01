#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CosmeticItemPrefab_EDisplayMode.hpp"
#include "../GorillaNetworking/CosmeticsController_CosmeticItem.hpp"

namespace FXP {
    struct CosmeticItemPrefab : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("FXP", "CosmeticItemPrefab");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetAffectedByStoreUpdateEvents() {
            static BNM::Field<bool> _field = GetClass().GetField(O("AffectedByStoreUpdateEvents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TextMeshPro* GetClockTextMesh() {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("clockTextMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetClockTextMeshIsValid() {
            static BNM::Field<bool> _field = GetClass().GetField(O("clockTextMeshIsValid"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Coroutine::IEnumerator* GetCoroutineAttractTimer() {
            static BNM::Field<::BNM::Coroutine::IEnumerator*> _field = GetClass().GetField(O("coroutineAttractTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Coroutine::IEnumerator* GetCoroutinePreviewTimer() {
            static BNM::Field<::BNM::Coroutine::IEnumerator*> _field = GetClass().GetField(O("coroutinePreviewTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetCosmeticMesh() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("cosmeticMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CosmeticStand* GetCosmeticStand() {
            static BNM::Field<::GlobalNamespace::CosmeticStand*> _field = GetClass().GetField(O("cosmeticStand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetCountdownSFX() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("CountdownSFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetCountdownTimerCoRoutine() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("countdownTimerCoRoutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::FXP::CosmeticItemPrefab_EDisplayMode GetCurrentDisplayMode() {
            static BNM::Field<::FXP::CosmeticItemPrefab_EDisplayMode> _field = GetClass().GetField(O("currentDisplayMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking_Store::StoreUpdateEvent* GetCurrentUpdateEvent() {
            static BNM::Field<::GorillaNetworking_Store::StoreUpdateEvent*> _field = GetClass().GetField(O("currentUpdateEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetDefaultCosmeticMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("defaultCosmeticMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetDefaultCosmeticMesh() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("defaultCosmeticMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetDefaultCountdownTextTemplate() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("defaultCountdownTextTemplate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDefaultHoursInAttractMode() {
            static BNM::Field<int> _field = GetClass().GetField(O("defaultHoursInAttractMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDefaultHoursInPreviewMode() {
            static BNM::Field<int> _field = GetClass().GetField(O("defaultHoursInPreviewMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetDefaultItemText() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("defaultItemText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetDefaultMannequinMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("defaultMannequinMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetDefaultMannequinMesh() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("defaultMannequinMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetDefaultPedestalMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("defaultPedestalMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetDefaultPedestalMesh() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("defaultPedestalMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetDefaultSFXAttractMode() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("defaultSFXAttractMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetDefaultSFXPreviewMode() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("defaultSFXPreviewMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetDefaultSFXPurchaseMode() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("defaultSFXPurchaseMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetGoAttractMode() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("goAttractMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetGoAttractModeSFX() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("goAttractModeSFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetGoAttractModeVFX() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("goAttractModeVFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetGoClock() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("goClock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetGoCosmeticItem() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("goCosmeticItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetGoCosmeticItemGameObject() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("goCosmeticItemGameObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetGoCosmeticItemMeshAtlas() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("goCosmeticItemMeshAtlas"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetGoCosmeticItemNameplate() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("goCosmeticItemNameplate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetGoMannequin() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("goMannequin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetGoPedestal() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("goPedestal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetGoPreviewMode() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("goPreviewMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetGoPreviewModeSFX() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("goPreviewModeSFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetGoPurchaseMode() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("goPurchaseMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetGoPurchaseModeSFX() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("goPurchaseModeSFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetGoPurchaseModeVFX() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("goPurchaseModeVFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::HeadModel* GetHeadModel() {
            static BNM::Field<::GlobalNamespace::HeadModel*> _field = GetClass().GetField(O("HeadModel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetHoursInAttractMode() {
            static BNM::Field<void*> _field = GetClass().GetField(O("hoursInAttractMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetHoursInPreviewMode() {
            static BNM::Field<void*> _field = GetClass().GetField(O("hoursInPreviewMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsValid() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isValid"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetItemGUID() {
            static BNM::Field<void*> _field = GetClass().GetField(O("itemGUID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetItemID() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("itemID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetItemName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("itemName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetItemSocket() {
            static BNM::Field<int> _field = GetClass().GetField(O("itemSocket"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastUpdated() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastUpdated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetMannequinMesh() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("mannequinMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetOldItemID() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("oldItemID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPedestalID() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("PedestalID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetPedestalMesh() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("pedestalMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetSfxAttractMode() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("sfxAttractMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetSfxPreviewMode() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("sfxPreviewMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetSfxPurchaseMode() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("sfxPurchaseMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Transform*>* GetSockets() {
            static BNM::Field<::BNM::Structures::Mono::List<::Transform*>*> _field = GetClass().GetField(O("sockets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetStartTime() {
            static BNM::Field<void*> _field = GetClass().GetField(O("startTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetUpdateClock() {
            static BNM::Field<float> _field = GetClass().GetField(O("updateClock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetVfxAttractMode() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("vfxAttractMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetVfxPreviewMode() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("vfxPreviewMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetVfxPurchaseMode() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("vfxPurchaseMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAffectedByStoreUpdateEvents(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("AffectedByStoreUpdateEvents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetClockTextMesh(::TextMeshPro* value) {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("clockTextMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetClockTextMeshIsValid(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("clockTextMeshIsValid"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCoroutineAttractTimer(::BNM::Coroutine::IEnumerator* value) {
            static BNM::Field<::BNM::Coroutine::IEnumerator*> _field = GetClass().GetField(O("coroutineAttractTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCoroutinePreviewTimer(::BNM::Coroutine::IEnumerator* value) {
            static BNM::Field<::BNM::Coroutine::IEnumerator*> _field = GetClass().GetField(O("coroutinePreviewTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCosmeticMesh(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("cosmeticMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCosmeticStand(::GlobalNamespace::CosmeticStand* value) {
            static BNM::Field<::GlobalNamespace::CosmeticStand*> _field = GetClass().GetField(O("cosmeticStand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCountdownSFX(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("CountdownSFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCountdownTimerCoRoutine(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("countdownTimerCoRoutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentDisplayMode(::FXP::CosmeticItemPrefab_EDisplayMode value) {
            static BNM::Field<::FXP::CosmeticItemPrefab_EDisplayMode> _field = GetClass().GetField(O("currentDisplayMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentUpdateEvent(::GorillaNetworking_Store::StoreUpdateEvent* value) {
            static BNM::Field<::GorillaNetworking_Store::StoreUpdateEvent*> _field = GetClass().GetField(O("currentUpdateEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultCosmeticMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("defaultCosmeticMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultCosmeticMesh(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("defaultCosmeticMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultCountdownTextTemplate(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("defaultCountdownTextTemplate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultHoursInAttractMode(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("defaultHoursInAttractMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultHoursInPreviewMode(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("defaultHoursInPreviewMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultItemText(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("defaultItemText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultMannequinMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("defaultMannequinMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultMannequinMesh(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("defaultMannequinMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultPedestalMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("defaultPedestalMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultPedestalMesh(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("defaultPedestalMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultSFXAttractMode(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("defaultSFXAttractMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultSFXPreviewMode(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("defaultSFXPreviewMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultSFXPurchaseMode(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("defaultSFXPurchaseMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGoAttractMode(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("goAttractMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGoAttractModeSFX(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("goAttractModeSFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGoAttractModeVFX(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("goAttractModeVFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGoClock(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("goClock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGoCosmeticItem(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("goCosmeticItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGoCosmeticItemGameObject(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("goCosmeticItemGameObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGoCosmeticItemMeshAtlas(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("goCosmeticItemMeshAtlas"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGoCosmeticItemNameplate(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("goCosmeticItemNameplate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGoMannequin(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("goMannequin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGoPedestal(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("goPedestal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGoPreviewMode(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("goPreviewMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGoPreviewModeSFX(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("goPreviewModeSFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGoPurchaseMode(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("goPurchaseMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGoPurchaseModeSFX(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("goPurchaseModeSFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGoPurchaseModeVFX(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("goPurchaseModeVFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeadModel(::GlobalNamespace::HeadModel* value) {
            static BNM::Field<::GlobalNamespace::HeadModel*> _field = GetClass().GetField(O("HeadModel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoursInAttractMode(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("hoursInAttractMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoursInPreviewMode(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("hoursInPreviewMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsValid(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isValid"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetItemGUID(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("itemGUID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetItemID(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("itemID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetItemName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("itemName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetItemSocket(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("itemSocket"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastUpdated(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastUpdated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMannequinMesh(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("mannequinMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOldItemID(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("oldItemID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPedestalID(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("PedestalID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPedestalMesh(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("pedestalMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSfxAttractMode(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("sfxAttractMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSfxPreviewMode(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("sfxPreviewMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSfxPurchaseMode(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("sfxPurchaseMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSockets(::BNM::Structures::Mono::List<::Transform*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Transform*>*> _field = GetClass().GetField(O("sockets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartTime(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("startTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpdateClock(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("updateClock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVfxAttractMode(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("vfxAttractMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVfxPreviewMode(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("vfxPreviewMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVfxPurchaseMode(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("vfxPurchaseMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ClearCosmeticAtlas() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearCosmeticAtlas"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ClearCosmeticMesh() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearCosmeticMesh"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP0 = void*>
        ::BNM::Coroutine::IEnumerator* DoAttractTimer(TP0 ReleaseTime) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("DoAttractTimer"), {"ReleaseTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(ReleaseTime);
        }
        template <typename TP0 = void*>
        ::BNM::Coroutine::IEnumerator* DoPreviewTimer(TP0 ReleaseTime) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("DoPreviewTimer"), {"ReleaseTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(ReleaseTime);
        }
        void JonsAwakeCode() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("JonsAwakeCode"));
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
        ::BNM::Coroutine::IEnumerator* PlayCountdownTimer() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("PlayCountdownTimer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void PlaySFX() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlaySFX"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetCosmeticItemFromCosmeticController(::GorillaNetworking::CosmeticsController_CosmeticItem item) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetCosmeticItemFromCosmeticController"), {"item"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(item);
        }
        void SetCosmeticItemProperties(::BNM::Structures::Mono::String* WhichGUID, ::BNM::Structures::Mono::String* Name, ::BNM::Structures::Mono::List<::Transform*>* SocketsList, int Socket, ::BNM::Structures::Mono::String* PedestalMesh, ::BNM::Structures::Mono::String* MannequinMesh) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetCosmeticItemProperties"), {"WhichGUID", "Name", "SocketsList", "Socket", "PedestalMesh", "MannequinMesh"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(WhichGUID, Name, SocketsList, Socket, PedestalMesh, MannequinMesh);
        }
        void SetCosmeticStand_1() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetCosmeticStand"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetDefaultProperties() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetDefaultProperties"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetStoreUpdateEvent(::GorillaNetworking_Store::StoreUpdateEvent* storeUpdateEvent, bool playFX) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetStoreUpdateEvent"), {"storeUpdateEvent", "playFX"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(storeUpdateEvent, playFX);
        }
        void StartAttractTimer() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartAttractTimer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StartPreviewTimer() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartPreviewTimer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StopAttractTimer() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StopAttractTimer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StopCountdownCoroutine() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StopCountdownCoroutine"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StopPreviewTimer() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StopPreviewTimer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SwitchDisplayMode(::FXP::CosmeticItemPrefab_EDisplayMode NewDisplayMode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SwitchDisplayMode"), {"NewDisplayMode"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(NewDisplayMode);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateClock() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateClock"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
