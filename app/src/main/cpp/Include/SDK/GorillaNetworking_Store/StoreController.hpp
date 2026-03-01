#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaNetworking_Store {
    struct StoreController : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaNetworking.Store", "StoreController");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GorillaNetworking_Store::StoreController* GetInstance() {
            static BNM::Field<::GorillaNetworking_Store::StoreController*> field = GetClass().GetField("instance");
            return field.Get();
        }
        ::GorillaTag_CosmeticSystem::AllCosmeticsArraySO* GetAllCosmeticsArraySO() {
            static BNM::Field<::GorillaTag_CosmeticSystem::AllCosmeticsArraySO*> _field = GetClass().GetField(O("AllCosmeticsArraySO"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetCosmeticsInitialized() {
            static BNM::Field<bool> _field = GetClass().GetField(O("cosmeticsInitialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GorillaNetworking_Store::DynamicCosmeticStand*>* GetCosmeticStandsDict() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GorillaNetworking_Store::DynamicCosmeticStand*>*> _field = GetClass().GetField(O("CosmeticStandsDict"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaNetworking_Store::StoreDepartment*>* GetDepartments() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking_Store::StoreDepartment*>*> _field = GetClass().GetField(O("Departments"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetExportHeader() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("exportHeader"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GorillaNetworking_Store::StoreController* GetInstance_f() {
            static BNM::Field<::GorillaNetworking_Store::StoreController*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        bool GetLoadFromTitleData() {
            static BNM::Field<bool> _field = GetClass().GetField(O("LoadFromTitleData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking_Store::StandImport* GetStandImport() {
            static BNM::Field<::GorillaNetworking_Store::StandImport*> _field = GetClass().GetField(O("standImport"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::List<::GorillaNetworking_Store::DynamicCosmeticStand*>*>* GetStandsByPlayfabID() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::List<::GorillaNetworking_Store::DynamicCosmeticStand*>*>*> _field = GetClass().GetField(O("StandsByPlayfabID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAllCosmeticsArraySO(::GorillaTag_CosmeticSystem::AllCosmeticsArraySO* value) {
            static BNM::Field<::GorillaTag_CosmeticSystem::AllCosmeticsArraySO*> _field = GetClass().GetField(O("AllCosmeticsArraySO"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCosmeticsInitialized(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("cosmeticsInitialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCosmeticStandsDict(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GorillaNetworking_Store::DynamicCosmeticStand*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GorillaNetworking_Store::DynamicCosmeticStand*>*> _field = GetClass().GetField(O("CosmeticStandsDict"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDepartments(::BNM::Structures::Mono::List<::GorillaNetworking_Store::StoreDepartment*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking_Store::StoreDepartment*>*> _field = GetClass().GetField(O("Departments"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExportHeader(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("exportHeader"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GorillaNetworking_Store::StoreController* value) {
            static BNM::Field<::GorillaNetworking_Store::StoreController*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void SetLoadFromTitleData(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("LoadFromTitleData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStandImport(::GorillaNetworking_Store::StandImport* value) {
            static BNM::Field<::GorillaNetworking_Store::StandImport*> _field = GetClass().GetField(O("standImport"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStandsByPlayfabID(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::List<::GorillaNetworking_Store::DynamicCosmeticStand*>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::List<::GorillaNetworking_Store::DynamicCosmeticStand*>*>*> _field = GetClass().GetField(O("StandsByPlayfabID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddStandToCosmeticStandsDictionary(::GorillaNetworking_Store::DynamicCosmeticStand* stand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddStandToCosmeticStandsDictionary"), {"stand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stand);
        }
        void AddStandToPlayfabIDDictionary(::GorillaNetworking_Store::DynamicCosmeticStand* dynamicCosmeticStand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddStandToPlayfabIDDictionary"), {"dynamicCosmeticStand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dynamicCosmeticStand);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ClearCosmetics() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearCosmetics"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Create_StandsByPlayfabIDDictionary() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Create_StandsByPlayfabIDDictionary"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ExportCosmeticStandLayoutWithItems() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ExportCosmeticStandLayoutWithItems"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ExportCosmeticStandLayoutWITHOUTItems() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ExportCosmeticStandLayoutWITHOUTItems"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void FindAllDepartments() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FindAllDepartments"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static ::GorillaTag_CosmeticSystem::CosmeticSO* FindCosmeticInAllCosmeticsArraySO(::BNM::Structures::Mono::String* playfabId) {
            static BNM::Method<::GorillaTag_CosmeticSystem::CosmeticSO*> _m = GetClass().GetMethod(O("FindCosmeticInAllCosmeticsArraySO"), {"playfabId"});
            return _m.Call(playfabId);
        }
        ::GorillaNetworking_Store::DynamicCosmeticStand* FindCosmeticStandByCosmeticName(::BNM::Structures::Mono::String* PlayFabID) {
            static BNM::Method<::GorillaNetworking_Store::DynamicCosmeticStand*> _m = GetClass().GetMethod(O("FindCosmeticStandByCosmeticName"), {"PlayFabID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(PlayFabID);
        }
        void ImportCosmeticStandLayout() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ImportCosmeticStandLayout"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ImportCosmeticStandLayoutFromTitleData(::BNM::Structures::Mono::String* TSVData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ImportCosmeticStandLayoutFromTitleData"), {"TSVData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(TSVData);
        }
        void InitalizeCosmeticStands() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitalizeCosmeticStands"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitializeFromTitleData() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeFromTitleData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitializeStandFromTitleData(::GorillaNetworking_Store::DynamicCosmeticStand* stand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeStandFromTitleData"), {"stand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stand);
        }
        void LoadCosmeticOntoStand(::BNM::Structures::Mono::String* standID, ::BNM::Structures::Mono::String* playFabId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoadCosmeticOntoStand"), {"standID", "playFabId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(standID, playFabId);
        }
        void RefreshCosmeticStandsDictionaryFromDepartments() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshCosmeticStandsDictionaryFromDepartments"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RemoveStandFromDynamicCosmeticStandsDictionary(::GorillaNetworking_Store::DynamicCosmeticStand* stand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveStandFromDynamicCosmeticStandsDictionary"), {"stand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stand);
        }
        void RemoveStandFromPlayFabIDDictionary(::GorillaNetworking_Store::DynamicCosmeticStand* dynamicCosmeticStand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveStandFromPlayFabIDDictionary"), {"dynamicCosmeticStand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dynamicCosmeticStand);
        }
        void SaveAllCosmeticsPositions() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SaveAllCosmeticsPositions"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void SetForGame() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetForGame"));
            _m.Call();
        }
    };
}
