#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/SnapBounds.hpp"

namespace GorillaTagScripts {
    struct BuilderAttachGridPlane : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts", "BuilderAttachGridPlane");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetAttachIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("attachIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBoundingRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("boundingRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetCenter() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("center"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetChildPieceCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("childPieceCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<bool>* GetConnected() {
            static BNM::Field<::BNM::Structures::Mono::Array<bool>*> _field = GetClass().GetField(O("connected"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::SnapOverlap* GetFirstOverlap() {
            static BNM::Field<::GorillaTagScripts::SnapOverlap*> _field = GetClass().GetField(O("firstOverlap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetGridPlaneDataIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("gridPlaneDataIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsMoving() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isMoving"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::BuilderItem* GetItem() {
            static BNM::Field<::GorillaTagScripts::BuilderItem*> _field = GetClass().GetField(O("item"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLength() {
            static BNM::Field<int> _field = GetClass().GetField(O("length"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLengthOffset() {
            static BNM::Field<float> _field = GetClass().GetField(O("lengthOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetMale() {
            static BNM::Field<bool> _field = GetClass().GetField(O("male"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetMovesOnPlace() {
            static BNM::Field<bool> _field = GetClass().GetField(O("movesOnPlace"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts_Builder::BuilderMovingPart* GetMovingPart() {
            static BNM::Field<::GorillaTagScripts_Builder::BuilderMovingPart*> _field = GetClass().GetField(O("movingPart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderPiece* GetPiece() {
            static BNM::Field<::GlobalNamespace::BuilderPiece*> _field = GetClass().GetField(O("piece"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetPieceToGridPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("pieceToGridPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetPieceToGridRotation() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("pieceToGridRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetWidth() {
            static BNM::Field<int> _field = GetClass().GetField(O("width"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetWidthOffset() {
            static BNM::Field<float> _field = GetClass().GetField(O("widthOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAttachIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("attachIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBoundingRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("boundingRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCenter(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("center"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChildPieceCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("childPieceCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetConnected(::BNM::Structures::Mono::Array<bool>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<bool>*> _field = GetClass().GetField(O("connected"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFirstOverlap(::GorillaTagScripts::SnapOverlap* value) {
            static BNM::Field<::GorillaTagScripts::SnapOverlap*> _field = GetClass().GetField(O("firstOverlap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGridPlaneDataIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("gridPlaneDataIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsMoving(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isMoving"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetItem(::GorillaTagScripts::BuilderItem* value) {
            static BNM::Field<::GorillaTagScripts::BuilderItem*> _field = GetClass().GetField(O("item"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLength(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("length"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLengthOffset(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lengthOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMale(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("male"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMovesOnPlace(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("movesOnPlace"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMovingPart(::GorillaTagScripts_Builder::BuilderMovingPart* value) {
            static BNM::Field<::GorillaTagScripts_Builder::BuilderMovingPart*> _field = GetClass().GetField(O("movingPart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPiece(::GlobalNamespace::BuilderPiece* value) {
            static BNM::Field<::GlobalNamespace::BuilderPiece*> _field = GetClass().GetField(O("piece"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPieceToGridPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("pieceToGridPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPieceToGridRotation(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("pieceToGridRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWidth(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("width"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWidthOffset(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("widthOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddSnapOverlap(::GorillaTagScripts::SnapOverlap* newOverlap) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddSnapOverlap"), {"newOverlap"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newOverlap);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CalcGridOverlap(::GorillaTagScripts::BuilderAttachGridPlane* otherGridPlane, ::BNM::Structures::Unity::Vector3 otherPieceLocalPos, ::BNM::Structures::Unity::Quaternion otherPieceLocalRot, float gridSize, void*& min, void*& max) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CalcGridOverlap"), {"otherGridPlane", "otherPieceLocalPos", "otherPieceLocalRot", "gridSize", "min", "max"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(otherGridPlane, otherPieceLocalPos, otherPieceLocalRot, gridSize, &min, &max);
        }
        void ChangeChildPieceCount(int delta) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ChangeChildPieceCount"), {"delta"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(delta);
        }
        int GetChildCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetChildCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 GetGridPosition(int x, int z, float gridSize) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetGridPosition"), {"x", "z", "gridSize"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(x, z, gridSize);
        }
        ::GorillaTagScripts::BuilderAttachGridPlane* GetMovingParentGrid() {
            static BNM::Method<::GorillaTagScripts::BuilderAttachGridPlane*> _m = GetClass().GetMethod(O("GetMovingParentGrid"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsAttachedToMovingGrid() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsAttachedToMovingGrid"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsConnected(::GlobalNamespace::SnapBounds bounds) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsConnected"), {"bounds"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(bounds);
        }
        void OnReturnToPool(::GorillaTagScripts::BuilderPool* pool) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnReturnToPool"), {"pool"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pool);
        }
        void RemoveSnapsWithDifferentRoot(::GlobalNamespace::BuilderPiece* root, ::GorillaTagScripts::BuilderPool* pool) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveSnapsWithDifferentRoot"), {"root", "pool"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(root, pool);
        }
        void RemoveSnapsWithPiece(::GlobalNamespace::BuilderPiece* piece, ::GorillaTagScripts::BuilderPool* pool) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveSnapsWithPiece"), {"piece", "pool"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(piece, pool);
        }
        void SetConnected_1(::GlobalNamespace::SnapBounds bounds, bool connect) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetConnected"), {"bounds", "connect"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(bounds, connect);
        }
        void Setup(::GlobalNamespace::BuilderPiece* piece, int attachIndex, float gridSize) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Setup"), {"piece", "attachIndex", "gridSize"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(piece, attachIndex, gridSize);
        }
    };
}
