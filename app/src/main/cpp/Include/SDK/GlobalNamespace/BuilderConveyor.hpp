#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BuilderPieceSet_BuilderPieceCategory.hpp"
#include "BuilderPieceSet_PieceInfo.hpp"

namespace GlobalNamespace {
    struct BuilderConveyor : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BuilderConveyor");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void* GetEvaluateCurve() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_evaluateCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory>* GetIncludeCategories() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory>*> _field = GetClass().GetField(O("_includeCategories"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetConveyorMoveSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("conveyorMoveSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup* GetCurrentDisplayGroup() {
            static BNM::Field<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*> _field = GetClass().GetField(O("currentDisplayGroup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetGrabbedPieceMaterials() {
            static BNM::Field<void*> _field = GetClass().GetField(O("grabbedPieceMaterials"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetGrabbedPieceTypes() {
            static BNM::Field<void*> _field = GetClass().GetField(O("grabbedPieceTypes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetInitialized() {
            static BNM::Field<bool> _field = GetClass().GetField(O("initialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLoopCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("loopCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaxItemsOnSpline() {
            static BNM::Field<int> _field = GetClass().GetField(O("maxItemsOnSpline"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetMoveDirection() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("moveDirection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetNativeSpline() {
            static BNM::Field<void*> _field = GetClass().GetField(O("nativeSpline"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNextPieceToSpawn() {
            static BNM::Field<int> _field = GetClass().GetField(O("nextPieceToSpawn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetNextSpawnTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("nextSpawnTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet_PieceInfo>* GetPiecesInSet() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet_PieceInfo>*> _field = GetClass().GetField(O("piecesInSet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiece*>* GetPiecesOnConveyor() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiece*>*> _field = GetClass().GetField(O("piecesOnConveyor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderSetSelector* GetSetSelector() {
            static BNM::Field<::GlobalNamespace::BuilderSetSelector*> _field = GetClass().GetField(O("setSelector"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetShelfID() {
            static BNM::Field<int> _field = GetClass().GetField(O("shelfID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetShouldVerifySetSelection() {
            static BNM::Field<bool> _field = GetClass().GetField(O("shouldVerifySetSelection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSpawnDelay() {
            static BNM::Field<float> _field = GetClass().GetField(O("spawnDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetSpawnTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("spawnTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetSpline() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("spline"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSplineLength() {
            static BNM::Field<float> _field = GetClass().GetField(O("splineLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::BuilderTable* GetTable() {
            static BNM::Field<::GorillaTagScripts::BuilderTable*> _field = GetClass().GetField(O("table"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWaitForResourceChange() {
            static BNM::Field<bool> _field = GetClass().GetField(O("waitForResourceChange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEvaluateCurve(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_evaluateCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIncludeCategories(::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory>*> _field = GetClass().GetField(O("_includeCategories"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetConveyorMoveSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("conveyorMoveSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentDisplayGroup(::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup* value) {
            static BNM::Field<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*> _field = GetClass().GetField(O("currentDisplayGroup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabbedPieceMaterials(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("grabbedPieceMaterials"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabbedPieceTypes(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("grabbedPieceTypes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInitialized(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("initialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoopCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("loopCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxItemsOnSpline(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("maxItemsOnSpline"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMoveDirection(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("moveDirection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNativeSpline(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("nativeSpline"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextPieceToSpawn(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("nextPieceToSpawn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextSpawnTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("nextSpawnTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPiecesInSet(::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet_PieceInfo>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet_PieceInfo>*> _field = GetClass().GetField(O("piecesInSet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPiecesOnConveyor(::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiece*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiece*>*> _field = GetClass().GetField(O("piecesOnConveyor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSetSelector(::GlobalNamespace::BuilderSetSelector* value) {
            static BNM::Field<::GlobalNamespace::BuilderSetSelector*> _field = GetClass().GetField(O("setSelector"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShelfID(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("shelfID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShouldVerifySetSelection(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("shouldVerifySetSelection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnDelay(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("spawnDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("spawnTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpline(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("spline"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSplineLength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("splineLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTable(::GorillaTagScripts::BuilderTable* value) {
            static BNM::Field<::GorillaTagScripts::BuilderTable*> _field = GetClass().GetField(O("table"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaitForResourceChange(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("waitForResourceChange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::BNM::Structures::Unity::Vector3 EvaluateSpline(float t) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("EvaluateSpline"), {"t"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(t);
        }
        void FindNextAffordablePieceType(int& pieceType, int& materialType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FindNextAffordablePieceType"), {"pieceType", "materialType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&pieceType, &materialType);
        }
        float GetFrameMovement() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetFrameMovement"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetMaterialType(::GlobalNamespace::BuilderPieceSet_PieceInfo info) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetMaterialType"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(info);
        }
        int GetMaxItemsOnConveyor() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetMaxItemsOnConveyor"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetSelectedDisplayGroupID() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetSelectedDisplayGroupID"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Transform* GetSpawnTransform_1() {
            static BNM::Method<::Transform*> _m = GetClass().GetMethod(O("GetSpawnTransform"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void InitIfNeeded() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitIfNeeded"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnAvailableResourcesChange() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnAvailableResourcesChange"));
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
        void OnShelfPieceCreated(::GlobalNamespace::BuilderPiece* piece, float timeOffset) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnShelfPieceCreated"), {"piece", "timeOffset"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(piece, timeOffset);
        }
        void OnShelfPieceRecycled(::GlobalNamespace::BuilderPiece* piece) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnShelfPieceRecycled"), {"piece"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(piece);
        }
        void RemovePieceFromConveyor(::Transform* pieceTransform) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemovePieceFromConveyor"), {"pieceTransform"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pieceTransform);
        }
        void ResetConveyorState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetConveyorState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
        void SpawnNextPiece() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SpawnNextPiece"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateConveyor() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateConveyor"));
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
