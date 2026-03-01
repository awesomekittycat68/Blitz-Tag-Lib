#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/BuilderPiece_State.hpp"

namespace GorillaTagScripts {
    struct BuilderPieceData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts", "BuilderPieceData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetHeldByActorNumber() {
            static BNM::Field<int> _field = GetClass().GetField(O("heldByActorNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsArmPiece() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isArmPiece"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsBuiltIntoTable() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isBuiltIntoTable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetParentPieceIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("parentPieceIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPieceId() {
            static BNM::Field<int> _field = GetClass().GetField(O("pieceId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPieceIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("pieceIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPreventSnapUntilMoved() {
            static BNM::Field<int> _field = GetClass().GetField(O("preventSnapUntilMoved"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPrivatePlotIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("privatePlotIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRequestedParentPieceIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("requestedParentPieceIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderPiece_State GetState() {
            static BNM::Field<::GlobalNamespace::BuilderPiece_State> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetHeldByActorNumber(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("heldByActorNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsArmPiece(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isArmPiece"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsBuiltIntoTable(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isBuiltIntoTable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParentPieceIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("parentPieceIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPieceId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("pieceId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPieceIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("pieceIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPreventSnapUntilMoved(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("preventSnapUntilMoved"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrivatePlotIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("privatePlotIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRequestedParentPieceIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("requestedParentPieceIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetState(::GlobalNamespace::BuilderPiece_State value) {
            static BNM::Field<::GlobalNamespace::BuilderPiece_State> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
