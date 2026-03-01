#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Voice_Unity_UtilityScripts {
    struct PhotonVoiceStatsGui : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice.Unity.UtilityScripts", "PhotonVoiceStatsGui");
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
        ::ExitGames_Client_Photon::PhotonPeer* GetPeer() {
            static BNM::Field<::ExitGames_Client_Photon::PhotonPeer*> _field = GetClass().GetField(O("peer"));
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
        ::Photon_Voice::VoiceClient* GetVoiceClient() {
            static BNM::Field<::Photon_Voice::VoiceClient*> _field = GetClass().GetField(O("voiceClient"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice_Unity::VoiceConnection* GetVoiceConnection() {
            static BNM::Field<::Photon_Voice_Unity::VoiceConnection*> _field = GetClass().GetField(O("voiceConnection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetVoiceStatsOn() {
            static BNM::Field<bool> _field = GetClass().GetField(O("voiceStatsOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetWindowId() {
            static BNM::Field<int> _field = GetClass().GetField(O("windowId"));
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
        void SetPeer(::ExitGames_Client_Photon::PhotonPeer* value) {
            static BNM::Field<::ExitGames_Client_Photon::PhotonPeer*> _field = GetClass().GetField(O("peer"));
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
        void SetVoiceClient(::Photon_Voice::VoiceClient* value) {
            static BNM::Field<::Photon_Voice::VoiceClient*> _field = GetClass().GetField(O("voiceClient"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoiceConnection(::Photon_Voice_Unity::VoiceConnection* value) {
            static BNM::Field<::Photon_Voice_Unity::VoiceConnection*> _field = GetClass().GetField(O("voiceConnection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoiceStatsOn(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("voiceStatsOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWindowId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("windowId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnGUI() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGUI"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TrafficStatsWindow(int windowId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TrafficStatsWindow"), {"windowId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(windowId);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
