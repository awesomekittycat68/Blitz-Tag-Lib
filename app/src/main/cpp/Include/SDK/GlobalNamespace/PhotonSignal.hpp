#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../ExitGames_Client_Photon/SendOptions.hpp"
#include "PhotonSignalInfo.hpp"
#include "../Photon_Realtime/ReceiverGroup.hpp"

namespace GlobalNamespace {
    struct PhotonSignal : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "PhotonSignal");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr uint8_t EVENT_CODE = 177;
        static constexpr int NULL_SIGNAL = 0;
        static constexpr int HEADER_SIZE = 2;
        int GetArgCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_argCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetEnabled() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_enabled"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void add_OnSignal(::GlobalNamespace::OnSignalReceived* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnSignal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnSignal(::GlobalNamespace::OnSignalReceived* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnSignal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        ::GlobalNamespace::OnSignalReceived* GetCallbacks() {
            static BNM::Field<::GlobalNamespace::OnSignalReceived*> _field = GetClass().GetField(O("_callbacks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetEnabled_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_enabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLocalOnly() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_localOnly"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetMute() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_mute"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Realtime::ReceiverGroup GetReceivers() {
            static BNM::Field<::Photon_Realtime::ReceiverGroup> _field = GetClass().GetField(O("_receivers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRefID() {
            static BNM::Field<int> _field = GetClass().GetField(O("_refID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSafeInvoke() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_safeInvoke"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSignalID() {
            static BNM::Field<int> _field = GetClass().GetField(O("_signalID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::Photon_Realtime::ReceiverGroup, ::Photon_Realtime::RaiseEventOptions*>* GetGGroupToOptions() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::Photon_Realtime::ReceiverGroup, ::Photon_Realtime::RaiseEventOptions*>*> _field = GetClass().GetField(O("gGroupToOptions"));
            return _field.Get();
        }
        static ::ExitGames_Client_Photon::SendOptions GetGSendReliable() {
            static BNM::Field<::ExitGames_Client_Photon::SendOptions> _field = GetClass().GetField(O("gSendReliable"));
            return _field.Get();
        }
        static ::ExitGames_Client_Photon::SendOptions GetGSendUnreliable() {
            static BNM::Field<::ExitGames_Client_Photon::SendOptions> _field = GetClass().GetField(O("gSendUnreliable"));
            return _field.Get();
        }
        void SetCallbacks(::GlobalNamespace::OnSignalReceived* value) {
            static BNM::Field<::GlobalNamespace::OnSignalReceived*> _field = GetClass().GetField(O("_callbacks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_enabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalOnly(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_localOnly"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMute(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_mute"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReceivers(::Photon_Realtime::ReceiverGroup value) {
            static BNM::Field<::Photon_Realtime::ReceiverGroup> _field = GetClass().GetField(O("_receivers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRefID(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_refID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSafeInvoke(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_safeInvoke"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSignalID(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_signalID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void _EventHandle(::ExitGames_Client_Photon::EventData* eventData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_EventHandle"), {"eventData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(eventData);
        }
        static void _Invoke(::GlobalNamespace::OnSignalReceived* _event, ::GlobalNamespace::PhotonSignalInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_Invoke"), {"_event", "info"});
            _m.Call(_event, info);
        }
        void _Relay(::BNM::Structures::Mono::Array<void*>* args, ::GlobalNamespace::PhotonSignalInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_Relay"), {"args", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(args, info);
        }
        static void _SafeInvoke(::GlobalNamespace::OnSignalReceived* _event, ::GlobalNamespace::PhotonSignalInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_SafeInvoke"), {"_event", "info"});
            _m.Call(_event, info);
        }
        void add_OnSignal_1(::GlobalNamespace::OnSignalReceived* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnSignal"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void ClearListeners() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearListeners"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Disable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Disable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Dispose() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Dispose"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Enable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Enable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Finalize_1() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Finalize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int get_argCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_argCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_enabled() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_enabled"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Raise() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Raise"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Raise(::Photon_Realtime::ReceiverGroup receivers) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Raise"), {"receivers"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(receivers);
        }
        void remove_OnSignal_1(::GlobalNamespace::OnSignalReceived* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnSignal"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Reset() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reset"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
