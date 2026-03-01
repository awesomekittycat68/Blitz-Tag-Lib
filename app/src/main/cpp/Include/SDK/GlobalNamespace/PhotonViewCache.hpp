#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct PhotonViewCache : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "PhotonViewCache");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetInitialized() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_Initialized"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetInitialized(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Initialized"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetMIsRoomObject() {
            static BNM::Field<bool> _field = GetClass().GetField(O("m_isRoomObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Photon_Pun::PhotonView*>* GetMPhotonViews() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Photon_Pun::PhotonView*>*> _field = GetClass().GetField(O("m_photonViews"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMIsRoomObject(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("m_isRoomObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPhotonViews(::BNM::Structures::Mono::Array<::Photon_Pun::PhotonView*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Photon_Pun::PhotonView*>*> _field = GetClass().GetField(O("m_photonViews"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CheckPlayerInstantiate(::Photon_Realtime::Player* creator) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckPlayerInstantiate"), {"creator"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(creator);
        }
        void CheckRoomInstantiate(::Photon_Realtime::Player* creator) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckRoomInstantiate"), {"creator"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(creator);
        }
        bool get_Initialized() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_Initialized"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnPhotonInstantiate(::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPhotonInstantiate"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info);
        }
        void ReportInvalidPlayerInstantiate(::Photon_Realtime::Player* creator) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReportInvalidPlayerInstantiate"), {"creator"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(creator);
        }
        void ReportInvalidRoomInstantiate(::Photon_Realtime::Player* creator) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReportInvalidRoomInstantiate"), {"creator"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(creator);
        }
        void set_Initialized(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Initialized"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
