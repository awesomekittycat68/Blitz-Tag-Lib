#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BuilderAction.hpp"

namespace GlobalNamespace {
    struct BuilderActions : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BuilderActions");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::BuilderAction CreateAttachToPiece(int cmdId, int pieceId, int parentPieceId, int attachIndex, int parentAttachIndex, int8_t bumpOffsetX, int8_t bumpOffsetZ, uint8_t twist, int actorNumber, int timeStamp) {
            static BNM::Method<::GlobalNamespace::BuilderAction> _m = GetClass().GetMethod(O("CreateAttachToPiece"), {"cmdId", "pieceId", "parentPieceId", "attachIndex", "parentAttachIndex", "bumpOffsetX", "bumpOffsetZ", "twist", "actorNumber", "timeStamp"});
            return _m.Call(cmdId, pieceId, parentPieceId, attachIndex, parentAttachIndex, bumpOffsetX, bumpOffsetZ, twist, actorNumber, timeStamp);
        }
        static ::GlobalNamespace::BuilderAction CreateAttachToPieceRollback(int cmdId, ::GlobalNamespace::BuilderPiece* piece, int actorNumber) {
            static BNM::Method<::GlobalNamespace::BuilderAction> _m = GetClass().GetMethod(O("CreateAttachToPieceRollback"), {"cmdId", "piece", "actorNumber"});
            return _m.Call(cmdId, piece, actorNumber);
        }
        static ::GlobalNamespace::BuilderAction CreateAttachToPlayer(int cmdId, int pieceId, ::BNM::Structures::Unity::Vector3 localPosition, ::BNM::Structures::Unity::Quaternion localRotation, int actorNumber, bool leftHand) {
            static BNM::Method<::GlobalNamespace::BuilderAction> _m = GetClass().GetMethod(O("CreateAttachToPlayer"), {"cmdId", "pieceId", "localPosition", "localRotation", "actorNumber", "leftHand"});
            return _m.Call(cmdId, pieceId, localPosition, localRotation, actorNumber, leftHand);
        }
        static ::GlobalNamespace::BuilderAction CreateAttachToPlayerRollback(int cmdId, ::GlobalNamespace::BuilderPiece* piece) {
            static BNM::Method<::GlobalNamespace::BuilderAction> _m = GetClass().GetMethod(O("CreateAttachToPlayerRollback"), {"cmdId", "piece"});
            return _m.Call(cmdId, piece);
        }
        static ::GlobalNamespace::BuilderAction CreateAttachToShelfRollback(int cmdId, ::GlobalNamespace::BuilderPiece* piece, int shelfID, bool isConveyor, int timestamp, float splineTime) {
            static BNM::Method<::GlobalNamespace::BuilderAction> _m = GetClass().GetMethod(O("CreateAttachToShelfRollback"), {"cmdId", "piece", "shelfID", "isConveyor", "timestamp", "splineTime"});
            return _m.Call(cmdId, piece, shelfID, isConveyor, timestamp, splineTime);
        }
        static ::GlobalNamespace::BuilderAction CreateDetachFromPiece(int cmdId, int pieceId, int actorNumber) {
            static BNM::Method<::GlobalNamespace::BuilderAction> _m = GetClass().GetMethod(O("CreateDetachFromPiece"), {"cmdId", "pieceId", "actorNumber"});
            return _m.Call(cmdId, pieceId, actorNumber);
        }
        static ::GlobalNamespace::BuilderAction CreateDetachFromPlayer(int cmdId, int pieceId, int actorNumber) {
            static BNM::Method<::GlobalNamespace::BuilderAction> _m = GetClass().GetMethod(O("CreateDetachFromPlayer"), {"cmdId", "pieceId", "actorNumber"});
            return _m.Call(cmdId, pieceId, actorNumber);
        }
        static ::GlobalNamespace::BuilderAction CreateDropPiece(int cmdId, int pieceId, ::BNM::Structures::Unity::Vector3 localPosition, ::BNM::Structures::Unity::Quaternion localRotation, ::BNM::Structures::Unity::Vector3 velocity, ::BNM::Structures::Unity::Vector3 angVelocity, int actorNumber) {
            static BNM::Method<::GlobalNamespace::BuilderAction> _m = GetClass().GetMethod(O("CreateDropPiece"), {"cmdId", "pieceId", "localPosition", "localRotation", "velocity", "angVelocity", "actorNumber"});
            return _m.Call(cmdId, pieceId, localPosition, localRotation, velocity, angVelocity, actorNumber);
        }
        static ::GlobalNamespace::BuilderAction CreateDropPieceRollback(int cmdId, ::GlobalNamespace::BuilderPiece* rootPiece, int actorNumber) {
            static BNM::Method<::GlobalNamespace::BuilderAction> _m = GetClass().GetMethod(O("CreateDropPieceRollback"), {"cmdId", "rootPiece", "actorNumber"});
            return _m.Call(cmdId, rootPiece, actorNumber);
        }
        static ::GlobalNamespace::BuilderAction CreateMakeRoot(int cmdId, int pieceId) {
            static BNM::Method<::GlobalNamespace::BuilderAction> _m = GetClass().GetMethod(O("CreateMakeRoot"), {"cmdId", "pieceId"});
            return _m.Call(cmdId, pieceId);
        }
    };
}
