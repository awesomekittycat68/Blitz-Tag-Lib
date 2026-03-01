#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Pun {
    struct PhotonMessageInfo : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Pun", "PhotonMessageInfo");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        double GetSentServerTime() {
            static BNM::Method<double> _method = GetClass().GetMethod(O("get_SentServerTime"));
            return _method.Call();
        }
        int GetSentServerTimestamp() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_SentServerTimestamp"));
            return _method.Call();
        }
        double GetTimestamp() {
            static BNM::Method<double> _method = GetClass().GetMethod(O("get_timestamp"));
            return _method.Call();
        }
        ::Photon_Pun::PhotonView* GetPhotonView() {
            static BNM::Field<::Photon_Pun::PhotonView*> _field = GetClass().GetField(O("photonView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Realtime::Player* GetSender() {
            static BNM::Field<::Photon_Realtime::Player*> _field = GetClass().GetField(O("Sender"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTimeInt() {
            static BNM::Field<int> _field = GetClass().GetField(O("timeInt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double get_SentServerTime() {
            static BNM::Method<double> _m = GetClass().GetMethod(O("get_SentServerTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_SentServerTimestamp() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_SentServerTimestamp"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        double get_timestamp() {
            static BNM::Method<double> _m = GetClass().GetMethod(O("get_timestamp"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* ToString_1() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToString"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
