#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct PhotonMessageInfoWrapped : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "PhotonMessageInfoWrapped");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        double GetSentServerTime() {
            static BNM::Method<double> _method = GetClass().GetMethod(O("get_SentServerTime"));
            return _method.Call();
        }
        ::Photon_Pun::PhotonMessageInfo GetPunInfo() {
            static BNM::Field<::Photon_Pun::PhotonMessageInfo> _field = GetClass().GetField(O("punInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::NetPlayer* GetSender() {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("Sender"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSenderID() {
            static BNM::Field<int> _field = GetClass().GetField(O("senderID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSentTick() {
            static BNM::Field<int> _field = GetClass().GetField(O("sentTick"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double get_SentServerTime() {
            static BNM::Method<double> _m = GetClass().GetMethod(O("get_SentServerTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
