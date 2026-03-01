#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BuilderPieceSet_BuilderPieceCategory.hpp"
#include "BuilderPieceSet_PieceInfo.hpp"

namespace GlobalNamespace {
    struct BuilderDispenserShelf : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BuilderDispenserShelf");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory>* GetIncludedCategories() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory>*> _field = GetClass().GetField(O("_includedCategories"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderDispenser*>* GetActiveDispensers() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderDispenser*>*> _field = GetClass().GetField(O("activeDispensers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAnimatingShelf() {
            static BNM::Field<bool> _field = GetClass().GetField(O("animatingShelf"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup* GetCurrentGroup() {
            static BNM::Field<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*> _field = GetClass().GetField(O("currentGroup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderDispenser*>* GetDispenserPool() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderDispenser*>*> _field = GetClass().GetField(O("dispenserPool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderDispenser* GetDispenserPrefab() {
            static BNM::Field<::GlobalNamespace::BuilderDispenser*> _field = GetClass().GetField(O("dispenserPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDispenserToClear() {
            static BNM::Field<int> _field = GetClass().GetField(O("dispenserToClear"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDispenserToUpdate() {
            static BNM::Field<int> _field = GetClass().GetField(O("dispenserToUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetInitialized() {
            static BNM::Field<bool> _field = GetClass().GetField(O("initialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet_PieceInfo>* GetPiecesInSet() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet_PieceInfo>*> _field = GetClass().GetField(O("piecesInSet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPlaySpawnSetSound() {
            static BNM::Field<bool> _field = GetClass().GetField(O("playSpawnSetSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetResetAnimation() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("resetAnimation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SoundBankPlayer* GetResetSoundBank() {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("resetSoundBank"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderSetSelector* GetSetSelector() {
            static BNM::Field<::GlobalNamespace::BuilderSetSelector*> _field = GetClass().GetField(O("setSelector"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetShelfCenter() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("shelfCenter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetShelfID() {
            static BNM::Field<int> _field = GetClass().GetField(O("shelfID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetShelfWidth() {
            static BNM::Field<float> _field = GetClass().GetField(O("shelfWidth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetShouldVerifySetSelection() {
            static BNM::Field<bool> _field = GetClass().GetField(O("shouldVerifySetSelection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetSpawnNewSetSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("spawnNewSetSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::BuilderTable* GetTable() {
            static BNM::Field<::GorillaTagScripts::BuilderTable*> _field = GetClass().GetField(O("table"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetTimeToClearShelf() {
            static BNM::Field<double> _field = GetClass().GetField(O("timeToClearShelf"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetIncludedCategories(::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory>*> _field = GetClass().GetField(O("_includedCategories"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActiveDispensers(::BNM::Structures::Mono::List<::GlobalNamespace::BuilderDispenser*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderDispenser*>*> _field = GetClass().GetField(O("activeDispensers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAnimatingShelf(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("animatingShelf"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentGroup(::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup* value) {
            static BNM::Field<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*> _field = GetClass().GetField(O("currentGroup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDispenserPool(::BNM::Structures::Mono::List<::GlobalNamespace::BuilderDispenser*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderDispenser*>*> _field = GetClass().GetField(O("dispenserPool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDispenserPrefab(::GlobalNamespace::BuilderDispenser* value) {
            static BNM::Field<::GlobalNamespace::BuilderDispenser*> _field = GetClass().GetField(O("dispenserPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDispenserToClear(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("dispenserToClear"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDispenserToUpdate(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("dispenserToUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInitialized(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("initialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPiecesInSet(::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet_PieceInfo>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet_PieceInfo>*> _field = GetClass().GetField(O("piecesInSet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlaySpawnSetSound(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("playSpawnSetSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResetAnimation(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("resetAnimation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResetSoundBank(::GlobalNamespace::SoundBankPlayer* value) {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("resetSoundBank"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSetSelector(::GlobalNamespace::BuilderSetSelector* value) {
            static BNM::Field<::GlobalNamespace::BuilderSetSelector*> _field = GetClass().GetField(O("setSelector"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShelfCenter(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("shelfCenter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShelfID(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("shelfID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShelfWidth(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("shelfWidth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShouldVerifySetSelection(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("shouldVerifySetSelection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnNewSetSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("spawnNewSetSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTable(::GorillaTagScripts::BuilderTable* value) {
            static BNM::Field<::GorillaTagScripts::BuilderTable*> _field = GetClass().GetField(O("table"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeToClearShelf(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("timeToClearShelf"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ActivateDispensers() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ActivateDispensers"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void AddToDispenserPool(int count) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddToDispenserPool"), {"count"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(count);
        }
        void BuildDispenserPool() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BuildDispenserPool"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ClearShelf() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearShelf"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int GetSelectedDisplayGroupID() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetSelectedDisplayGroupID"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void ImmediateShelfSwap() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ImmediateShelfSwap"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitIfNeeded() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitIfNeeded"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnClearTable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnClearTable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnSelectedSetChange(int displayGroupID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSelectedSetChange"), {"displayGroupID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(displayGroupID);
        }
        void OnShelfPieceCreated(::GlobalNamespace::BuilderPiece* piece, bool playfx) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnShelfPieceCreated"), {"piece", "playfx"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(piece, playfx);
        }
        void OnShelfPieceRecycled(::GlobalNamespace::BuilderPiece* piece) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnShelfPieceRecycled"), {"piece"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(piece);
        }
        void SetSelection(int displayGroupID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetSelection"), {"displayGroupID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(displayGroupID);
        }
        void Setup() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Setup"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StartShelfSwap() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartShelfSwap"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateShelf() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateShelf"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateShelfSliced() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateShelfSliced"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void VerifySetSelection() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("VerifySetSelection"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
