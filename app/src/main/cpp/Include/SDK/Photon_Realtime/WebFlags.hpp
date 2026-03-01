#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Realtime {
    struct WebFlags : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Realtime", "WebFlags");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr uint8_t HttpForwardConst = 1;
        static constexpr uint8_t SendAuthCookieConst = 2;
        static constexpr uint8_t SendSyncConst = 4;
        static constexpr uint8_t SendStateConst = 8;
        bool GetHttpForward() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_HttpForward"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetHttpForward(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_HttpForward"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetSendAuthCookie() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_SendAuthCookie"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetSendAuthCookie(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_SendAuthCookie"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetSendState() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_SendState"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetSendState(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_SendState"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetSendSync() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_SendSync"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetSendSync(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_SendSync"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        static ::Photon_Realtime::WebFlags* GetDefault() {
            static BNM::Field<::Photon_Realtime::WebFlags*> _field = GetClass().GetField(O("Default"));
            return _field.Get();
        }
        uint8_t GetWebhookFlags() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("WebhookFlags"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetWebhookFlags(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("WebhookFlags"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool get_HttpForward() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_HttpForward"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_SendAuthCookie() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_SendAuthCookie"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_SendState() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_SendState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_SendSync() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_SendSync"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_HttpForward(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_HttpForward"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_SendAuthCookie(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_SendAuthCookie"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_SendState(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_SendState"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_SendSync(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_SendSync"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
