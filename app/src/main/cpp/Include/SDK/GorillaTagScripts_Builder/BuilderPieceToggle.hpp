#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BuilderPieceToggle_ToggleStates.hpp"
#include "BuilderPieceToggle_ToggleType.hpp"

namespace GorillaTagScripts_Builder {
    struct BuilderPieceToggle : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.Builder", "BuilderPieceToggle");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::GorillaTagScripts_Builder::BuilderSmallMonkeTrigger*>* GetBodyTriggers() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTagScripts_Builder::BuilderSmallMonkeTrigger*>*> _field = GetClass().GetField(O("bodyTriggers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Collider*>* GetColliders() {
            static BNM::Field<::BNM::Structures::Mono::List<::Collider*>*> _field = GetClass().GetField(O("colliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GorillaTagScripts_Builder::BuilderSmallHandTrigger*>* GetHandTriggers() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTagScripts_Builder::BuilderSmallHandTrigger*>*> _field = GetClass().GetField(O("handTriggers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderPiece* GetMyPiece() {
            static BNM::Field<::GlobalNamespace::BuilderPiece*> _field = GetClass().GetField(O("myPiece"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetOnlySmallMonkeTaps() {
            static BNM::Field<bool> _field = GetClass().GetField(O("onlySmallMonkeTaps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetToggledOff() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("ToggledOff"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetToggledOn() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("ToggledOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts_Builder::BuilderPieceToggle_ToggleStates GetToggleState() {
            static BNM::Field<::GorillaTagScripts_Builder::BuilderPieceToggle_ToggleStates> _field = GetClass().GetField(O("toggleState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts_Builder::BuilderPieceToggle_ToggleType GetToggleType() {
            static BNM::Field<::GorillaTagScripts_Builder::BuilderPieceToggle_ToggleType> _field = GetClass().GetField(O("toggleType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBodyTriggers(::BNM::Structures::Mono::Array<::GorillaTagScripts_Builder::BuilderSmallMonkeTrigger*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTagScripts_Builder::BuilderSmallMonkeTrigger*>*> _field = GetClass().GetField(O("bodyTriggers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetColliders(::BNM::Structures::Mono::List<::Collider*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Collider*>*> _field = GetClass().GetField(O("colliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandTriggers(::BNM::Structures::Mono::Array<::GorillaTagScripts_Builder::BuilderSmallHandTrigger*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTagScripts_Builder::BuilderSmallHandTrigger*>*> _field = GetClass().GetField(O("handTriggers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMyPiece(::GlobalNamespace::BuilderPiece* value) {
            static BNM::Field<::GlobalNamespace::BuilderPiece*> _field = GetClass().GetField(O("myPiece"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnlySmallMonkeTaps(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("onlySmallMonkeTaps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetToggledOff(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("ToggledOff"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetToggledOn(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("ToggledOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetToggleState(::GorillaTagScripts_Builder::BuilderPieceToggle_ToggleStates value) {
            static BNM::Field<::GorillaTagScripts_Builder::BuilderPieceToggle_ToggleStates> _field = GetClass().GetField(O("toggleState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetToggleType(::GorillaTagScripts_Builder::BuilderPieceToggle_ToggleType value) {
            static BNM::Field<::GorillaTagScripts_Builder::BuilderPieceToggle_ToggleType> _field = GetClass().GetField(O("toggleType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool CanTap() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanTap"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool CanTrigger() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanTrigger"));
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
        void OnBodyTriggerEntered(int playerNumber) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnBodyTriggerEntered"), {"playerNumber"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playerNumber);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnHandTriggerEntered() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnHandTriggerEntered"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
        void ToggleStateMaster(::Photon_Realtime::Player* instigator) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ToggleStateMaster"), {"instigator"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(instigator);
        }
        void ToggleStateRequest() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ToggleStateRequest"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
