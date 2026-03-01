#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GRUIScoreboard_ScoreboardScreen.hpp"

namespace GlobalNamespace {
    struct GRUIScoreboardEntry : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRUIScoreboardEntry");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetCurrencySet() {
            static BNM::Field<int> _field = GetClass().GetField(O("currencySet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetDefaultUIParent() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("defaultUIParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPlayerActorId() {
            static BNM::Field<int> _field = GetClass().GetField(O("playerActorId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetPlayerCurrencyLabel() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("playerCurrencyLabel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetPlayerCutLabel() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("playerCutLabel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetPlayerNameLabel() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("playerNameLabel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetPlayerPercentageLabel() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("playerPercentageLabel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetPlayerTimeLabel() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("playerTimeLabel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetPlayerTitleLabel() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("playerTitleLabel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetShiftCutParent() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("shiftCutParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetTitleSet() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("titleSet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrencySet(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currencySet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultUIParent(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("defaultUIParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerActorId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("playerActorId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerCurrencyLabel(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("playerCurrencyLabel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerCutLabel(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("playerCutLabel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerNameLabel(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("playerNameLabel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerPercentageLabel(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("playerPercentageLabel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerTimeLabel(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("playerTimeLabel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerTitleLabel(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("playerTitleLabel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShiftCutParent(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("shiftCutParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTitleSet(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("titleSet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Refresh(::GlobalNamespace::VRRig* vrRig, ::GlobalNamespace::GRUIScoreboard_ScoreboardScreen screenType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Refresh"), {"vrRig", "screenType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(vrRig, screenType);
        }
        void Setup(::GlobalNamespace::VRRig* vrRig, int playerActorId, ::GlobalNamespace::GRUIScoreboard_ScoreboardScreen screenType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Setup"), {"vrRig", "playerActorId", "screenType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(vrRig, playerActorId, screenType);
        }
    };
}
