#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../ExitGames_Client_Photon/SendOptions.hpp"
#include "PhotonEvent_RaiseMode.hpp"
#include "PhotonMessageInfoWrapped.hpp"

namespace GlobalNamespace {
    struct PhotonEvent : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "PhotonEvent");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int MAX_EVENT_ARGS = 20;
        static constexpr int INVALID_ID = -1;
        static constexpr uint8_t PHOTON_EVENT_CODE = 176;
        bool GetFailSilent() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_failSilent"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetFailSilent(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_failSilent"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetReliable() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_reliable"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetReliable(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_reliable"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        void add_OnError(::BNM::Structures::Mono::Action<::ExitGames_Client_Photon::EventData*, ::BNM::IL2CPP::Il2CppObject*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnError"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnError(::BNM::Structures::Mono::Action<::ExitGames_Client_Photon::EventData*, ::BNM::IL2CPP::Il2CppObject*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnError"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        ::BNM::Structures::Mono::Action<int, int, ::BNM::Structures::Mono::Array<void*>*, ::GlobalNamespace::PhotonMessageInfoWrapped>* GetDelegate() {
            static BNM::Field<::BNM::Structures::Mono::Action<int, int, ::BNM::Structures::Mono::Array<void*>*, ::GlobalNamespace::PhotonMessageInfoWrapped>*> _field = GetClass().GetField(O("_delegate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDisposed() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_disposed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetEnabled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_enabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetEventId() {
            static BNM::Field<int> _field = GetClass().GetField(O("_eventId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetFailSilent_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_failSilent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetReliable_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_reliable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::Photon_Realtime::RaiseEventOptions* GetGReceiversAll() {
            static BNM::Field<::Photon_Realtime::RaiseEventOptions*> _field = GetClass().GetField(O("gReceiversAll"));
            return _field.Get();
        }
        static ::Photon_Realtime::RaiseEventOptions* GetGReceiversOthers() {
            static BNM::Field<::Photon_Realtime::RaiseEventOptions*> _field = GetClass().GetField(O("gReceiversOthers"));
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
        static ::BNM::Structures::Mono::Action<::ExitGames_Client_Photon::EventData*, ::BNM::IL2CPP::Il2CppObject*>* GetOnError() {
            static BNM::Field<::BNM::Structures::Mono::Action<::ExitGames_Client_Photon::EventData*, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("OnError"));
            return _field.Get();
        }
        void SetDelegate(::BNM::Structures::Mono::Action<int, int, ::BNM::Structures::Mono::Array<void*>*, ::GlobalNamespace::PhotonMessageInfoWrapped>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<int, int, ::BNM::Structures::Mono::Array<void*>*, ::GlobalNamespace::PhotonMessageInfoWrapped>*> _field = GetClass().GetField(O("_delegate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisposed(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_disposed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_enabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEventId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_eventId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFailSilent_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_failSilent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReliable_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_reliable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetOnError(::BNM::Structures::Mono::Action<::ExitGames_Client_Photon::EventData*, ::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::ExitGames_Client_Photon::EventData*, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("OnError"));
            _field.Set(value);
        }
        static void add_OnError_1(::BNM::Structures::Mono::Action<::ExitGames_Client_Photon::EventData*, ::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnError"), {"value"});
            _m.Call(value);
        }
        void AddCallback(::BNM::Structures::Mono::Action<int, int, ::BNM::Structures::Mono::Array<void*>*, ::GlobalNamespace::PhotonMessageInfoWrapped>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddCallback"), {"callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(callback);
        }
        static void AddPhotonEvent(::GlobalNamespace::PhotonEvent* photonEvent) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddPhotonEvent"), {"photonEvent"});
            _m.Call(photonEvent);
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
        bool Equals_1(::GlobalNamespace::PhotonEvent* other) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Equals"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(other);
        }
        template <typename TP0 = void*>
        bool Equals_1(TP0 obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Equals"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(obj);
        }
        void Finalize_1() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Finalize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool get_failSilent() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_failSilent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_reliable() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_reliable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetHashCode_1() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetHashCode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void InvokeDelegate(int sender, ::BNM::Structures::Mono::Array<void*>* args, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InvokeDelegate"), {"sender", "args", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(sender, args, info);
        }
        void Raise(::GlobalNamespace::PhotonEvent_RaiseMode mode, ::BNM::Structures::Mono::Array<void*>* args) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Raise"), {"mode", "args"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(mode, args);
        }
        void RaiseAll(::BNM::Structures::Mono::Array<void*>* args) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RaiseAll"), {"args"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(args);
        }
        void RaiseLocal(::BNM::Structures::Mono::Array<void*>* args) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RaiseLocal"), {"args"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(args);
        }
        void RaiseOthers(::BNM::Structures::Mono::Array<void*>* args) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RaiseOthers"), {"args"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(args);
        }
        static void remove_OnError_1(::BNM::Structures::Mono::Action<::ExitGames_Client_Photon::EventData*, ::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnError"), {"value"});
            _m.Call(value);
        }
        void RemoveCallback(::BNM::Structures::Mono::Action<int, int, ::BNM::Structures::Mono::Array<void*>*, ::GlobalNamespace::PhotonMessageInfoWrapped>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveCallback"), {"callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(callback);
        }
        static void RemovePhotonEvent(::GlobalNamespace::PhotonEvent* photonEvent) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemovePhotonEvent"), {"photonEvent"});
            _m.Call(photonEvent);
        }
        void set_failSilent(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_failSilent"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_reliable(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_reliable"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        static void StaticLoadAfterPhotonNetwork() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StaticLoadAfterPhotonNetwork"));
            _m.Call();
        }
        static void StaticOnEvent(::ExitGames_Client_Photon::EventData* evData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StaticOnEvent"), {"evData"});
            _m.Call(evData);
        }
    };
}
