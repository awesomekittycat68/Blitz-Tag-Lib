#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Pun_UtilityScripts {
    struct PhotonLagSimulationGui : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Pun.UtilityScripts", "PhotonLagSimulationGui");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::ExitGames_Client_Photon::PhotonPeer* GetPeer() {
            static BNM::Method<::ExitGames_Client_Photon::PhotonPeer*> _method = GetClass().GetMethod(O("get_Peer"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetPeer(::ExitGames_Client_Photon::PhotonPeer* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Peer"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetVisible() {
            static BNM::Field<bool> _field = GetClass().GetField(O("Visible"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetWindowId() {
            static BNM::Field<int> _field = GetClass().GetField(O("WindowId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Rect GetWindowRect() {
            static BNM::Field<::BNM::Structures::Unity::Rect> _field = GetClass().GetField(O("WindowRect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetVisible(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("Visible"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWindowId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("WindowId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWindowRect(::BNM::Structures::Unity::Rect value) {
            static BNM::Field<::BNM::Structures::Unity::Rect> _field = GetClass().GetField(O("WindowRect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::ExitGames_Client_Photon::PhotonPeer* get_Peer() {
            static BNM::Method<::ExitGames_Client_Photon::PhotonPeer*> _m = GetClass().GetMethod(O("get_Peer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
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
        void OnGUI() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGUI"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_Peer(::ExitGames_Client_Photon::PhotonPeer* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Peer"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
