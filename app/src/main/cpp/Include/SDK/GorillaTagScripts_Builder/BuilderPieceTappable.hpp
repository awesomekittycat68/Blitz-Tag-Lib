#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BuilderPieceTappable_FunctionalState.hpp"

namespace GorillaTagScripts_Builder {
    struct BuilderPieceTappable : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.Builder", "BuilderPieceTappable");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaTagScripts_Builder::BuilderPieceTappable_FunctionalState GetCurrentState() {
            static BNM::Field<::GorillaTagScripts_Builder::BuilderPieceTappable_FunctionalState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsPieceActive() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isPieceActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastTapTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastTapTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderPiece* GetMyPiece() {
            static BNM::Field<::GlobalNamespace::BuilderPiece*> _field = GetClass().GetField(O("myPiece"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnTapped() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnTapped"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTapCooldown() {
            static BNM::Field<float> _field = GetClass().GetField(O("tapCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrentState(::GorillaTagScripts_Builder::BuilderPieceTappable_FunctionalState value) {
            static BNM::Field<::GorillaTagScripts_Builder::BuilderPieceTappable_FunctionalState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsPieceActive(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isPieceActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastTapTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastTapTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMyPiece(::GlobalNamespace::BuilderPiece* value) {
            static BNM::Field<::GlobalNamespace::BuilderPiece*> _field = GetClass().GetField(O("myPiece"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnTapped(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnTapped"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTapCooldown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("tapCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool CanTap() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanTap"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void FunctionalPieceUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FunctionalPieceUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool IsStateValid(uint8_t state) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsStateValid"), {"state"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(state);
        }
        void OnPieceActivate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPieceActivate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnPieceCreate(int pieceType, int pieceId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPieceCreate"), {"pieceType", "pieceId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pieceType, pieceId);
        }
        void OnPieceDeactivate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPieceDeactivate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnPieceDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPieceDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnPiecePlacementDeserialized() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPiecePlacementDeserialized"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnStateChanged(uint8_t newState, ::GlobalNamespace::NetPlayer* instigator, int timeStamp) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnStateChanged"), {"newState", "instigator", "timeStamp"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState, instigator, timeStamp);
        }
        void OnStateRequest(uint8_t newState, ::GlobalNamespace::NetPlayer* instigator, int timeStamp) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnStateRequest"), {"newState", "instigator", "timeStamp"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState, instigator, timeStamp);
        }
        void OnTapLocal(float tapStrength) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTapLocal"), {"tapStrength"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(tapStrength);
        }
        void OnTapReplicated() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTapReplicated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
