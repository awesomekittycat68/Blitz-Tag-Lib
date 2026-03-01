#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CrystalNote.hpp"
#include "CrystalOctave.hpp"
#include "PhotonMessageInfoWrapped.hpp"
#include "Tappable.hpp"
#include "TimeSince.hpp"

namespace GlobalNamespace {
    struct GorillaCaveCrystal : ::GlobalNamespace::Tappable {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaCaveCrystal");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetAnimating() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_animating"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MeshRenderer* GetCrystalRenderer() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("_crystalRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetLerpInCurve() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_lerpInCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetLerpOutCurve() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_lerpOutCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTapStrength() {
            static BNM::Field<float> _field = GetClass().GetField(O("_tapStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TimeSince GetTimeSinceLastTap() {
            static BNM::Field<::GlobalNamespace::TimeSince> _field = GetClass().GetField(O("_timeSinceLastTap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CrystalNote GetNote() {
            static BNM::Field<::GlobalNamespace::CrystalNote> _field = GetClass().GetField(O("note"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CrystalOctave GetOctave() {
            static BNM::Field<::GlobalNamespace::CrystalOctave> _field = GetClass().GetField(O("octave"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetOverrideSoundAndMaterial() {
            static BNM::Field<bool> _field = GetClass().GetField(O("overrideSoundAndMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TapInnerGlow* GetTapScript() {
            static BNM::Field<::GlobalNamespace::TapInnerGlow*> _field = GetClass().GetField(O("tapScript"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaCaveCrystalVisuals* GetVisuals() {
            static BNM::Field<::GlobalNamespace::GorillaCaveCrystalVisuals*> _field = GetClass().GetField(O("visuals"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAnimating(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_animating"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCrystalRenderer(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("_crystalRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLerpInCurve(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_lerpInCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLerpOutCurve(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_lerpOutCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTapStrength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_tapStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeSinceLastTap(::GlobalNamespace::TimeSince value) {
            static BNM::Field<::GlobalNamespace::TimeSince> _field = GetClass().GetField(O("_timeSinceLastTap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNote(::GlobalNamespace::CrystalNote value) {
            static BNM::Field<::GlobalNamespace::CrystalNote> _field = GetClass().GetField(O("note"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOctave(::GlobalNamespace::CrystalOctave value) {
            static BNM::Field<::GlobalNamespace::CrystalOctave> _field = GetClass().GetField(O("octave"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverrideSoundAndMaterial(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("overrideSoundAndMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTapScript(::GlobalNamespace::TapInnerGlow* value) {
            static BNM::Field<::GlobalNamespace::TapInnerGlow*> _field = GetClass().GetField(O("tapScript"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVisuals(::GlobalNamespace::GorillaCaveCrystalVisuals* value) {
            static BNM::Field<::GlobalNamespace::GorillaCaveCrystalVisuals*> _field = GetClass().GetField(O("visuals"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AnimateCrystal() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AnimateCrystal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnTapLocal(float tapStrength, float tapTime, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTapLocal"), {"tapStrength", "tapTime", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(tapStrength, tapTime, info);
        }
    };
}
