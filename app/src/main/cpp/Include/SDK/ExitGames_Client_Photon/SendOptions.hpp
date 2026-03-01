#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "DeliveryMode.hpp"

namespace ExitGames_Client_Photon {
    struct SendOptions : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("ExitGames.Client.Photon", "SendOptions");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetReliability() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_Reliability"));
            return _method.Call();
        }
        void SetReliability(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Reliability"));
            _method.Call(value);
        }
        uint8_t GetChannel() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("Channel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ExitGames_Client_Photon::DeliveryMode GetDeliveryMode() {
            static BNM::Field<::ExitGames_Client_Photon::DeliveryMode> _field = GetClass().GetField(O("DeliveryMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetEncrypt() {
            static BNM::Field<bool> _field = GetClass().GetField(O("Encrypt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::ExitGames_Client_Photon::SendOptions GetSendReliable() {
            static BNM::Field<::ExitGames_Client_Photon::SendOptions> _field = GetClass().GetField(O("SendReliable"));
            return _field.Get();
        }
        static ::ExitGames_Client_Photon::SendOptions GetSendUnreliable() {
            static BNM::Field<::ExitGames_Client_Photon::SendOptions> _field = GetClass().GetField(O("SendUnreliable"));
            return _field.Get();
        }
        void SetChannel(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("Channel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDeliveryMode(::ExitGames_Client_Photon::DeliveryMode value) {
            static BNM::Field<::ExitGames_Client_Photon::DeliveryMode> _field = GetClass().GetField(O("DeliveryMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEncrypt(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("Encrypt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool get_Reliability() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_Reliability"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_Reliability(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Reliability"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
