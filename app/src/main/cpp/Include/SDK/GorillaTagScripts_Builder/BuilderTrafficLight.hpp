#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BuilderTrafficLight_LightState.hpp"

namespace GorillaTagScripts_Builder {
    struct BuilderTrafficLight : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.Builder", "BuilderTrafficLight");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetCycleDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("cycleDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MeshRenderer* GetGreenLight() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("greenLight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetGreenOff() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("greenOff"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetGreenOn() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("greenOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts_Builder::BuilderTrafficLight_LightState GetLightState() {
            static BNM::Field<::GorillaTagScripts_Builder::BuilderTrafficLight_LightState> _field = GetClass().GetField(O("lightState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetMaterialProps() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("materialProps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderPiece* GetPiece() {
            static BNM::Field<::GlobalNamespace::BuilderPiece*> _field = GetClass().GetField(O("piece"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MeshRenderer* GetRedLight() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("redLight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetRedOff() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("redOff"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetRedOn() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("redOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStartPercentageOffset() {
            static BNM::Field<float> _field = GetClass().GetField(O("startPercentageOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetStateCurve() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("stateCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MeshRenderer* GetYellowLight() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("yellowLight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetYellowOff() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("yellowOff"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetYellowOn() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("yellowOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCycleDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("cycleDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGreenLight(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("greenLight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGreenOff(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("greenOff"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGreenOn(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("greenOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLightState(::GorillaTagScripts_Builder::BuilderTrafficLight_LightState value) {
            static BNM::Field<::GorillaTagScripts_Builder::BuilderTrafficLight_LightState> _field = GetClass().GetField(O("lightState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaterialProps(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("materialProps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPiece(::GlobalNamespace::BuilderPiece* value) {
            static BNM::Field<::GlobalNamespace::BuilderPiece*> _field = GetClass().GetField(O("piece"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRedLight(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("redLight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRedOff(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("redOff"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRedOn(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("redOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartPercentageOffset(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("startPercentageOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStateCurve(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("stateCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetYellowLight(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("yellowLight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetYellowOff(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("yellowOff"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetYellowOn(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("yellowOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
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
        void SetState(::GorillaTagScripts_Builder::BuilderTrafficLight_LightState state) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetState"), {"state"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(state);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
