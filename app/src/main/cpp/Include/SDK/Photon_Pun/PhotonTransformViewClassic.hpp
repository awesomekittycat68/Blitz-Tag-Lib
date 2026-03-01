#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "MonoBehaviourPun.hpp"
#include "PhotonMessageInfo.hpp"

namespace Photon_Pun {
    struct PhotonTransformViewClassic : ::Photon_Pun::MonoBehaviourPun {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Pun", "PhotonTransformViewClassic");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetMFirstTake() {
            static BNM::Field<bool> _field = GetClass().GetField(O("m_firstTake"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Pun::PhotonView* GetMPhotonView() {
            static BNM::Field<::Photon_Pun::PhotonView*> _field = GetClass().GetField(O("m_PhotonView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Pun::PhotonTransformViewPositionControl* GetMPositionControl() {
            static BNM::Field<::Photon_Pun::PhotonTransformViewPositionControl*> _field = GetClass().GetField(O("m_PositionControl"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Pun::PhotonTransformViewPositionModel* GetMPositionModel() {
            static BNM::Field<::Photon_Pun::PhotonTransformViewPositionModel*> _field = GetClass().GetField(O("m_PositionModel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetMReceivedNetworkUpdate() {
            static BNM::Field<bool> _field = GetClass().GetField(O("m_ReceivedNetworkUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Pun::PhotonTransformViewRotationControl* GetMRotationControl() {
            static BNM::Field<::Photon_Pun::PhotonTransformViewRotationControl*> _field = GetClass().GetField(O("m_RotationControl"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Pun::PhotonTransformViewRotationModel* GetMRotationModel() {
            static BNM::Field<::Photon_Pun::PhotonTransformViewRotationModel*> _field = GetClass().GetField(O("m_RotationModel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Pun::PhotonTransformViewScaleControl* GetMScaleControl() {
            static BNM::Field<::Photon_Pun::PhotonTransformViewScaleControl*> _field = GetClass().GetField(O("m_ScaleControl"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Pun::PhotonTransformViewScaleModel* GetMScaleModel() {
            static BNM::Field<::Photon_Pun::PhotonTransformViewScaleModel*> _field = GetClass().GetField(O("m_ScaleModel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMFirstTake(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("m_firstTake"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPhotonView(::Photon_Pun::PhotonView* value) {
            static BNM::Field<::Photon_Pun::PhotonView*> _field = GetClass().GetField(O("m_PhotonView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPositionControl(::Photon_Pun::PhotonTransformViewPositionControl* value) {
            static BNM::Field<::Photon_Pun::PhotonTransformViewPositionControl*> _field = GetClass().GetField(O("m_PositionControl"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPositionModel(::Photon_Pun::PhotonTransformViewPositionModel* value) {
            static BNM::Field<::Photon_Pun::PhotonTransformViewPositionModel*> _field = GetClass().GetField(O("m_PositionModel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMReceivedNetworkUpdate(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("m_ReceivedNetworkUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMRotationControl(::Photon_Pun::PhotonTransformViewRotationControl* value) {
            static BNM::Field<::Photon_Pun::PhotonTransformViewRotationControl*> _field = GetClass().GetField(O("m_RotationControl"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMRotationModel(::Photon_Pun::PhotonTransformViewRotationModel* value) {
            static BNM::Field<::Photon_Pun::PhotonTransformViewRotationModel*> _field = GetClass().GetField(O("m_RotationModel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMScaleControl(::Photon_Pun::PhotonTransformViewScaleControl* value) {
            static BNM::Field<::Photon_Pun::PhotonTransformViewScaleControl*> _field = GetClass().GetField(O("m_ScaleControl"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMScaleModel(::Photon_Pun::PhotonTransformViewScaleModel* value) {
            static BNM::Field<::Photon_Pun::PhotonTransformViewScaleModel*> _field = GetClass().GetField(O("m_ScaleModel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnPhotonSerializeView(::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPhotonSerializeView"), {"stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, info);
        }
        void SetSynchronizedValues(::BNM::Structures::Unity::Vector3 speed, float turnSpeed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetSynchronizedValues"), {"speed", "turnSpeed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(speed, turnSpeed);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdatePosition() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdatePosition"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateRotation() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateRotation"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateScale() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateScale"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
