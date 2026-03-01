#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GRUIScoreboard_ScoreboardScreen.hpp"

namespace GlobalNamespace {
    struct GRUIScoreboard : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRUIScoreboard");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::TMP_Text* GetButtonText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("buttonText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetCalcTextParent() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("calcTextParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRUIScoreboard_ScoreboardScreen GetCurrentScreen() {
            static BNM::Field<::GlobalNamespace::GRUIScoreboard_ScoreboardScreen> _field = GetClass().GetField(O("currentScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GRUIScoreboardEntry*>* GetEntries() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRUIScoreboardEntry*>*> _field = GetClass().GetField(O("entries"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetInfoTextParent() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("infoTextParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetTotal() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("total"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetButtonText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("buttonText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCalcTextParent(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("calcTextParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentScreen(::GlobalNamespace::GRUIScoreboard_ScoreboardScreen value) {
            static BNM::Field<::GlobalNamespace::GRUIScoreboard_ScoreboardScreen> _field = GetClass().GetField(O("currentScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEntries(::BNM::Structures::Mono::List<::GlobalNamespace::GRUIScoreboardEntry*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRUIScoreboardEntry*>*> _field = GetClass().GetField(O("entries"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInfoTextParent(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("infoTextParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTotal(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("total"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Refresh(::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>* vrRigs) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Refresh"), {"vrRigs"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(vrRigs);
        }
        void SliceUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SliceUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SwitchState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SwitchState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SwitchToScreen(::GlobalNamespace::GRUIScoreboard_ScoreboardScreen screenType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SwitchToScreen"), {"screenType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(screenType);
        }
        static bool ValidPage(::GlobalNamespace::GRUIScoreboard_ScoreboardScreen screen) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ValidPage"), {"screen"});
            return _m.Call(screen);
        }
    };
}
