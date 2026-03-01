#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/HeadModel.hpp"
#include "../GlobalNamespace/HeadModel__CosmeticPartLoadInfo.hpp"
#include "HeadModel_CosmeticStand_BustType.hpp"
#include "../GorillaTag_CosmeticSystem/CosmeticInfoV2.hpp"

namespace GorillaNetworking_Store {
    struct HeadModel_CosmeticStand : ::GlobalNamespace::HeadModel {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaNetworking.Store", "HeadModel_CosmeticStand");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetMountID() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_mountID"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::Dictionary<void*, int>* GetLoadOpToPartInfoIndex() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<void*, int>*> _field = GetClass().GetField(O("_loadOp_to_partInfoIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GameObject*>* GetManuallySpawnedCosmeticParts() {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("_manuallySpawnedCosmeticParts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking_Store::HeadModel_CosmeticStand_BustType GetBustType() {
            static BNM::Field<::GorillaNetworking_Store::HeadModel_CosmeticStand_BustType> _field = GetClass().GetField(O("bustType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetDefaultMannequinBody() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("defaultMannequinBody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetDefaultMannequinChest() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("defaultMannequinChest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetDefaultMannequinFace() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("defaultMannequinFace"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetMannequin() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("mannequin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetManuallySpawnedCosmeticParts(::BNM::Structures::Mono::List<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("_manuallySpawnedCosmeticParts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBustType(::GorillaNetworking_Store::HeadModel_CosmeticStand_BustType value) {
            static BNM::Field<::GorillaNetworking_Store::HeadModel_CosmeticStand_BustType> _field = GetClass().GetField(O("bustType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultMannequinBody(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("defaultMannequinBody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultMannequinChest(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("defaultMannequinChest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultMannequinFace(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("defaultMannequinFace"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMannequin(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("mannequin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        template <typename TP0 = void*>
        void _HandleLoadCosmeticPartsV2(TP0 loadOp) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_HandleLoadCosmeticPartsV2"), {"loadOp"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(loadOp);
        }
        template <typename TP0 = void*>
        void _HandleLoadCosmeticPartsV2Fur(TP0 loadOp) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_HandleLoadCosmeticPartsV2Fur"), {"loadOp"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(loadOp);
        }
        void ClearCosmetics() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearCosmetics"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ClearManuallySpawnedCosmeticParts() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearManuallySpawnedCosmeticParts"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Mono::String* get_mountID() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_mountID"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void HandleLoadCosmeticParts(::GorillaTag_CosmeticSystem::CosmeticSO* cosmeticInfo, bool forRightSide) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleLoadCosmeticParts"), {"cosmeticInfo", "forRightSide"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(cosmeticInfo, forRightSide);
        }
        void HandleLoadingAllPieces(::BNM::Structures::Mono::String* playFabId, bool forRightSide, ::GorillaTag_CosmeticSystem::CosmeticInfoV2 cosmeticInfo) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleLoadingAllPieces"), {"playFabId", "forRightSide", "cosmeticInfo"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playFabId, forRightSide, cosmeticInfo);
        }
        void HandleLoadingFur(::BNM::Structures::Mono::String* playFabId, bool forRightSide, ::GorillaTag_CosmeticSystem::CosmeticInfoV2 cosmeticInfo) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleLoadingFur"), {"playFabId", "forRightSide", "cosmeticInfo"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playFabId, forRightSide, cosmeticInfo);
        }
        void LoadCosmeticParts(::GorillaTag_CosmeticSystem::CosmeticSO* cosmeticInfo, bool forRightSide) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoadCosmeticParts"), {"cosmeticInfo", "forRightSide"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(cosmeticInfo, forRightSide);
        }
        void LoadCosmeticPartsV2(::BNM::Structures::Mono::String* playFabId, bool forRightSide) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoadCosmeticPartsV2"), {"playFabId", "forRightSide"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playFabId, forRightSide);
        }
        void PositionWardRobeItems(::GlobalNamespace::HeadModel__CosmeticPartLoadInfo partLoadInfo) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PositionWardRobeItems"), {"partLoadInfo"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(partLoadInfo);
        }
        void PositionWardRobeItems(::GameObject* instantiateEdObject, ::GlobalNamespace::HeadModel__CosmeticPartLoadInfo partLoadInfo) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PositionWardRobeItems"), {"instantiateEdObject", "partLoadInfo"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(instantiateEdObject, partLoadInfo);
        }
        void PositionWithWardRobeOffsets(::GlobalNamespace::HeadModel__CosmeticPartLoadInfo partLoadInfo) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PositionWithWardRobeOffsets"), {"partLoadInfo"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(partLoadInfo);
        }
        void ResetMannequinSkin() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetMannequinSkin"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetStandType(::GorillaNetworking_Store::HeadModel_CosmeticStand_BustType newBustType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetStandType"), {"newBustType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newBustType);
        }
        void UpdateCosmeticsMountPositions(::GorillaTag_CosmeticSystem::CosmeticSO* findCosmeticInAllCosmeticsArraySO) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateCosmeticsMountPositions"), {"findCosmeticInAllCosmeticsArraySO"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(findCosmeticInAllCosmeticsArraySO);
        }
    };
}
