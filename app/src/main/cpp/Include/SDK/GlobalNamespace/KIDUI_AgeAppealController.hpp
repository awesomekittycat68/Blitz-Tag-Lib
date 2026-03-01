#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SessionStatus.hpp"

namespace GlobalNamespace {
    struct KIDUI_AgeAppealController : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "KIDUI_AgeAppealController");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::KIDUI_AgeAppealController* get_Instance() {
            static BNM::Method<::GlobalNamespace::KIDUI_AgeAppealController*> method = GetClass().GetMethod(O("get_Instance"));
            return method.Call();
        }
        static ::GlobalNamespace::KIDUI_AgeAppealController* GetInstance() {
            static BNM::Field<::GlobalNamespace::KIDUI_AgeAppealController*> field = GetClass().GetField("_instance");
            return field.Get();
        }
        ::GlobalNamespace::KIDUI_AgeAppealController* GetInstance_pg() {
            static BNM::Method<::GlobalNamespace::KIDUI_AgeAppealController*> _method = GetClass().GetMethod(O("get_Instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::KIDUI_RestrictedAccessScreen* GetFirstAgeAppealScreen() {
            static BNM::Field<::GlobalNamespace::KIDUI_RestrictedAccessScreen*> _field = GetClass().GetField(O("_firstAgeAppealScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::KIDUI_AgeAppealController* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::KIDUI_AgeAppealController*> _field = GetClass().GetField(O("_instance"));
            return _field.Get();
        }
        ::GlobalNamespace::KIDUI_TooYoungToPlay* GetTooYoungToPlayScreen() {
            static BNM::Field<::GlobalNamespace::KIDUI_TooYoungToPlay*> _field = GetClass().GetField(O("_tooYoungToPlayScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetFirstAgeAppealScreen(::GlobalNamespace::KIDUI_RestrictedAccessScreen* value) {
            static BNM::Field<::GlobalNamespace::KIDUI_RestrictedAccessScreen*> _field = GetClass().GetField(O("_firstAgeAppealScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::KIDUI_AgeAppealController* value) {
            static BNM::Field<::GlobalNamespace::KIDUI_AgeAppealController*> _field = GetClass().GetField(O("_instance"));
            _field.Set(value);
        }
        void SetTooYoungToPlayScreen(::GlobalNamespace::KIDUI_TooYoungToPlay* value) {
            static BNM::Field<::GlobalNamespace::KIDUI_TooYoungToPlay*> _field = GetClass().GetField(O("_tooYoungToPlayScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CloseKIDScreens() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CloseKIDScreens"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static ::GlobalNamespace::KIDUI_AgeAppealController* get_Instance_1() {
            static BNM::Method<::GlobalNamespace::KIDUI_AgeAppealController*> _m = GetClass().GetMethod(O("get_Instance"));
            return _m.Call();
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnQuitGamePressed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnQuitGamePressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP0 = void*>
        void StartAgeAppealScreens(TP0 sessionStatus) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartAgeAppealScreens"), {"sessionStatus"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(sessionStatus);
        }
        void StartTooYoungToPlayScreen() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartTooYoungToPlayScreen"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
