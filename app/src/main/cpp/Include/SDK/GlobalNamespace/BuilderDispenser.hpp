#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BuilderPieceSet_PieceInfo.hpp"

namespace GlobalNamespace {
    struct BuilderDispenser : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BuilderDispenser");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::IL2CPP::Il2CppObject* GetAnimateParent() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("animateParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetCurrentAnimation() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("currentAnimation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetDispenseDefaultAnimation() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("dispenseDefaultAnimation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetDispenserFX() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("dispenserFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetDisplayTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("displayTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasPiece() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasPiece"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaterialType() {
            static BNM::Field<int> _field = GetClass().GetField(O("materialType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetNextSpawnTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("nextSpawnTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderPieceSet_PieceInfo GetNullPiece() {
            static BNM::Field<::GlobalNamespace::BuilderPieceSet_PieceInfo> _field = GetClass().GetField(O("nullPiece"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetOnGrabSpawnDelay() {
            static BNM::Field<float> _field = GetClass().GetField(O("OnGrabSpawnDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderPieceSet_PieceInfo GetPieceToSpawn() {
            static BNM::Field<::GlobalNamespace::BuilderPieceSet_PieceInfo> _field = GetClass().GetField(O("pieceToSpawn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPlayFX() {
            static BNM::Field<bool> _field = GetClass().GetField(O("playFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetShelfID() {
            static BNM::Field<int> _field = GetClass().GetField(O("shelfID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSpawnCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("spawnCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderPiece* GetSpawnedPieceInstance() {
            static BNM::Field<::GlobalNamespace::BuilderPiece*> _field = GetClass().GetField(O("spawnedPieceInstance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSpawnRetryDelay() {
            static BNM::Field<float> _field = GetClass().GetField(O("spawnRetryDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetSpawnTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("spawnTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::BuilderTable* GetTable() {
            static BNM::Field<::GorillaTagScripts::BuilderTable*> _field = GetClass().GetField(O("table"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAnimateParent(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("animateParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentAnimation(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("currentAnimation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDispenseDefaultAnimation(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("dispenseDefaultAnimation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDispenserFX(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("dispenserFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisplayTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("displayTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasPiece(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasPiece"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaterialType(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("materialType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextSpawnTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("nextSpawnTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNullPiece(::GlobalNamespace::BuilderPieceSet_PieceInfo value) {
            static BNM::Field<::GlobalNamespace::BuilderPieceSet_PieceInfo> _field = GetClass().GetField(O("nullPiece"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnGrabSpawnDelay(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("OnGrabSpawnDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPieceToSpawn(::GlobalNamespace::BuilderPieceSet_PieceInfo value) {
            static BNM::Field<::GlobalNamespace::BuilderPieceSet_PieceInfo> _field = GetClass().GetField(O("pieceToSpawn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayFX(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("playFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShelfID(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("shelfID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("spawnCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnedPieceInstance(::GlobalNamespace::BuilderPiece* value) {
            static BNM::Field<::GlobalNamespace::BuilderPiece*> _field = GetClass().GetField(O("spawnedPieceInstance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnRetryDelay(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("spawnRetryDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("spawnTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTable(::GorillaTagScripts::BuilderTable* value) {
            static BNM::Field<::GorillaTagScripts::BuilderTable*> _field = GetClass().GetField(O("table"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AssignPieceType(::GlobalNamespace::BuilderPieceSet_PieceInfo piece, int inMaterialType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AssignPieceType"), {"piece", "inMaterialType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(piece, inMaterialType);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ClearDispenser() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearDispenser"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool DoesPieceMatchSpawnInfo(::GlobalNamespace::BuilderPiece* piece) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("DoesPieceMatchSpawnInfo"), {"piece"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(piece);
        }
        void OnClearTable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnClearTable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ParentPieceToShelf(::Transform* shelfTransform) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ParentPieceToShelf"), {"shelfTransform"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(shelfTransform);
        }
        ::BNM::Coroutine::IEnumerator* PlayAnimation() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("PlayAnimation"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void ShelfPieceCreated(::GlobalNamespace::BuilderPiece* piece, bool playAnimation) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ShelfPieceCreated"), {"piece", "playAnimation"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(piece, playAnimation);
        }
        void ShelfPieceRecycled(::GlobalNamespace::BuilderPiece* piece) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ShelfPieceRecycled"), {"piece"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(piece);
        }
        void TrySpawnPiece() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TrySpawnPiece"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateDispenser() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateDispenser"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
