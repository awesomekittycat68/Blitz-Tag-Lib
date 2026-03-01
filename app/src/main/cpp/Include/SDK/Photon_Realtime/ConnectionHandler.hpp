#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Realtime {
    struct ConnectionHandler : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Realtime", "ConnectionHandler");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Photon_Realtime::LoadBalancingClient* GetClient() {
            static BNM::Method<::Photon_Realtime::LoadBalancingClient*> _method = GetClass().GetMethod(O("get_Client"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetClient(::Photon_Realtime::LoadBalancingClient* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Client"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetCountSendAcksOnly() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_CountSendAcksOnly"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCountSendAcksOnly(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_CountSendAcksOnly"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetFallbackThreadRunning() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_FallbackThreadRunning"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetApplyDontDestroyOnLoad() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ApplyDontDestroyOnLoad"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static bool GetAppQuits() {
            static BNM::Field<bool> _field = GetClass().GetField(O("AppQuits"));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetBackgroundStopwatch() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("backgroundStopwatch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDidSendAcks() {
            static BNM::Field<bool> _field = GetClass().GetField(O("didSendAcks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDisconnectAfterKeepAlive() {
            static BNM::Field<bool> _field = GetClass().GetField(O("DisconnectAfterKeepAlive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint8_t GetFallbackThreadId() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("fallbackThreadId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetKeepAliveInBackground() {
            static BNM::Field<int> _field = GetClass().GetField(O("KeepAliveInBackground"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetApplyDontDestroyOnLoad(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ApplyDontDestroyOnLoad"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetAppQuits(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("AppQuits"));
            _field.Set(value);
        }
        void SetDidSendAcks(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("didSendAcks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisconnectAfterKeepAlive(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("DisconnectAfterKeepAlive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFallbackThreadId(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("fallbackThreadId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetKeepAliveInBackground(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("KeepAliveInBackground"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::Photon_Realtime::LoadBalancingClient* get_Client() {
            static BNM::Method<::Photon_Realtime::LoadBalancingClient*> _m = GetClass().GetMethod(O("get_Client"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_CountSendAcksOnly() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_CountSendAcksOnly"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_FallbackThreadRunning() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_FallbackThreadRunning"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnApplicationQuit() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnApplicationQuit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool RealtimeFallbackThread() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("RealtimeFallbackThread"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_Client(::Photon_Realtime::LoadBalancingClient* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Client"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_CountSendAcksOnly(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_CountSendAcksOnly"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void StartFallbackSendAckThread() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartFallbackSendAckThread"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void StaticReset() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StaticReset"));
            _m.Call();
        }
        void StopFallbackSendAckThread() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StopFallbackSendAckThread"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
