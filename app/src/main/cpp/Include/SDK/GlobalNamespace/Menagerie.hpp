#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct Menagerie : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "Menagerie");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* CrittersSavePrefsKey = "_SavedCritters";
        int GetCollectionPageIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("_collectionPageIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::MenagerieCritter*>* GetCritters() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::MenagerieCritter*>*> _field = GetClass().GetField(O("_critters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::Menagerie_CritterSaveData* GetSavedCritters() {
            static BNM::Field<::GlobalNamespace::Menagerie_CritterSaveData*> _field = GetClass().GetField(O("_savedCritters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTotalPages() {
            static BNM::Field<int> _field = GetClass().GetField(O("_totalPages"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::MenagerieSlot*>* GetCollection() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::MenagerieSlot*>*> _field = GetClass().GetField(O("collection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::MenagerieDepositBox* GetCollectionBox() {
            static BNM::Field<::GlobalNamespace::MenagerieDepositBox*> _field = GetClass().GetField(O("CollectionBox"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CritterIndex* GetCritterIndex() {
            static BNM::Field<::GlobalNamespace::CritterIndex*> _field = GetClass().GetField(O("critterIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::MenagerieDepositBox* GetDonationBox() {
            static BNM::Field<::GlobalNamespace::MenagerieDepositBox*> _field = GetClass().GetField(O("DonationBox"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TextMeshPro* GetDonationCounter() {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("donationCounter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetDonationText() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("DonationText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::MenagerieDepositBox* GetFavoriteBox() {
            static BNM::Field<::GlobalNamespace::MenagerieDepositBox*> _field = GetClass().GetField(O("FavoriteBox"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::MenagerieSlot* GetFavoriteCritterSlot() {
            static BNM::Field<::GlobalNamespace::MenagerieSlot*> _field = GetClass().GetField(O("favoriteCritterSlot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::MenagerieSlot*>* GetNewCritterPen() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::MenagerieSlot*>*> _field = GetClass().GetField(O("newCritterPen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::MenagerieCritter* GetPrefab() {
            static BNM::Field<::GlobalNamespace::MenagerieCritter*> _field = GetClass().GetField(O("prefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCollectionPageIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_collectionPageIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCritters(::BNM::Structures::Mono::List<::GlobalNamespace::MenagerieCritter*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::MenagerieCritter*>*> _field = GetClass().GetField(O("_critters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSavedCritters(::GlobalNamespace::Menagerie_CritterSaveData* value) {
            static BNM::Field<::GlobalNamespace::Menagerie_CritterSaveData*> _field = GetClass().GetField(O("_savedCritters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTotalPages(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_totalPages"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCollection(::BNM::Structures::Mono::Array<::GlobalNamespace::MenagerieSlot*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::MenagerieSlot*>*> _field = GetClass().GetField(O("collection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCollectionBox(::GlobalNamespace::MenagerieDepositBox* value) {
            static BNM::Field<::GlobalNamespace::MenagerieDepositBox*> _field = GetClass().GetField(O("CollectionBox"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCritterIndex(::GlobalNamespace::CritterIndex* value) {
            static BNM::Field<::GlobalNamespace::CritterIndex*> _field = GetClass().GetField(O("critterIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDonationBox(::GlobalNamespace::MenagerieDepositBox* value) {
            static BNM::Field<::GlobalNamespace::MenagerieDepositBox*> _field = GetClass().GetField(O("DonationBox"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDonationCounter(::TextMeshPro* value) {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("donationCounter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDonationText(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("DonationText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFavoriteBox(::GlobalNamespace::MenagerieDepositBox* value) {
            static BNM::Field<::GlobalNamespace::MenagerieDepositBox*> _field = GetClass().GetField(O("FavoriteBox"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFavoriteCritterSlot(::GlobalNamespace::MenagerieSlot* value) {
            static BNM::Field<::GlobalNamespace::MenagerieSlot*> _field = GetClass().GetField(O("favoriteCritterSlot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNewCritterPen(::BNM::Structures::Mono::Array<::GlobalNamespace::MenagerieSlot*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::MenagerieSlot*>*> _field = GetClass().GetField(O("newCritterPen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrefab(::GlobalNamespace::MenagerieCritter* value) {
            static BNM::Field<::GlobalNamespace::MenagerieCritter*> _field = GetClass().GetField(O("prefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddCritterToCollection(::GlobalNamespace::Menagerie_CritterData* critterData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddCritterToCollection"), {"critterData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(critterData);
        }
        void AddCritterToNewCritterPen(::GlobalNamespace::Menagerie_CritterData* critterData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddCritterToNewCritterPen"), {"critterData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(critterData);
        }
        void ClearAll() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearAll"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ClearCollection() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearCollection"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ClearNewCritterPen() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearNewCritterPen"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ClearSlot(::GlobalNamespace::MenagerieSlot* slot) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearSlot"), {"slot"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(slot);
        }
        void CritterDepositedInCollectionBox(::GlobalNamespace::MenagerieCritter* critter) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CritterDepositedInCollectionBox"), {"critter"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(critter);
        }
        void CritterDepositedInDonationBox(::GlobalNamespace::MenagerieCritter* critter) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CritterDepositedInDonationBox"), {"critter"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(critter);
        }
        void CritterDepositedInFavoriteBox(::GlobalNamespace::MenagerieCritter* critter) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CritterDepositedInFavoriteBox"), {"critter"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(critter);
        }
        void DespawnCritterFromSlot(::GlobalNamespace::MenagerieSlot* slot) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DespawnCritterFromSlot"), {"slot"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(slot);
        }
        void DonateCritter(::GlobalNamespace::Menagerie_CritterData* critterData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DonateCritter"), {"critterData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(critterData);
        }
        void DonateNewCritters() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DonateNewCritters"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void GenerateCollectedCritters(float spawnChance) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GenerateCollectedCritters"), {"spawnChance"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(spawnChance);
        }
        void GenerateLegalNewCritters() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GenerateLegalNewCritters"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void GenerateNewCritterCount(int critterCount) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GenerateNewCritterCount"), {"critterCount"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(critterCount);
        }
        void GenerateNewCritters() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GenerateNewCritters"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Load() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Load"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LoadCrittersFromJson(::BNM::Structures::Mono::String* jsonString) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoadCrittersFromJson"), {"jsonString"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(jsonString);
        }
        void MoveNewCrittersToCollection() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MoveNewCrittersToCollection"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void NextGroupCollectedCritters() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NextGroupCollectedCritters"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDepositCritter(::GlobalNamespace::Menagerie_CritterData* depositedCritter, int playerID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDepositCritter"), {"depositedCritter", "playerID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(depositedCritter, playerID);
        }
        void OnDrawGizmosSelected() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDrawGizmosSelected"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PrevGroupCollectedCritters() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PrevGroupCollectedCritters"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ResetSavedCreatures() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetSavedCreatures"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Save() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Save"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Mono::String* SaveCrittersToJson() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("SaveCrittersToJson"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void SpawnCollectionCritterIfShowing(::GlobalNamespace::Menagerie_CritterData* critter) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SpawnCollectionCritterIfShowing"), {"critter"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(critter);
        }
        void SpawnCritterInSlot(::GlobalNamespace::MenagerieSlot* slot, ::GlobalNamespace::Menagerie_CritterData* critterData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SpawnCritterInSlot"), {"slot", "critterData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(slot, critterData);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateCollection() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateCollection"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateFavoriteCritter() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateFavoriteCritter"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateMenagerie() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateMenagerie"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateNewCritterPen() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateNewCritterPen"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ValidateSaveData() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ValidateSaveData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
