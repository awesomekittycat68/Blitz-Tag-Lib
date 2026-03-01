#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Voice_Unity_UtilityScripts {
    struct PhotonVoiceLagSimulationGui : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice.Unity.UtilityScripts", "PhotonVoiceLagSimulationGui");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetDebugLostPercent() {
            static BNM::Field<float> _field = GetClass().GetField(O("debugLostPercent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ExitGames_Client_Photon::PhotonPeer* GetPeer() {
            static BNM::Field<::ExitGames_Client_Photon::PhotonPeer*> _field = GetClass().GetField(O("peer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetVisible() {
            static BNM::Field<bool> _field = GetClass().GetField(O("visible"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice_Unity::VoiceConnection* GetVoiceConnection() {
            static BNM::Field<::Photon_Voice_Unity::VoiceConnection*> _field = GetClass().GetField(O("voiceConnection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetWindowId() {
            static BNM::Field<int> _field = GetClass().GetField(O("windowId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Rect GetWindowRect() {
            static BNM::Field<::BNM::Structures::Unity::Rect> _field = GetClass().GetField(O("windowRect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDebugLostPercent(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("debugLostPercent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPeer(::ExitGames_Client_Photon::PhotonPeer* value) {
            static BNM::Field<::ExitGames_Client_Photon::PhotonPeer*> _field = GetClass().GetField(O("peer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVisible(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("visible"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoiceConnection(::Photon_Voice_Unity::VoiceConnection* value) {
            static BNM::Field<::Photon_Voice_Unity::VoiceConnection*> _field = GetClass().GetField(O("voiceConnection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWindowId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("windowId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWindowRect(::BNM::Structures::Unity::Rect value) {
            static BNM::Field<::BNM::Structures::Unity::Rect> _field = GetClass().GetField(O("windowRect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void NetSimHasNoPeerWindow(int windowId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NetSimHasNoPeerWindow"), {"windowId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(windowId);
        }
        void NetSimWindow(int windowId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NetSimWindow"), {"windowId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(windowId);
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
    };
}
