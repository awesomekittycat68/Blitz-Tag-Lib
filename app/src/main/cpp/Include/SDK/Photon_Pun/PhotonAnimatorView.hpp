#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "MonoBehaviourPun.hpp"
#include "PhotonAnimatorView_ParameterType.hpp"
#include "PhotonAnimatorView_SynchronizeType.hpp"
#include "PhotonMessageInfo.hpp"

namespace Photon_Pun {
    struct PhotonAnimatorView : ::Photon_Pun::MonoBehaviourPun {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Pun", "PhotonAnimatorView");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Animator* GetMAnimator() {
            static BNM::Field<::Animator*> _field = GetClass().GetField(O("m_Animator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMLastDeserializeTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_LastDeserializeTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* GetMRaisedDiscreteTriggersCache() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("m_raisedDiscreteTriggersCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetMReceiverPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("m_ReceiverPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Pun::PhotonStreamQueue* GetMStreamQueue() {
            static BNM::Field<::Photon_Pun::PhotonStreamQueue*> _field = GetClass().GetField(O("m_StreamQueue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Photon_Pun::PhotonAnimatorView_SynchronizedLayer*>* GetMSynchronizeLayers() {
            static BNM::Field<::BNM::Structures::Mono::List<::Photon_Pun::PhotonAnimatorView_SynchronizedLayer*>*> _field = GetClass().GetField(O("m_SynchronizeLayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Photon_Pun::PhotonAnimatorView_SynchronizedParameter*>* GetMSynchronizeParameters() {
            static BNM::Field<::BNM::Structures::Mono::List<::Photon_Pun::PhotonAnimatorView_SynchronizedParameter*>*> _field = GetClass().GetField(O("m_SynchronizeParameters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetMWasSynchronizeTypeChanged() {
            static BNM::Field<bool> _field = GetClass().GetField(O("m_WasSynchronizeTypeChanged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetShowLayerWeightsInspector() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ShowLayerWeightsInspector"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetShowParameterInspector() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ShowParameterInspector"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTriggerUsageWarningDone() {
            static BNM::Field<bool> _field = GetClass().GetField(O("TriggerUsageWarningDone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMAnimator(::Animator* value) {
            static BNM::Field<::Animator*> _field = GetClass().GetField(O("m_Animator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMLastDeserializeTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_LastDeserializeTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMRaisedDiscreteTriggersCache(::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("m_raisedDiscreteTriggersCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMReceiverPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("m_ReceiverPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMStreamQueue(::Photon_Pun::PhotonStreamQueue* value) {
            static BNM::Field<::Photon_Pun::PhotonStreamQueue*> _field = GetClass().GetField(O("m_StreamQueue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMSynchronizeLayers(::BNM::Structures::Mono::List<::Photon_Pun::PhotonAnimatorView_SynchronizedLayer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Photon_Pun::PhotonAnimatorView_SynchronizedLayer*>*> _field = GetClass().GetField(O("m_SynchronizeLayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMSynchronizeParameters(::BNM::Structures::Mono::List<::Photon_Pun::PhotonAnimatorView_SynchronizedParameter*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Photon_Pun::PhotonAnimatorView_SynchronizedParameter*>*> _field = GetClass().GetField(O("m_SynchronizeParameters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMWasSynchronizeTypeChanged(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("m_WasSynchronizeTypeChanged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShowLayerWeightsInspector(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ShowLayerWeightsInspector"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShowParameterInspector(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ShowParameterInspector"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTriggerUsageWarningDone(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("TriggerUsageWarningDone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CacheDiscreteTriggers() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CacheDiscreteTriggers"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DeserializeDataContinuously() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeserializeDataContinuously"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DeserializeDataDiscretly(::Photon_Pun::PhotonStream* stream) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeserializeDataDiscretly"), {"stream"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream);
        }
        void DeserializeSynchronizationTypeState(::Photon_Pun::PhotonStream* stream) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeserializeSynchronizationTypeState"), {"stream"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream);
        }
        bool DoesLayerSynchronizeTypeExist(int layerIndex) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("DoesLayerSynchronizeTypeExist"), {"layerIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(layerIndex);
        }
        bool DoesParameterSynchronizeTypeExist(::BNM::Structures::Mono::String* name) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("DoesParameterSynchronizeTypeExist"), {"name"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(name);
        }
        ::Photon_Pun::PhotonAnimatorView_SynchronizeType GetLayerSynchronizeType(int layerIndex) {
            static BNM::Method<::Photon_Pun::PhotonAnimatorView_SynchronizeType> _m = GetClass().GetMethod(O("GetLayerSynchronizeType"), {"layerIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(layerIndex);
        }
        ::Photon_Pun::PhotonAnimatorView_SynchronizeType GetParameterSynchronizeType(::BNM::Structures::Mono::String* name) {
            static BNM::Method<::Photon_Pun::PhotonAnimatorView_SynchronizeType> _m = GetClass().GetMethod(O("GetParameterSynchronizeType"), {"name"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(name);
        }
        ::BNM::Structures::Mono::List<::Photon_Pun::PhotonAnimatorView_SynchronizedLayer*>* GetSynchronizedLayers() {
            static BNM::Method<::BNM::Structures::Mono::List<::Photon_Pun::PhotonAnimatorView_SynchronizedLayer*>*> _m = GetClass().GetMethod(O("GetSynchronizedLayers"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::List<::Photon_Pun::PhotonAnimatorView_SynchronizedParameter*>* GetSynchronizedParameters() {
            static BNM::Method<::BNM::Structures::Mono::List<::Photon_Pun::PhotonAnimatorView_SynchronizedParameter*>*> _m = GetClass().GetMethod(O("GetSynchronizedParameters"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnPhotonSerializeView(::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPhotonSerializeView"), {"stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, info);
        }
        void SerializeDataContinuously() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SerializeDataContinuously"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SerializeDataDiscretly(::Photon_Pun::PhotonStream* stream) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SerializeDataDiscretly"), {"stream"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream);
        }
        void SerializeSynchronizationTypeState(::Photon_Pun::PhotonStream* stream) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SerializeSynchronizationTypeState"), {"stream"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream);
        }
        void SetLayerSynchronized(int layerIndex, ::Photon_Pun::PhotonAnimatorView_SynchronizeType synchronizeType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetLayerSynchronized"), {"layerIndex", "synchronizeType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(layerIndex, synchronizeType);
        }
        void SetParameterSynchronized(::BNM::Structures::Mono::String* name, ::Photon_Pun::PhotonAnimatorView_ParameterType type, ::Photon_Pun::PhotonAnimatorView_SynchronizeType synchronizeType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetParameterSynchronized"), {"name", "type", "synchronizeType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(name, type, synchronizeType);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
