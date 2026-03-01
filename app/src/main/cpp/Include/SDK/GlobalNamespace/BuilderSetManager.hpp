#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BuilderSetManager_BuilderPieceSetInfo.hpp"
#include "BuilderSetManager_BuilderSetStoreItem.hpp"

namespace GlobalNamespace {
    struct BuilderSetManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BuilderSetManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::BuilderSetManager* GetInstance() {
            static BNM::Field<::GlobalNamespace::BuilderSetManager*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static constexpr const char* preLog = "[GT/MonkeBlocks/BuilderSetManager]  ";
        static constexpr const char* preErr = "[GT/MonkeBlocks/BuilderSetManager]  ERROR!!!  ";
        static constexpr const char* preErrBeta = "[GT/MonkeBlocks/BuilderSetManager]  ERROR!!!  (beta only log)  ";
        bool GetHasInstance() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_hasInstance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetHasInstance(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_hasInstance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet*>* GetStartPieceSets() {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet*>*> _method = GetClass().GetMethod(O("get_StartPieceSets"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet*>* GetAllPieceSets() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet*>*> _field = GetClass().GetField(O("_allPieceSets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem>* GetAllStoreItems() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem>*> _field = GetClass().GetField(O("_allStoreItems"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet*>* GetSeasonalSetsForSale() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet*>*> _field = GetClass().GetField(O("_seasonalSetsForSale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem>* GetSetIdToStoreItem() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem>*> _field = GetClass().GetField(O("_setIdToStoreItem"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet*>* GetSetsAlwaysForSale() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet*>*> _field = GetClass().GetField(O("_setsAlwaysForSale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet*>* GetStarterPieceSets() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet*>*> _field = GetClass().GetField(O("_starterPieceSets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet*>* GetUnlockedPieceSets() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet*>*> _field = GetClass().GetField(O("_unlockedPieceSets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetAttempts() {
            static BNM::Field<int> _field = GetClass().GetField(O("attempts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetCatalog() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("catalog"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetConcatAllSets() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("concatAllSets"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetConcatStarterSets() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("concatStarterSets"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetCurrencyName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("currencyName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<int, int>* GetDisplayGroupMap() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, int>*> _field = GetClass().GetField(O("displayGroupMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*>* GetDisplayGroups() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*>*> _field = GetClass().GetField(O("displayGroups"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetFoundCosmetic() {
            static BNM::Field<bool> _field = GetClass().GetField(O("foundCosmetic"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasPieceDictionary() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasPieceDictionary"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::BuilderSetManager* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::BuilderSetManager*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*>* GetLiveDisplayGroups() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*>*> _field = GetClass().GetField(O("liveDisplayGroups"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet*>* GetLivePieceSets() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet*>*> _field = GetClass().GetField(O("livePieceSets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetMonitor() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("monitor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnLiveSetsUpdated() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnLiveSetsUpdated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnOwnedSetsUpdated() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnOwnedSetsUpdated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiece*>* GetPieceList() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiece*>*> _field = GetClass().GetField(O("pieceList"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, int>* GetPieceSetInfoMap() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, int>*> _field = GetClass().GetField(O("pieceSetInfoMap"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderSetManager_BuilderPieceSetInfo>* GetPieceSetInfos() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderSetManager_BuilderPieceSetInfo>*> _field = GetClass().GetField(O("pieceSetInfos"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<int>* GetPieceTypes() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("pieceTypes"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, int>* GetPieceTypeToIndex() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, int>*> _field = GetClass().GetField(O("pieceTypeToIndex"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* GetPlayerIDList() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("playerIDList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPulledStoreItems() {
            static BNM::Field<bool> _field = GetClass().GetField(O("pulledStoreItems"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet*>* GetScheduledPieceSets() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet*>*> _field = GetClass().GetField(O("scheduledPieceSets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetTempStringArray() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("tempStringArray"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAllPieceSets(::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet*>*> _field = GetClass().GetField(O("_allPieceSets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAllStoreItems(::BNM::Structures::Mono::List<::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem>*> _field = GetClass().GetField(O("_allStoreItems"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSeasonalSetsForSale(::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet*>*> _field = GetClass().GetField(O("_seasonalSetsForSale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetSetIdToStoreItem(::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem>*> _field = GetClass().GetField(O("_setIdToStoreItem"));
            _field.Set(value);
        }
        void SetSetsAlwaysForSale(::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet*>*> _field = GetClass().GetField(O("_setsAlwaysForSale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStarterPieceSets(::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet*>*> _field = GetClass().GetField(O("_starterPieceSets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnlockedPieceSets(::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet*>*> _field = GetClass().GetField(O("_unlockedPieceSets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttempts(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("attempts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCatalog(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("catalog"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetConcatAllSets(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("concatAllSets"));
            _field.Set(value);
        }
        static void SetConcatStarterSets(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("concatStarterSets"));
            _field.Set(value);
        }
        void SetCurrencyName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("currencyName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisplayGroupMap(::BNM::Structures::Mono::Dictionary<int, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, int>*> _field = GetClass().GetField(O("displayGroupMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisplayGroups(::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*>*> _field = GetClass().GetField(O("displayGroups"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFoundCosmetic(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("foundCosmetic"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasPieceDictionary(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasPieceDictionary"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::BuilderSetManager* value) {
            static BNM::Field<::GlobalNamespace::BuilderSetManager*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void SetLiveDisplayGroups(::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*>*> _field = GetClass().GetField(O("liveDisplayGroups"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLivePieceSets(::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet*>*> _field = GetClass().GetField(O("livePieceSets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMonitor(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("monitor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnLiveSetsUpdated(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnLiveSetsUpdated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnOwnedSetsUpdated(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnOwnedSetsUpdated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetPieceList(::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiece*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiece*>*> _field = GetClass().GetField(O("pieceList"));
            _field.Set(value);
        }
        static void SetPieceSetInfoMap(::BNM::Structures::Mono::Dictionary<int, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, int>*> _field = GetClass().GetField(O("pieceSetInfoMap"));
            _field.Set(value);
        }
        static void SetPieceSetInfos(::BNM::Structures::Mono::List<::GlobalNamespace::BuilderSetManager_BuilderPieceSetInfo>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderSetManager_BuilderPieceSetInfo>*> _field = GetClass().GetField(O("pieceSetInfos"));
            _field.Set(value);
        }
        static void SetPieceTypes(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("pieceTypes"));
            _field.Set(value);
        }
        static void SetPieceTypeToIndex(::BNM::Structures::Mono::Dictionary<int, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, int>*> _field = GetClass().GetField(O("pieceTypeToIndex"));
            _field.Set(value);
        }
        void SetPlayerIDList(::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("playerIDList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPulledStoreItems(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("pulledStoreItems"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScheduledPieceSets(::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet*>*> _field = GetClass().GetField(O("scheduledPieceSets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTempStringArray(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("tempStringArray"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddPieceToInfoMap(int pieceType, int pieceMaterial, int setID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddPieceToInfoMap"), {"pieceType", "pieceMaterial", "setID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pieceType, pieceMaterial, setID);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* CheckIfMyCosmeticsUpdated(::BNM::Structures::Mono::String* itemToBuyID) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("CheckIfMyCosmeticsUpdated"), {"itemToBuyID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(itemToBuyID);
        }
        bool DoesAnyPlayerInRoomOwnPieceSet(int setID) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("DoesAnyPlayerInRoomOwnPieceSet"), {"setID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(setID);
        }
        bool DoesPlayerOwnDisplayGroup(::Photon_Realtime::Player* player, int groupID) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("DoesPlayerOwnDisplayGroup"), {"player", "groupID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player, groupID);
        }
        bool DoesPlayerOwnPieceSet(::Photon_Realtime::Player* player, int setID) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("DoesPlayerOwnPieceSet"), {"player", "setID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player, setID);
        }
        static bool get_hasInstance() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_hasInstance"));
            return _m.Call();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet*>* get_StartPieceSets() {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet*>*> _m = GetClass().GetMethod(O("get_StartPieceSets"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet*>* GetAllPieceSets_1() {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet*>*> _m = GetClass().GetMethod(O("GetAllPieceSets"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* GetAllSetsConcat() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetAllSetsConcat"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup* GetDisplayGroupFromIndex(int groupID) {
            static BNM::Method<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*> _m = GetClass().GetMethod(O("GetDisplayGroupFromIndex"), {"groupID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(groupID);
        }
        ::BNM::Structures::Mono::String* GetGroupUniqueID(::BNM::Structures::Mono::String* setPlayfabID, int groupNumber) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetGroupUniqueID"), {"setPlayfabID", "groupNumber"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(setPlayfabID, groupNumber);
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*>* GetLiveDisplayGroups_1() {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*>*> _m = GetClass().GetMethod(O("GetLiveDisplayGroups"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet*>* GetLivePieceSets_1() {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet*>*> _m = GetClass().GetMethod(O("GetLivePieceSets"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet*>* GetPermanentSetsForSale() {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet*>*> _m = GetClass().GetMethod(O("GetPermanentSetsForSale"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::BuilderPiece* GetPiecePrefab(int pieceType) {
            static BNM::Method<::GlobalNamespace::BuilderPiece*> _m = GetClass().GetMethod(O("GetPiecePrefab"), {"pieceType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(pieceType);
        }
        ::GlobalNamespace::BuilderPieceSet* GetPieceSetFromID(int setID) {
            static BNM::Method<::GlobalNamespace::BuilderPieceSet*> _m = GetClass().GetMethod(O("GetPieceSetFromID"), {"setID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(setID);
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet*>* GetSeasonalSetsForSale_1() {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet*>*> _m = GetClass().GetMethod(O("GetSeasonalSetsForSale"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* GetStarterSetsConcat() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetStarterSetsConcat"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem GetStoreItemFromSetID(int setID) {
            static BNM::Method<::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem> _m = GetClass().GetMethod(O("GetStoreItemFromSetID"), {"setID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(setID);
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet*>* GetUnlockedPieceSets_1() {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet*>*> _m = GetClass().GetMethod(O("GetUnlockedPieceSets"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Init() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Init"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitPieceDictionary() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitPieceDictionary"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static bool IsItemIDBuilderItem(::BNM::Structures::Mono::String* playfabID) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsItemIDBuilderItem"), {"playfabID"});
            return _m.Call(playfabID);
        }
        bool IsPieceOwnedByRoom(int pieceType, int materialType) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsPieceOwnedByRoom"), {"pieceType", "materialType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(pieceType, materialType);
        }
        bool IsPieceOwnedLocally(int pieceType, int materialType) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsPieceOwnedLocally"), {"pieceType", "materialType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(pieceType, materialType);
        }
        bool IsPieceSetOwnedLocally(int setID) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsPieceSetOwnedLocally"), {"setID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(setID);
        }
        bool IsSetSeasonal(::BNM::Structures::Mono::String* playfabID) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsSetSeasonal"), {"playfabID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(playfabID);
        }
        ::BNM::Coroutine::IEnumerator* MonitorTime() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("MonitorTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
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
        void OnGotInventoryItems(::PlayFab_ClientModels::GetUserInventoryResult* inventoryResult, ::PlayFab_ClientModels::GetCatalogItemsResult* catalogResult) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGotInventoryItems"), {"inventoryResult", "catalogResult"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(inventoryResult, catalogResult);
        }
        static void set_hasInstance(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_hasInstance"), {"value"});
            _m.Call(value);
        }
        void TryPurchaseItem(int setID, ::BNM::Structures::Mono::Action<bool>* resultCallback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TryPurchaseItem"), {"setID", "resultCallback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(setID, resultCallback);
        }
        void UnlockSet(int setID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnlockSet"), {"setID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(setID);
        }
    };
}
