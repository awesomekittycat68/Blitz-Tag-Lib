#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BuilderGridPlaneData.hpp"
#include "BuilderPieceData.hpp"
#include "BuilderPlayerData.hpp"
#include "BuilderPrivatePlotData.hpp"

namespace GorillaTagScripts {
    struct FindNearbyPiecesJob : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts", "FindNearbyPiecesJob");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetDistanceThreshSq() {
            static BNM::Field<float> _field = GetClass().GetField(O("distanceThreshSq"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetGridPlaneData() {
            static BNM::Field<void*> _field = GetClass().GetField(O("gridPlaneData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetLeftHandGridPlanes() {
            static BNM::Field<void*> _field = GetClass().GetField(O("leftHandGridPlanes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLeftHandPos() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("leftHandPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLeftPieceInHandIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("leftPieceInHandIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLocalPlayerActorNumber() {
            static BNM::Field<int> _field = GetClass().GetField(O("localPlayerActorNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLocalPlayerPlotIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("localPlayerPlotIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetPieceData() {
            static BNM::Field<void*> _field = GetClass().GetField(O("pieceData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetPlayerData() {
            static BNM::Field<void*> _field = GetClass().GetField(O("playerData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetPrivatePlotData() {
            static BNM::Field<void*> _field = GetClass().GetField(O("privatePlotData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetRightHandGridPlanes() {
            static BNM::Field<void*> _field = GetClass().GetField(O("rightHandGridPlanes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetRightHandPos() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("rightHandPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRightPieceInHandIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("rightPieceInHandIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDistanceThreshSq(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("distanceThreshSq"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGridPlaneData(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("gridPlaneData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftHandGridPlanes(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("leftHandGridPlanes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftHandPos(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("leftHandPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftPieceInHandIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("leftPieceInHandIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalPlayerActorNumber(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("localPlayerActorNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalPlayerPlotIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("localPlayerPlotIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPieceData(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("pieceData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerData(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("playerData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrivatePlotData(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("privatePlotData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightHandGridPlanes(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("rightHandGridPlanes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightHandPos(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("rightHandPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightPieceInHandIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("rightPieceInHandIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool CanPiecesPotentiallySnap(int localActorNumber, int pieceInHandIndex, int attachToPieceIndex, int attachToPieceRootIndex, int requestedParentPieceIndex, bool isLeft) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanPiecesPotentiallySnap"), {"localActorNumber", "pieceInHandIndex", "attachToPieceIndex", "attachToPieceRootIndex", "requestedParentPieceIndex", "isLeft"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(localActorNumber, pieceInHandIndex, attachToPieceIndex, attachToPieceRootIndex, requestedParentPieceIndex, isLeft);
        }
        bool CanPlayerAttachToPlot(int privatePlotIndex, int actorNumber) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanPlayerAttachToPlot"), {"privatePlotIndex", "actorNumber"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(privatePlotIndex, actorNumber);
        }
        bool CanPlayerAttachToRootPiece(int playerActorNumber, int attachToPieceRootIndex, bool isLeft) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanPlayerAttachToRootPiece"), {"playerActorNumber", "attachToPieceRootIndex", "isLeft"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(playerActorNumber, attachToPieceRootIndex, isLeft);
        }
        template <typename TP2 = void*, typename TP5 = void*>
        void CheckGridPlane(int gridPlaneIndex, int handPieceIndex, TP2 transform, ::BNM::Structures::Unity::Vector3 handPos, bool isLeft, TP5 checkGridPlanes) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckGridPlane"), {"gridPlaneIndex", "handPieceIndex", "transform", "handPos", "isLeft", "checkGridPlanes"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gridPlaneIndex, handPieceIndex, transform, handPos, isLeft, checkGridPlanes);
        }
        template <typename TP1 = void*>
        void Execute(int index, TP1 transform) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Execute"), {"index", "transform"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(index, transform);
        }
        int GetAttachedBuiltInPiece(int pieceIndex) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetAttachedBuiltInPiece"), {"pieceIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(pieceIndex);
        }
        int GetPlayerIndex(int playerActorNumber) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetPlayerIndex"), {"playerActorNumber"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(playerActorNumber);
        }
        int GetRootPieceIndex(int pieceIndex) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetRootPieceIndex"), {"pieceIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(pieceIndex);
        }
    };
}
