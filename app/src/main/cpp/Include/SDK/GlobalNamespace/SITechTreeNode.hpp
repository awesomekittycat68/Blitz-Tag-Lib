#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "EAssetReleaseTier.hpp"
#include "ESuperGameModes.hpp"
#include "SIResource_ResourceCost.hpp"
#include "SIUpgradeType.hpp"

namespace GlobalNamespace {
    struct SITechTreeNode : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SITechTreeNode");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::EAssetReleaseTier GetEdReleaseTier() {
            static BNM::Method<::GlobalNamespace::EAssetReleaseTier> _method = GetClass().GetMethod(O("get_EdReleaseTier"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetEdReleaseTier(::GlobalNamespace::EAssetReleaseTier value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_EdReleaseTier"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsAllowed() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsAllowed"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsDispensableGadget() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsDispensableGadget"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsValid() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsValid"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetCostOverride() {
            static BNM::Field<bool> _field = GetClass().GetField(O("costOverride"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetDescription() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("description"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ESuperGameModes GetExcludedGameModes() {
            static BNM::Field<::GlobalNamespace::ESuperGameModes> _field = GetClass().GetField(O("excludedGameModes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::EAssetReleaseTier GetMEdReleaseTier() {
            static BNM::Field<::GlobalNamespace::EAssetReleaseTier> _field = GetClass().GetField(O("m_edReleaseTier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetNickName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("nickName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::SIResource_ResourceCost>* GetNodeCost() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::SIResource_ResourceCost>*> _field = GetClass().GetField(O("nodeCost"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::SIUpgradeType>* GetParentUpgrades() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::SIUpgradeType>*> _field = GetClass().GetField(O("parentUpgrades"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameEntity* GetUnlockedGadgetPrefab() {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("unlockedGadgetPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIUpgradeType GetUpgradeType() {
            static BNM::Field<::GlobalNamespace::SIUpgradeType> _field = GetClass().GetField(O("upgradeType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCostOverride(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("costOverride"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDescription(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("description"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExcludedGameModes(::GlobalNamespace::ESuperGameModes value) {
            static BNM::Field<::GlobalNamespace::ESuperGameModes> _field = GetClass().GetField(O("excludedGameModes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMEdReleaseTier(::GlobalNamespace::EAssetReleaseTier value) {
            static BNM::Field<::GlobalNamespace::EAssetReleaseTier> _field = GetClass().GetField(O("m_edReleaseTier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNickName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("nickName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNodeCost(::BNM::Structures::Mono::Array<::GlobalNamespace::SIResource_ResourceCost>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::SIResource_ResourceCost>*> _field = GetClass().GetField(O("nodeCost"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParentUpgrades(::BNM::Structures::Mono::Array<::GlobalNamespace::SIUpgradeType>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::SIUpgradeType>*> _field = GetClass().GetField(O("parentUpgrades"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnlockedGadgetPrefab(::GlobalNamespace::GameEntity* value) {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("unlockedGadgetPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpgradeType(::GlobalNamespace::SIUpgradeType value) {
            static BNM::Field<::GlobalNamespace::SIUpgradeType> _field = GetClass().GetField(O("upgradeType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::GlobalNamespace::EAssetReleaseTier get_EdReleaseTier() {
            static BNM::Method<::GlobalNamespace::EAssetReleaseTier> _m = GetClass().GetMethod(O("get_EdReleaseTier"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsAllowed() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsAllowed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsDispensableGadget() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsDispensableGadget"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsValid() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsValid"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_EdReleaseTier(::GlobalNamespace::EAssetReleaseTier value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_EdReleaseTier"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
