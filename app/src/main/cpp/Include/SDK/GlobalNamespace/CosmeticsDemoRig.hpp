#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CosmeticsDemoRig_EdSpawnedCosmetic.hpp"

namespace GlobalNamespace {
    struct CosmeticsDemoRig : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CosmeticsDemoRig");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::VRRig* GetVrRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("_vrRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Transform*>* GetVrRigBoneXforms() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Transform*>*> _field = GetClass().GetField(O("_vrRigBoneXforms"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Transform*>* GetVrRigSlotXforms() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Transform*>*> _field = GetClass().GetField(O("_vrRigSlotXforms"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetBadgeDefaultPos() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("badgeDefaultPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetBadgeDefaultRot() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("badgeDefaultRot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetChestOffset() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("chestOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaSkin* GetCurrentSkin() {
            static BNM::Field<::GlobalNamespace::GorillaSkin*> _field = GetClass().GetField(O("currentSkin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetDefaultFaceMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("defaultFaceMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaSkin* GetDefaultSkin() {
            static BNM::Field<::GlobalNamespace::GorillaSkin*> _field = GetClass().GetField(O("defaultSkin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CosmeticsDemoRig_EdSpawnedCosmetic GetEmptyCosmetic() {
            static BNM::Field<::GlobalNamespace::CosmeticsDemoRig_EdSpawnedCosmetic> _field = GetClass().GetField(O("emptyCosmetic"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Material*>* GetFaceMaterialSwaps() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Material*>*> _field = GetClass().GetField(O("faceMaterialSwaps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsInitialized() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isInitialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetLeftArmOffset() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("leftArmOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaterialIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("materialIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetMaterialToChangeTo0() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("materialToChangeTo0"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetMonkeColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("monkeColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetMyDefaultSkinMaterialInstance() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("myDefaultSkinMaterialInstance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOnColorChange() {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnColorChange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetRightArmOffset() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("rightArmOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSelectedMouth() {
            static BNM::Field<int> _field = GetClass().GetField(O("selectedMouth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::CosmeticsDemoRig_EdSpawnedCosmetic>* GetSpawnedCosmetics() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::CosmeticsDemoRig_EdSpawnedCosmetic>*> _field = GetClass().GetField(O("spawnedCosmetics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetVrRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("_vrRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVrRigBoneXforms(::BNM::Structures::Mono::Array<::Transform*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Transform*>*> _field = GetClass().GetField(O("_vrRigBoneXforms"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVrRigSlotXforms(::BNM::Structures::Mono::Array<::Transform*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Transform*>*> _field = GetClass().GetField(O("_vrRigSlotXforms"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBadgeDefaultPos(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("badgeDefaultPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBadgeDefaultRot(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("badgeDefaultRot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChestOffset(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("chestOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentSkin(::GlobalNamespace::GorillaSkin* value) {
            static BNM::Field<::GlobalNamespace::GorillaSkin*> _field = GetClass().GetField(O("currentSkin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultFaceMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("defaultFaceMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultSkin(::GlobalNamespace::GorillaSkin* value) {
            static BNM::Field<::GlobalNamespace::GorillaSkin*> _field = GetClass().GetField(O("defaultSkin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEmptyCosmetic(::GlobalNamespace::CosmeticsDemoRig_EdSpawnedCosmetic value) {
            static BNM::Field<::GlobalNamespace::CosmeticsDemoRig_EdSpawnedCosmetic> _field = GetClass().GetField(O("emptyCosmetic"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFaceMaterialSwaps(::BNM::Structures::Mono::Array<::Material*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Material*>*> _field = GetClass().GetField(O("faceMaterialSwaps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsInitialized(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isInitialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftArmOffset(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("leftArmOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaterialIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("materialIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaterialToChangeTo0(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("materialToChangeTo0"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMonkeColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("monkeColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMyDefaultSkinMaterialInstance(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("myDefaultSkinMaterialInstance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnColorChange(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnColorChange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightArmOffset(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("rightArmOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSelectedMouth(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("selectedMouth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnedCosmetics(::BNM::Structures::Mono::Array<::GlobalNamespace::CosmeticsDemoRig_EdSpawnedCosmetic>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::CosmeticsDemoRig_EdSpawnedCosmetic>*> _field = GetClass().GetField(O("spawnedCosmetics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
