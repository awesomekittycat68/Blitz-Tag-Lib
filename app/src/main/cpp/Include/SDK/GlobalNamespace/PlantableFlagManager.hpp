#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "FlagCauldronColorer_ColorMode.hpp"
#include "PlantableObject_AppliedColors.hpp"
#include "../Photon_Pun/MonoBehaviourPun.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct PlantableFlagManager : ::Photon_Pun::MonoBehaviourPun {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "PlantableFlagManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::GlobalNamespace::FlagCauldronColorer*>* GetCauldrons() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::FlagCauldronColorer*>*> _field = GetClass().GetField(O("cauldrons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::PlantableObject_AppliedColors>* GetFlagColors() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::PlantableObject_AppliedColors>*> _field = GetClass().GetField(O("flagColors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::PlantableObject*>* GetFlags() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::PlantableObject*>*> _field = GetClass().GetField(O("flags"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::FlagCauldronColorer_ColorMode>* GetMode() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::FlagCauldronColorer_ColorMode>*> _field = GetClass().GetField(O("mode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCauldrons(::BNM::Structures::Mono::Array<::GlobalNamespace::FlagCauldronColorer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::FlagCauldronColorer*>*> _field = GetClass().GetField(O("cauldrons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFlagColors(::BNM::Structures::Mono::Array<::GlobalNamespace::PlantableObject_AppliedColors>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::PlantableObject_AppliedColors>*> _field = GetClass().GetField(O("flagColors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFlags(::BNM::Structures::Mono::Array<::GlobalNamespace::PlantableObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::PlantableObject*>*> _field = GetClass().GetField(O("flags"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMode(::BNM::Structures::Mono::Array<::GlobalNamespace::FlagCauldronColorer_ColorMode>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::FlagCauldronColorer_ColorMode>*> _field = GetClass().GetField(O("mode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnPhotonSerializeView(::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPhotonSerializeView"), {"stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, info);
        }
        void RainbowifyAllFlags(float saturation, float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RainbowifyAllFlags"), {"saturation", "value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(saturation, value);
        }
        void ResetAllFlags() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetAllFlags"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ResetMyFlags() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetMyFlags"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateFlagColorRPC(int flagIndex, int colorIndex, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateFlagColorRPC"), {"flagIndex", "colorIndex", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(flagIndex, colorIndex, info);
        }
        void UpdateFlagColors() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateFlagColors"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
