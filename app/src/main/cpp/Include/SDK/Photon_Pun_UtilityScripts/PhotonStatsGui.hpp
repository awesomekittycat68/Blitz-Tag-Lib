#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Pun_UtilityScripts {
    struct PhotonStatsGui : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Pun.UtilityScripts", "PhotonStatsGui");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetButtonsOn() {
            static BNM::Field<bool> _field = GetClass().GetField(O("buttonsOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHealthStatsVisible() {
            static BNM::Field<bool> _field = GetClass().GetField(O("healthStatsVisible"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetStatsOn() {
            static BNM::Field<bool> _field = GetClass().GetField(O("statsOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Rect GetStatsRect() {
            static BNM::Field<::BNM::Structures::Unity::Rect> _field = GetClass().GetField(O("statsRect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetStatsWindowOn() {
            static BNM::Field<bool> _field = GetClass().GetField(O("statsWindowOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTrafficStatsOn() {
            static BNM::Field<bool> _field = GetClass().GetField(O("trafficStatsOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTurnOn() {
            static BNM::Field<bool> _field = GetClass().GetField(O("turnOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetWindowId() {
            static BNM::Field<int> _field = GetClass().GetField(O("WindowId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetButtonsOn(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("buttonsOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHealthStatsVisible(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("healthStatsVisible"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStatsOn(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("statsOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStatsRect(::BNM::Structures::Unity::Rect value) {
            static BNM::Field<::BNM::Structures::Unity::Rect> _field = GetClass().GetField(O("statsRect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStatsWindowOn(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("statsWindowOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTrafficStatsOn(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("trafficStatsOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTurnOn(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("turnOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWindowId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("WindowId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void OnGUI() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGUI"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TrafficStatsWindow(int windowID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TrafficStatsWindow"), {"windowID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(windowID);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
