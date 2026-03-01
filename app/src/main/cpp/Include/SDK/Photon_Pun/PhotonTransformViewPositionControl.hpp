#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "PhotonMessageInfo.hpp"

namespace Photon_Pun {
    struct PhotonTransformViewPositionControl : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Pun", "PhotonTransformViewPositionControl");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetMCurrentSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_CurrentSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetMLastSerializeTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("m_LastSerializeTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Pun::PhotonTransformViewPositionModel* GetMModel() {
            static BNM::Field<::Photon_Pun::PhotonTransformViewPositionModel*> _field = GetClass().GetField(O("m_Model"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetMNetworkPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("m_NetworkPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetMOldNetworkPositions() {
            static BNM::Field<void*> _field = GetClass().GetField(O("m_OldNetworkPositions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetMSynchronizedSpeed() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("m_SynchronizedSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMSynchronizedTurnSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_SynchronizedTurnSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetMUpdatedPositionAfterOnSerialize() {
            static BNM::Field<bool> _field = GetClass().GetField(O("m_UpdatedPositionAfterOnSerialize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMCurrentSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_CurrentSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMLastSerializeTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("m_LastSerializeTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMModel(::Photon_Pun::PhotonTransformViewPositionModel* value) {
            static BNM::Field<::Photon_Pun::PhotonTransformViewPositionModel*> _field = GetClass().GetField(O("m_Model"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMNetworkPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("m_NetworkPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMOldNetworkPositions(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("m_OldNetworkPositions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMSynchronizedSpeed(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("m_SynchronizedSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMSynchronizedTurnSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_SynchronizedTurnSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMUpdatedPositionAfterOnSerialize(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("m_UpdatedPositionAfterOnSerialize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void DeserializeData(::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeserializeData"), {"stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, info);
        }
        ::BNM::Structures::Unity::Vector3 GetExtrapolatedPositionOffset() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetExtrapolatedPositionOffset"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 GetNetworkPosition() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetNetworkPosition"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 GetOldestStoredNetworkPosition() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetOldestStoredNetworkPosition"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnPhotonSerializeView(::BNM::Structures::Unity::Vector3 currentPosition, ::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPhotonSerializeView"), {"currentPosition", "stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(currentPosition, stream, info);
        }
        void SerializeData(::BNM::Structures::Unity::Vector3 currentPosition, ::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SerializeData"), {"currentPosition", "stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(currentPosition, stream, info);
        }
        void SetSynchronizedValues(::BNM::Structures::Unity::Vector3 speed, float turnSpeed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetSynchronizedValues"), {"speed", "turnSpeed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(speed, turnSpeed);
        }
        ::BNM::Structures::Unity::Vector3 UpdatePosition(::BNM::Structures::Unity::Vector3 currentPosition) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("UpdatePosition"), {"currentPosition"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(currentPosition);
        }
    };
}
